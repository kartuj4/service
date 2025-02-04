#include "Ticket.h"

Ticket::Ticket(std::string m, std::string s, std::string st) {
    movie = m;
    session = s;
    seat = st;
}

std::string Ticket::getMovie() { return movie; }
std::string Ticket::getSession() { return session; }
std::string Ticket::getSeat() { return seat; }
