#ifndef TICKET_H
#define TICKET_H

#include <string>

class Ticket {
private:
    std::string movie;
    std::string session;
    std::string seat;
public:
    Ticket(std::string m, std::string s, std::string seat);
    std::string getMovie();
    std::string getSession();
    std::string getSeat();
};

#endif
