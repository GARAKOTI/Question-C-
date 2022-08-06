// C++ program for converting days into years,week,days
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int days,year,week,days1;
    cout<<"Enter the days"<<endl;
    cin>>days;
    year= days/365;
    cout<<"Year  "<<year<<endl;
    week = (days%365)/7;
    cout<<"Week  "<<week<<endl;
    days1= (days%365)%7;
    cout<<"Days  "<<days1<<endl;
}