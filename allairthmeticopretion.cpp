//C++ Program to perform all arithmetic operations.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    int b;
    int sum ,sub , mult ,mod;
       float div;
cout<<"Enter the first value :- "<<endl;
    cin>>a;
cout<<"Enter the second value :- "<<endl; 
    cin>>b;

    sum = a + b ;
    sub = a - b;
    mult = a * b ;
    mod  = a % b;
    div = (float)a/b;
    cout << "Sum of number1 and number2 : " << sum << endl;
    cout << "Difference of number1 and number2 : " << sub << endl;
    cout << "Product of number1 and number2 : " << mult << endl;
    cout << "Modulus of number1 and number2 : " << mod << endl;
    cout << "Quotient of number1 and number2 : " << div << endl;
}