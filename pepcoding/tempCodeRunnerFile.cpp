#include<iostream> 
#include <string>
using namespace std; 
bool is_pallindrom(string str){
    int left = 0,right = str.size()-1;
    while(left<right){
        if(str[left]!=str[right])
            return false;
        else 
        right--;
        left++; 
    }
    return true;
}
int main(){
cout<<"enter\n"; 
string str = "titanic"; 
for(int i=0;i<str.size();i++){
    for(int j=i+1;j<=str.size();j++){
        if(is_pallindrom(str.substr(i,j))){
            cout<<str.substr(i,j)<<endl;
        }
    }
}
  }
