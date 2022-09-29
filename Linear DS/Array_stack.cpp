#include <iostream>
using namespace std;
int N, key, top = -1;
int isFull()
{
    return (top == N-1);
}
int isEmpty()
{
    return top == -1;
}
void push(int *stack)
{
    if (isFull())
    {
        cout << "Overflow" << endl;
    }
    else
    {
        cout << "Enter the value to insert" << endl;
        cin >> key;
        stack[++top] = key;
    }
}
void pop(int *stack)
{
    if (isEmpty())
    {
        cout << "Underflow" << endl;
    }
    else
    {
        cout << "Deleted element is " << stack[top] << endl;
        top--;
    }
}
void peek(int *stack)
{
    if (isEmpty())
    {
        cout << "Underflow" << endl;
    }
    else
        cout << "Element present is " << stack[top] << endl;
}
void Length()
{
    cout << "Size of stack is " << top + 1 << endl;
}
void Display(int *stack)
{
    cout << "Elements present are" << endl;
    for (int i = top; i > -1; i--)
    {
        cout << stack[i] << " ";
    }
}
int main()
{
    int ch;
    cout << "Enter the size of stack: " << endl;
    cin >> N;
    int stack[N];
    while (1)
    {
        cout << "Menu" << endl;
        cout << "1)Push" << endl;
        cout << "2)Pop" << endl;
        cout << "3)Peek" << endl;
        cout << "4)Length of stack" << endl;
        cout << "5)Display " << endl;
        cout << "5)Exit" << endl;
        cout << "Enter the option" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            push(stack);
            break;
        case 2:
            pop(stack);
            break;
        case 3:
            peek(stack);
            break;
        case 4:
            Length();
            break;
        case 5:
            Display(stack);
            break;
        default:
            return 0;
        }
    }
}