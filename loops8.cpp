// Write C++ program to swap first and last digit of a number
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num , temp, first, last, swap, digit =0;
    cout<<"Enter the number "<<endl;
    cin>>num;
    temp = num;
      last =num%10;

    digit = (int)log10(num);
    
    while (temp>=10)
    {
        temp = temp/10;

    }
    first = temp;    
     swap =(last * pow(10 ,digit) + first)+(num - (first * pow(10 , digit)+ last));
     cout<<swap<<endl;
}