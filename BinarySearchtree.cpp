#include <iostream>
#include <queue>
using namespace std;
class Tree
{
    public:
        int data;
        Tree *left, *right;
};
Tree *root = NULL, *maxLeaf=NULL, *temp=NULL;
int maxSum=INT_MIN;
Tree* create(int data)
{
    Tree *NewNode = new Tree();
    NewNode->data = data;
    NewNode->left = NewNode->right = NULL;
    return NewNode;
}
Tree *insert(Tree *root, int key)
{
    if (root == NULL)
    {
        root = create(key); 
    }
    else
    {
        if (key < root->data)
        {
            root->left = insert(root->left, key);
        }
        else
        {
            root->right = insert(root->right, key);
        }
    }
    return root;
}
void findMax(Tree *root, int sum)
{
    if(root!=NULL)
    {
        sum = sum + root->data;
        if(sum>maxSum && root->left==NULL && root->right==NULL)
        {
            maxSum=sum;
            maxLeaf=root;
        } 
        findMax(root->left,sum);
        findMax(root->right,sum);
    }
}
int height(Tree *node)
{
    if(node==NULL)
        return 0;
    int leftHeight=height(node->left);
    int rightHeight=height(node->right);
    return (leftHeight>rightHeight)? leftHeight+1:rightHeight+1;
}
void printCurrentLevel(Tree *node, int level)
{
    if(node==NULL)
        return ;
    if(level==1)
        cout<<node->data<< " ";
    else
    {
        printCurrentLevel(node->left,level-1);
        printCurrentLevel(node->right,level-1);
    }
}
void levelorder(Tree *node)
{
    int h=height(node);
    for(int i=1; i<=h; i++)
    {
        printCurrentLevel(root, i);
    }
}
void inorder(Tree *temp)
{
    if (temp != NULL)
    {
        inorder(temp->left);
        cout << temp->data << " ";
        inorder(temp->right);
    }
}
Tree* levelInsert(Tree *root, int val)
{
    if(root==NULL)
    {
        root=create(val);
        return root;
    }
    queue<Tree*> q;
    q.push(root);
    while(!q.empty())
    {
        temp=q.front();
        q.pop();
        if(temp->left!=NULL)
            q.push(temp->left);
        else    
        {
            temp->left=create(val);
            return root;
        }
        if(temp->right!=NULL)
            q.push(temp->right);
        else
        {
            temp->right=create(val);
            return root;
        }
    }
}
int main()
{
    int N, t;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> t;
        root=levelInsert(root, t);
    }
    inorder(root);
}