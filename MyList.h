#ifndef MYLIST_H
#define MYLIST_H
#include "listtoolshb.h"

using namespace std;

template <class T>
class MyList
{
    public:
        MyList();
        void insertHead(T theData);
        T deleteHead();
        bool search(T &target);
        void display(Node<T>* Head);

    protected:

    private:
        Node <T> *head;
};

template <class T>
void display(Node<T>* Head)
{
    while (Head != NULL)
    {
        cout << Head->data << " ";
        Head = Head->next;
    }
}

//template <class T>
//T deleteHead(Node<T>** head_ref, Node* del)
//{
//
//}

template <class T>
bool search (T &target)
{
    Node* current = head;
    while (current != NULL)
    {
        if (current -> key == x)
            return true;
        current = current->next;
    }
    return false;
}
template <class T>
void insertHead(T theData)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->next = head;
    *head = newNode
}


#endif // MYLIST_H

