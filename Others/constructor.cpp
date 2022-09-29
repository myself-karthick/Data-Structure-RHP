#include <iostream>
using namespace std;
class constructor
{       // The class
    public: 
    int a;// Access specifier
    constructor()
    { // Constructor
        cout << "Hello World!";
    }
};

int main()
{
    constructor myObj;// Create an object of constructor (this will call the constructor)
    cout<<myObj.a;
    return 0;
}