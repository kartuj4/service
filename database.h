#ifndef DATABASE_H
#define DATABASE_H

#include "User.h"
#include "Ticket.h"
#include <vector>

class Database {
private:
    std::vector<User> users;
    std::vector<Ticket> tickets;
public:
    void loadUsers();
    void saveUsers();
    void loadTickets();
    void saveTickets();
    void addUser(User user);
    void addTicket(Ticket ticket);
};

#endif
