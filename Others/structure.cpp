#include<iostream>
using namespace std;
struct student
{
    float mark1, mark2, mark3, mark4, mark5;
    double avg;
}
mystudent[5];

int main()
{
    for(int i=0; i<5; i++)
    {
        cin>>mystudent[i].mark1>>mystudent[i].mark2>>mystudent[i].mark3>>mystudent[i].mark4>>mystudent[i].mark5;
        mystudent[i].avg = (mystudent[i].mark1 + mystudent[i].mark2 + mystudent[i].mark3 + mystudent[i].mark4 + mystudent[i].mark5)/5;
    }
    printf("\nAverages\n");
    for(int i=0; i<5; i++)
    {
        cout << mystudent[i].avg<<endl;
    }
}