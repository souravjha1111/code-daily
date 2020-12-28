#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    string s="race a car";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
         int length =s.length();
         vector<string> s1;
         for(int i=0;s[i]=='\0';i++){
             if(isalnum(s[i])==1)
                 s1.push_back(s[i]);
         }
         cout<<s1;
        length =s1.length();
        int end =length-1;
        int start=0;
          while(end>=start){
             if(s1[start]!=s1[end])
                 cout<<"0";
            start++;
            end--;}
            cout<<"1";

    }
