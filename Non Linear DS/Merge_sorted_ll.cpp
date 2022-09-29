#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *head1 = NULL, *tail1 = NULL, *head2 = NULL, *tail2 = NULL;
void insert(Node *head, int t, Node *tail)
{
    Node *NewNode = new Node();
    NewNode->data = t;
    NewNode->next = NULL;
    if (*head = NULL)
    {
        *head = NewNode;
        tail = NewNode;
    }
    else
    {
        tail = NewNode;
    }
}
int main()
{
    int N, M, t;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> t;
        insert(&head1, t ,tail1);
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> t;
        insert(&head2 , t, tail2);
    }
    Node *temp = head1;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}