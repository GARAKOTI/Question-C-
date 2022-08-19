//Write C++ program to print sum of digits enter by user

#include<iostream>
using namespace std;
int main(){
    int num ,sum;
    cout<<"enter the positve number"<<endl;
    cin>>num;
    for(sum=0; num>0; num=num/10){
        sum += (num%10);
    }
    cout<<sum<<endl;
    return 0;
}
/* Using shortend opreatar
while(num>0){
        
        sum +=(num%10);
        num /=10;

    }
    cout<<sum<<endl;*/