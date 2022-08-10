#include<iostream>
#include<string.h>
using namespace std;
int main(){

string s = "abcdefghijklmnopqrstuvwxyz";
for(int i=0; i<s.length(); i++){
 if(s[i]>='a' && s[i]<='z')
 s[i]-=32;
}
cout<<s<<endl;
}