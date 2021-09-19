#include<iostream>
using namespace std;

int main()
{
    int height,width;
    int S=height*width;
    int P=2*(height+width);

    cout<<"Enter height: ";
    cin>>height;

    cout<<"Enter width: ";
    cin>>width;

    cout<<"Area is equla to: "<<S<<endl;
    
    cout<<"Peremtr is equal to: "<<P<<endl;

    return 0;
}