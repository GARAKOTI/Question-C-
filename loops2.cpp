//Write C++ program to print ASCII values of all characters

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    for(c='A'; c<='Z'; c++ ){
        cout<<"ASCII Value of entered charchter :-"<<c<<"="<<(int)c<<endl;
    }
}
