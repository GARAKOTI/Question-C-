//C++ Program to convert feet to meter.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    double a;
    double b = 3.28084;
    double total;
    cout<<"enter the value you want to convert into feet"<<endl;
    cin>>a;
    total = a * b;
    cout<<"The value in feet is :- "<<total<<endl;
}