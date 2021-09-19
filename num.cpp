#include<iostream>
using namespace std;

int main()
{
    int num,num2=0;
    int i=num%10;

    num2=num2*10+i;


    cout<<"Enter number: ";
    cin>>num;

    cout<<"New num"<<num2;

    return 0;
}