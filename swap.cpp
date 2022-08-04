//C++ Program to Swap Values of Two Variables.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a ,b, temp;
   cout<<"Enter the first value "<<endl;
   cin>>a;
   cout<<"Enter the Second value"<<endl;
   cin>>b;
  temp = a;
   a = b;
    b = temp;
   cout<<"After swaping ,new value "<<a <<endl;
   cout<<"After swaping ,new value "<<b <<endl;

}