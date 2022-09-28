#include <iostream>
using namespace std;
class Stack
{
    public:
        int data;
        Stack *next;
};
Stack *top=NULL, *temp;
void push()
{
    int val;
    cout<<"\nEnter the element to insert "<<endl;
    cin>>val;
    Stack *NewNode = new Stack();
    NewNode->data = val;
    NewNode->next = NULL;
    if (top == NULL)
    {
        top = NewNode;
    }
    else
    {
        NewNode->next = top;
        top = NewNode;
    }
}
void pop()
{
    if (top==NULL)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        cout << "Deleted element is " << top->data << endl;
        temp = top;
        top=top->next;
        delete(temp);
    }
}
void peek()
{
    if (top==NULL)
    {
        cout << "Underflow" << endl;
    }
    else
        cout << "Element present is " << top->data << endl;
}
void Length()
{
    int count=0;
    temp=top;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    cout<<"\nLength of stack : "<<count<<endl;
}
void Display()
{
    cout << "Elements present are" << endl;
    temp=top;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void secondmin()
{
    temp = top;
    
        int small=top->data, secondsmall=INT_MAX;
        while (temp != NULL)
        {
            if(temp->data<small)
            {
                small=temp->data;
            }
            if(temp->data!=small && temp->data<secondsmall)
            {
                secondsmall=temp->data;
            }   
            temp = temp->next;
        }
        if (top->next == NULL)
            secondsmall=top->data;
        cout << "Second smallest : " << secondsmall<<endl;
}
int main()
{
    int ch;
    while (1)
    {
        cout << "Menu" << endl;
        cout << "1)Push" << endl;
        cout << "2)Pop" << endl;
        cout << "3)Peek" << endl;
        cout << "4)Length of stack" << endl;
        cout << "5)Display " << endl;
        cout << "6)2nd Minimum " << endl;
        cout << "7)Exit" << endl;
        cout << "Enter the option" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            Length();
            break;
        case 5:
            Display();
            break;
        case 6:
            secondmin();
            break;
        default:
            return 0;
        }
    }
}