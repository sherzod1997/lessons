#include<iostream>
#include<cmath>
using namespace std;

double const g=9.81;

int mani(){

    float V;
    float r;
    float F=V*r*g;
    cout<<"Enter volume (cubic metres): ";
    cin>>V;
    cout<<"Enter density: ";
    cin>>r;
    cout<<"Arximed force is equal to: "<<F;
    
    return 0;
}