#include "SqlLiteTicket.h"
#include <cstdio>
#include <string>
#include <iostream>     // std::cout


static void _errorLogCallback(void *pArg, int iErrCode, const char *zMsg){
    SqlLiteTicket* pSelf = (SqlLiteTicket*)pArg;
    pSelf->errorLogCallback(iErrCode, zMsg);
}

void SqlLiteTicket::errorLogCallback(int iErrCode, const char *zMsg){
  fprintf(stderr, "(%d) %s\n", iErrCode, zMsg);
}

SqlLiteTicket::SqlLiteTicket()
{
    zErrMsg = 0;
    data = "Callback function called";
   /* Open database */
   sqlite3_config(SQLITE_CONFIG_LOG, _errorLogCallback, this);
   rc = sqlite3_open("ticket.db", &db);
   if( rc ){
      char buffer[1024];
      snprintf(buffer,1024, "Can't open database: %s\n", sqlite3_errmsg(db));
      std::string  s = buffer;
      throw s;
   }else{
      std::cerr << "Opened database successfully\n";
   }
    
}


static int _callback(void *data, int argc, char **argv, char **azColName){
    SqlLiteTicket *self = (SqlLiteTicket *) data;
    self->callback( argc, argv, azColName);
}
int SqlLiteTicket::callback( int argc, char **argv, char **azColName){
   int i;
   fprintf(stderr, "%s: ", (const char*)data);
   for(i=0; i<argc; i++){
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}

 //0 if successful else -1
int SqlLiteTicket::exec(const char* sql)
{
   /* Execute SQL statement */
   rc = sqlite3_exec(db, sql, _callback, (void*)this, &zErrMsg);
   if( rc != SQLITE_OK ){
      fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   }else{
      fprintf(stdout, "Operation done successfully\n");
   }   
}

int SqlLiteTicket::prepare() {
  const char* sql = "insert into ticket values (?,?,?,?,?, ?,?,?,?,?, ?,?,?,?,?, ?,?,?,?,?, ?,?,?,?,?, ?,?,?,?,? )"  ;
  if ( sqlite3_prepare(db, sql, -1, &stmt, 0 ) != SQLITE_OK) {
    printf("\nCould not prepare statement.");
    return -1;
  }
}



int SqlLiteTicket::Insert(std::vector<Ticket> & tickets) {
    const char* isql = "create table Ticket ( \
    R1C1 int not null, R1C2 int not null, R1C3 int not null, R1C4 int not null, R1C5 int not null, R1C6 int not null, R1C7 int not null, R1C8 int not null, R1C9 int not null, R1C10 int not null, \
    R2C1 int not null, R2C2 int not null, R2C3 int not null, R2C4 int not null, R2C5 int not null, R2C6 int not null, R2C7 int not null, R2C8 int not null, R2C9 int not null, R2C10 int not null, \
    R3C1 int not null, R3C2 int not null, R3C3 int not null, R3C4 int not null, R3C5 int not null, R3C6 int not null, R3C7 int not null, R3C8 int not null, R3C9 int not null, R3C10 int not null \
    );"  ;
    exec(isql);
    prepare();
    int ticketSize = tickets.size();
    int rows=Ticket::SROWS;
    int cols=Ticket::SCOLS;
    sqlite3_exec(db, "BEGIN", 0, 0, 0);
    int ibind=0;
    for (int ticket=0; ticket < ticketSize; ++ticket) {
       for (int row=0; row < rows; ++row) {
           for (int col=0; col < cols; ++col) {
              ibind= (row*10)+1+col;
              if (sqlite3_bind_int(stmt, ibind, tickets[ticket].m_matrix[row][col]) != SQLITE_OK) {
                    printf("\nCould not bind int. %d  row:%d, col:%d\n", ibind, row, col);
                    sqlite3_exec(db, "ROLLBACK", 0, 0, 0);
                    return -1;
              }
           }
       }
      if (sqlite3_step(stmt) != SQLITE_DONE) {
        printf("\nCould not step (execute) stmt.\n");
        sqlite3_exec(db, "ROLLBACK", 0, 0, 0);
        return -2;
      }
      if ( sqlite3_reset(stmt) != SQLITE_OK) {
        printf("\nCould reset stmt.\n");
        sqlite3_exec(db, "ROLLBACK", 0, 0, 0);
        return -3;
      }
    }
    sqlite3_exec(db, "COMMIT", 0, 0, 0);
}

SqlLiteTicket::~SqlLiteTicket()
{
    sqlite3_close(db);
}

