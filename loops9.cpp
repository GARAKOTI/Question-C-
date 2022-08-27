
// Write C++ program to find the sum of first and last digit of any number
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,temp, last, first, sum;
    cout<<"Enter the number :- "<<endl;
    cin>>num;
    temp = num;
    last = num%10;
    while(temp>=10){
        temp = temp/10;
    }
    first =temp;
    sum = last + first;
    cout<<"The sum of first and last digit :-"<<sum<<endl;
}