#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str1[22];
    cout<<"Enter the string to convert to uppercase:- "<<endl;
    cin.getline(str1,22);
    cout<<"Character in uppercase :- "<<strupr(str1)<<endl;
    
    return 0;
    }
