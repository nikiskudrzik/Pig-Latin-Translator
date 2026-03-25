#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <string>
#include "Node.h"

class LinkedList
{
private:
    Node* head;
    Node* tail;

public:
    LinkedList();
    ~LinkedList();

    void append(char ch);
    void rotate();
    char getFirstChar() const;
    std::string toString() const;
    bool isEmpty() const;
};

#endif