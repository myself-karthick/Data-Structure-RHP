#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
const int TABLE_SIZE=5;
class HashNode
{
    public:
        int key, value;
        HashNode(int key, int value)
        {
            this->key=key;
            this->value=value;
        }
};
class DeleteNode: public HashNode
{
    private:
        static Deletenode *entry;
        DeleteNode():HashNode(-1,-1){}
    public:
        static DeleteNode *getNode()
        {
            if(entry==NULL)
                entry = new DeleteNode();
            return entry;
        }
}
int main()
{

}