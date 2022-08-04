//C++ Program to convert celcius to farenheit.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    double a;
    double total;
    cout<<"Enter the value in farhenite :- "<<endl;
    cin>>a;
    total = ((a-32)*5)/9; // formula to convert far to cell
    cout<<"you value in celcius is :- "<<total<<endl;
}