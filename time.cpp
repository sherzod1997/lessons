#include<iostream>
using namespace std;

int main(){
    int hour;
    int min;
    int sec=0;
    char flag;

    cout<<"Enter hours: ";
    cin>>hour>>flag>>min;


    
    cout<<"\n Minutes= "<<min+hour*60;
    cout<<"\n Seconds= "<<min*60+hour*60*60;
    

    return 0;

}