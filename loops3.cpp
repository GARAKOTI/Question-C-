//Write C++ program to print multiplication table of a given number
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num=0 ,i;
    cout<<"Enter the number you want tabel"<<endl;
    cin>>num;
    for(i=0; i<=10; i++){
        cout<<num<<'x'<<i<<"="<<num*i<<endl;
    }
    return 0;
}