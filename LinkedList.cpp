#include "LinkedList.h"
#include <string>

LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
}

LinkedList::~LinkedList()
{
    Node* current = head;

    while (current != nullptr)
    {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

void LinkedList::append(char ch)
{
    Node* newNode = new Node(ch);

    if (head == nullptr)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void LinkedList::rotate()
{
    // If the list is empty or has only one node, do nothing
    if (head == nullptr || head->next == nullptr)
    {
        return;
    }

    // Remove the first node
    Node* firstNode = head;
    head = head->next;

    // Put it at the end
    tail->next = firstNode;
    tail = firstNode;
    tail->next = nullptr;
}

char LinkedList::getFirstChar() const
{
    if (head != nullptr)
    {
        return head->data;
    }

    return '\0';
}

std::string LinkedList::toString() const
{
    std::string result = "";
    Node* current = head;

    while (current != nullptr)
    {
        result += current->data;
        current = current->next;
    }

    return result;
}

bool LinkedList::isEmpty() const
{
    return head == nullptr;
}