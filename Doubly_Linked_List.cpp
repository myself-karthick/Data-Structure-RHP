#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev, *next;
};
Node *head = NULL, *tail = NULL;
int length(int z = 1, int key=-1)
{
    Node *temp = head;
    int c = 0, f=0;
    while (temp != NULL)
    {
        c++;
        if(temp->data==key)
        {
            f=1;
        }
        temp = temp->next;
    }
    if(f==1 && z==2)
    {
        cout<<"Element present\n"; return 0;
    }
    else if(f==0 && z==2)
    {
        cout<<"Element not present\n"; return 0;
    }
    return c;
}
void insert(int ch, int val, int key)
{
    Node *NewNode = new Node();
    NewNode->data = val;
    NewNode->next = NewNode->prev = NULL;
    if (ch == 1)
    {
        if (head == NULL)
        {
            head = NewNode;
            tail = NewNode;
        }
        else
        {
            head->prev=NewNode;
            NewNode->next=head;
            head=NewNode;
        }
    }
    else if (ch == 2)
    {
        Node *temp = head;
        while (temp->data != key)
        {
            temp = temp->next;
        }
        NewNode->prev=temp->prev;
        NewNode->prev->next=NewNode;
        temp->prev=NewNode;
        NewNode->next=temp;
    }
    else if (ch == 3)
    {
        Node *temp = head;
        while (temp->data != key)
        {
            temp = temp->next;
        }
        NewNode->next=temp->next;
        NewNode->prev=temp;
        temp->next=NewNode;
        NewNode->next->prev=NewNode;
    }
    else if (ch == 4)
    {
        if (head == NULL)
        {
            cout << "Can't insert" << endl;
        }
        else
        {
            tail->next = NewNode;
            NewNode->prev=tail;
            tail = NewNode;
        }
    }
}
void delete_first()
{
    if (head == NULL)
        cout << "\n Underflow";
    else
    {
        Node *temp = head;
        head = head->next;
        temp->prev=NULL;
        delete (temp);
    }
}
void delete_last()
{
    if (head == NULL)
        cout << "\nUnderflow\n";
    else
    {
        Node *temp=tail;
        tail->prev->next=NULL;
        tail=tail->prev;
        delete (temp);
    }
}
void delete_curr(int key)
{
    if (head == NULL)
        cout << "\nUnderflow\n";
    else
    {
        int f = 0;
        Node *temp = head;
        while (temp->data != key && temp!=NULL)
        {
            temp = temp->next;
            f = 1;
        }
        if(temp==head)
        {
            delete_first();
        }
        else if(f == 1 && temp!=NULL && temp->next!=NULL) 
        {
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            delete (temp);
        }
        else if(f==1 && temp!=NULL && temp->next==NULL)
        {
            delete_last();
        }
        else
            cout << "\nElement not present \n";
    }
}

void insert_at(int pos)
{
    int l = length(), val;
    cin >> val;
    Node *NewNode = new Node();
    NewNode->data = val;
    NewNode->next = NewNode->prev = NULL;
    Node *temp = head;
    if (pos < 1 || pos > l)
    {
        cout << "Invalid Position!!!" << endl;
    }
    else
    {
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        NewNode->next = temp->next;
        NewNode->prev = temp;
        temp->next = NewNode;
        NewNode->next->prev = NewNode;
        cout << "Successfully! Elements inserted\n"<< endl;
    }
}
void delete_at(int pos)
{
    int l = length();
    int f = 0;
    if (pos < 1 || pos > l)
        cout << "Out of range" << endl;
    else if(pos==1)
        delete_first();
    else if(pos==l)
        delete_last();
    else
    {
        Node *temp = head, *t;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        t=temp->next;
        temp->next->next->prev=temp;
        temp->next=temp->next->next;
        delete (t);
    }
}
void display()
{
    cout << "\nElements present in the Linked list\n";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}
void Middle()
{
    Node *slow = head, *fast = head, *nextnode = NULL;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    cout << "\nMiddle is " << slow->data << endl;
}
void reverse()
{
    Node *Next=head, *temp=head;
    while (Next!=NULL)
    {
        Next=Next->next;
        swap(temp->prev,temp->next);
        temp=Next;
    }
    head=tail;
}
int main()
{
    int t, ch, key;
    while (1)
    {
        cout << "Menu" << endl;
        cout << "1)Insert Beginning" << endl;
        cout << "2)Insert before the particular element" << endl;
        cout << "3)Insert after the particular element" << endl;
        cout << "4)Insert at the end" << endl;
        cout << "5)Insert at particular position" << endl;
        cout << "6)Delete at begin" << endl;
        cout << "7)Delete the given element" << endl;
        cout << "8)Delete the last element" << endl;
        cout << "9)Delete at particular position" << endl;
        cout << "10)Display" << endl;
        cout << "11)Middle" << endl;
        cout << "12)Search the element"<<endl;
        cout << "13)Reverse the Doubly Linked list"<<endl;
        cout << "14)Exit" << endl;
        cout << "Enter the choice" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cin >> t;
            insert(ch, t, 0);
            break;
        case 2:
            cin >> t >> key;
            insert(ch, t, key);
            break;
        case 3:
            cin >> t >> key;
            insert(ch, t, key);
            break;
        case 4:
            cin >> t;
            insert(ch, t, 0);
            break;
        case 5:
            cin >> key;
            insert_at(key);
            break;
        case 6:
            delete_first();
            break;
        case 7:
            cin >> key;
            delete_curr(key);
            break;
        case 8:
            delete_last();
            break;
        case 9:
            cin >> key;
            delete_at(key);
            break;
        case 10:
            display();
            break;
        case 11:
            Middle();
            break;
        case 12:
            cin>>key;
            length(2, key);
            break;
        case 13:
            reverse();
            break;
        default:
            return 0;
        }
    }
}