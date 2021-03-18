#include <iostream>
using namespace std;
string reverseVowels(string s) {
        int i=0;
        int j=s.size()-1;
        while(j>i){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'
               &&
             s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                   swap(s[i++],s[j--]);}
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                i=i+1;
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                j=j+1;
        }}
    }return s;}
int main(){
    string abc="hello";
    cout<<reverseVowels(abc);}