#include <iostream>

using namespace std;

int main()
{
    int num,i,l;
    
    cout<<"Enter the number: ";
    cin>>num;
    i=num/10;
    l=num%10;
    int sum=i+l;
    
    cout<<"Sum of numbers is: "<<sum;
    

    return 0;
}