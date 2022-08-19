// Write C++ program to find sum of even numbers between 1 to n
#include<iostream>
using namespace std;
int main(){
    int i,num,sum=0;
cout<<"enter last number till you wana found the sum of all even number"<<endl;
cin>>num;

for(i = 2; i<=num; i+=2){
sum += i;
}
cout<<sum<<endl;

}