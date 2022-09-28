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
class Hashmap
{
    private:
        Hashmap **htable;
    public:
        Hashmap()
        {
            htable = new HashNode* [TABLE_SIZE];
            for(int i=0; i<TABLE_SIZE; i++)
            {
                htable[i]=NULL;
            }
        }
        ~Hashmap()
        {
            for(int i=0; i<TABLE_SIZE; i++)
            {
                if(htable[i]!=NULL && htable[i]!=DeleteNode:getNode)
                {
                    delete htable[i];
                }
            }
            delete[] htable;
        }
        int HashFunc(int key)
        {
            return key % TABLE_SIZE;
        }
        void insert(int key, int value)
        {
            int hash_val = HashFunc(key);
            int init = -1;
            int delete
        }
}
int main()
{

}