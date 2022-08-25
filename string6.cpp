// C++ program to reverse the string
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
/*int main(){

string str;
cout<<"Enter the string"<<endl;
getline(cin,str);
reverse(str.begin(),str.end());
cout<<str<<endl;

return 0;
}*/


int main(){
    string str;
    cout<<"Enter the string"<<endl;
    getline(cin,str);
    int i;
    for( i=str.length()-1; i>=0; i--){
        cout<<str[i];
    }
return 0;

}