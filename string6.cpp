#include<iostream>
#include<string.h>
using namespace std;
int main(){

string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for(int i=0; i<s.length(); i++){
 if(s[i]>='A' && s[i]<='Z')
 s[i]+=32;
}
cout<<s<<endl;
}

