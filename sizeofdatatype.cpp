//  C++ Program to find the Size of data types.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int intType;
    char charType;
    float floatType;
    double doubleType;
    long longType;
    short shortType;
    cout<<"Enter the int value";
cin>>intType;
cout<<"Enter the  char ";
cin>>charType;
cout<<"Enter the  float value";
cin>>floatType;
cout<<"Enter the double value";
cin>>doubleType;
cout<<"Enter the   long   value";
cin>>floatType;
cout<<"Enter the shor value";
cin>>shortType;

    cout<<"size of int is :-"   <<sizeof(intType)<<"byte"<<endl;
     cout<<"size of char is :-"  <<sizeof(charType)<<"byte"<<endl;
      cout<<"size of float is :-"  <<sizeof(floatType)<<"byte"<<endl;
       cout<<"size of double is :-"  <<sizeof(doubleType)<<"byte"<<endl;
        cout<<"size of long is :-"  <<sizeof(longType)<<"byte"<<endl;
         cout<<"size of short is :-"  <<sizeof(shortType)<<"byte"<<endl;



         return 0;
}