// C++ program for concatinating string
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[50] ,str2[50] , result[100];
     cout<<"Enter the first name :- "<<endl;
     cin.getline(str1, 50);
     cout<<"Enter the middle or last name :- "<<endl;
     cin.getline(str2, 50);
    strcat(str1 , str2);
    cout<<"you full name is :- "<<str1<<endl;

    }
