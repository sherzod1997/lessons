#include <iostream>

using namespace std;

int main()
{
    int num,i,l,k;
    
    cout<<"Enter the number: ";
    cin>>num;
    i=num/100;
    l=(num-i*100)/10;
    k=(num-i*100)%10;
    
    
    cout<<"New number is: "<<k*100+l*10+i;
    

    return 0;
}