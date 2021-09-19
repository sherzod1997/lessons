#include <iostream>

using namespace std;

int main()
{
    int sec,min,hour;
    
    cout<<"Enter seconds: ";
    cin>>sec;
    
    //calculate the hours 
    hour=sec/3600;
    
    //calculate the minutes
    min=(sec-hour*3600)/60;
    
    //calculat the seconds
    sec=sec%60;
    
    
    cout<<"Hour: "<<hour<<"hour"<<endl;
    cout<<"Minutes: "<<min<<"min"<<endl;
    cout<<"Seconds: "<<sec<<"sec"<<endl;
    
    

    return 0;
}