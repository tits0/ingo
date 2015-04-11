#ifndef SQLLITETICKET_H
#define SQLLITETICKET_H
#include <sqlite3.h> 
#include <Ticket.h> 
class SqlLiteTicket
{
private:
    SqlLiteTicket(const SqlLiteTicket& rhs);
    SqlLiteTicket& operator=(const SqlLiteTicket& rhs);

   sqlite3 *db;
   sqlite3_stmt *stmt;
   char *zErrMsg ;
   int rc;
   char* data;
   int prepare();
   
public:
    int exec(const char* sql); //0 if successful else -1
    int callback(int argc, char **argv, char **azColName);
    int Insert(std::vector<Ticket> & tickets);

    void errorLogCallback( int iErrCode, const char *zMsg);
    SqlLiteTicket();
    ~SqlLiteTicket();

};

#endif // SQLLITETICKET_H
