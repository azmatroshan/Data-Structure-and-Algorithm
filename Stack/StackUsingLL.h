#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Node
{
    public:
    T data;
    Node *next;
    Node(T data){
        this->data = data;
        next=NULL;
    }
};
template <typename T>
class Stack
{
    int size;
    Node<T> *head,*tail;
    public:
    Stack()
    {
        size = 0;
        head=NULL;
        tail=NULL;
    }
    void Push(int x)
    {
        Node<T> *tmp = new Node<T>(x);
        if(head==NULL){
            head=tmp;
            tail=tmp;
        }
        else{
            tmp->next = head;
            head = tmp;
        }
        size++;
    }
    int Top()
    {
        if(head==NULL) return -1;
        return head->data;
    }
    bool isEmpty()
    {
        return head==NULL;
    }
    void Pop()
    {
        if(isEmpty()) cerr<<"Can't Pop() an Empty Stack\n";
        Node<T> *temp=head->next;
        delete head;
        head=temp;
        size--;
    }
    int Size()
    {
        return size;
    }
    void printS()
    {
        Node<T>* h=head;
        Print(h);
    }
    void Print(Node<T> *H)
    {
        if (H == NULL)
            return;
        Print(H->next);
        cout << H->data << " ";
    }
};
/**
 * Functions To be Implemented --->
 * Push()
 * Size()
 * Top()
 * isEmpty
 * Pop()
 **/