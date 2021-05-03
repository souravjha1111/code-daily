#include<iostream> 
#include <string>
using namespace std; 
int main(){
int counter =1;
string str;
cin>>str; 
    for(int i=1;i<str.length();i++){
        cout<<str[i-1]<<(int(str[i])-int(str[i-1]));
        }      
        cout<<str[str.length()-1];
}
