#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *head = NULL, *tail = NULL,*temp;
int length()
{
    Node *temp = head;
    int c = 1;
    while (temp->next!=head)
    {
        c++;
        temp = temp->next;
    }
    return c;
}
void insert(int ch, int val, int key)
{
    Node *NewNode = new Node();
    NewNode->data = val;
    NewNode->next = NewNode;
    if (ch == 1)
    {
        if (head == NULL)
        {
            head = NewNode;
            tail = NewNode;
        }
        else
        {
            
            NewNode->next=head;
            tail->next=NewNode;
            head=NewNode;
        }
    }
    else if (ch == 2)
    {
        Node *prev, *temp = head;
        while (temp->data != key)
        {
            prev = temp;
            temp = temp->next;
        }
        if(temp==head)
        {
            NewNode->next = head;
            tail->next = NewNode;
            head = NewNode;
        }
        else
        {
            NewNode->next = prev->next;
            prev->next = NewNode;
        }
    }
    else if (ch == 3)
    {
        Node *temp = head;
        while (temp->data != key)
        {
            temp = temp->next;
        }
        if(temp->next==head)
        {
            NewNode->next=head;
            temp->next=NewNode;
            tail=NewNode;
        }
        else
        {
            NewNode->next = temp->next;
            temp->next = NewNode;
        }
    }
    else if (ch == 4)
    {
        if (head == NULL)
        {
            cout << "Can't insert" << endl;
        }
        else
        {
            NewNode->next = head;
            tail->next = NewNode;
            tail=NewNode;
        }
    }
}
void insert_at(int pos)
{
    int l = length(), val ;
    Node *NewNode = new Node() ;
    cin >> val ;
    NewNode->data = val ;
    Node *temp = head ;
    if (head == NULL)
    {
        head = NewNode;
        tail = NewNode;
        cout << "Successfully! Elements inserted\n"<< endl;
    }
    else if (pos < 1 || pos > l)
    {
        cout << "Invalid Position!!!" << endl;
    }
    else
    {
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        if (temp == head)
        {
            while (temp->next != head)
            {
                temp = temp->next;
            }
            NewNode->next = head;
            temp->next = NewNode;
            head = NewNode;
        }
        else
        {
            NewNode->next = temp->next;
            temp->next = NewNode;
        }
        cout << "Successfully! Elements inserted\n"<< endl;
    }
}
void delete_first()
{
    if (head == NULL)
        cout << "\n Underflow";
    else
    {
        Node *t = head;
        if(head==head->next)
            head=NULL;
        else
        {
            head = head->next;
            tail->next=head;
        }
        delete (t);
    }
}
void delete_curr(int key)
{
    if (head == NULL)
        cout << "\nUnderflow\n";
    else
    {
        int f = 0;
        Node *temp = head, *prev = head;
        while (temp->data != key)
        {
            prev = temp;
            temp = temp->next;
            f = 1;
        }
        if(temp==head && temp->data==key)
            delete_first();
        else if(f == 1)
        {
            prev->next = temp->next;
            delete (temp);
        }
        else
            cout << "\nElement not present \n";
    }
}
void delete_last()
{
    if (head == NULL)
        cout << "\nUnderflow\n";
    else
    {
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = head;
        delete (tail);
        tail = temp;
    }
}

void delete_at(int pos)
{
    int l = length();
    if (pos < 1 || pos > l)
        cout << "Out of range" << endl;
    else
    {
        Node *temp = head, *t=head;
        for (int i = 1; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        if(pos==1)
            delete_first();
        else if(pos==l)
            delete_last();
        else
        {
            t = temp->next;
            temp->next = temp->next->next;
            delete (t);
        }
    }
}
void display()
{
    cout << "\nElements present in the Linked list\n";
    Node *temp = head;
    cout<<head->data<<endl;
    temp=temp->next;
    while (temp!=head)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
void Middle()
{
    Node *slow = head, *fast = head, *nextnode = NULL;
    while (fast != head && fast->next != head )
    {
        fast = fast->next->next ;
        slow = slow->next ;
    }
    cout << "\nMiddle is " << slow->data << endl ;
}
void reverse()
{
    Node *prev = NULL, *next, *curr = head;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head = prev;
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
        cout << "11)Exit" << endl;
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
            reverse();
            break;
        default:
            return 0;
        }
    }
}