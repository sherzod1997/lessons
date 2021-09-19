#include<iostream>
using namespace std;
int main(){
    char op;
    int x,y;
    

    cout<<"Enter first numbers";
    cin>>x;

    cout<<"Enter second numbers";
    cin>>y;

    cout<<"Enter operators:+,-,*,/"<<endl;
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<x<<"+"<<y<<"="<<x+y<<endl;
        break;

    case '-':
        cout<<x<<"-"<<y<<"="<<x-y<<endl;
        break; 

    case '*':
        cout<<x<<"*"<<y<<"="<<x*y<<endl;
        break;

    case '/':
        cout<<x<<"/"<<y<<"="<<x/y<<endl;
        break;           
    
    default:
        cout<<"Error";
        break;
    }

    return 0;
}