#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct Node
{
    char data;
    struct Node *next;
} *head = NULL;
void insert(char data)
{
    struct Node *temp, *newnode;
    temp = head;
    newnode = new Node;
    newnode->data = data;
    newnode->next = NULL;
    if (head == NULL)
        head = newnode;
    else
    {
        newnode->next = temp;
        head = newnode;
    }
}
void pop()
{
    if (head != NULL)
    {
        struct Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        delete (temp);
    }
}
char top()
{
    return head->data;
}
int checkRedundancy(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == ')')
        {
            char t = top();
            pop();
            int flag = 1;
            while (t != '(')
            {
                if (t == '+' || t == '-' || t == '*' || t == '/')
                    flag = 0;
                t = top();
                pop();
            }
            if (flag == 1)
                return 1;
        }
        else
            insert(str[i]);
    }
    return 0;
}
int main()
{
    char str[30];
    cin >> str;
    if (checkRedundancy(str) == 1)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}