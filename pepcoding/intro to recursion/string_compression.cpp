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
int counter =1;
string result1;
string result2;
string str = "wwwwaaadexxxxxx"; 
    for(int i=0;i<str.size();i++){
        if(str[i]==str[i+1]){
            counter++;
            }
        else if(counter>1){
            result1 = result1 + str[i];
            result2 =result2 + str[i];
            result2 =result2 + to_string(counter);
            counter =1;
            }
        else {
            result2 =result2 + str[i];
            result1 = result1 + str[i];
        }
    }
    cout<<result1<<endl<<result2;
}
