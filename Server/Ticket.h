#ifndef TICKET_H
#define TICKET_H

class Ticket
{
private:
    Ticket(const Ticket& rhs);
    Ticket& operator=(const Ticket& rhs);

public:
    static const int SROWS=3;
    static const int SCOLS=9;
    char m_matrix[SROWS][SCOLS];
    Ticket();
    ~Ticket();

};

#endif // TICKET_H
