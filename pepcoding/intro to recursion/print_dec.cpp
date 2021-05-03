#include<iostream>
using namespace std;
void printIncreasing(int n){
    if(n>0){
    printIncreasing(n--);
    cout<<n<<endl;;
    }
}
int main(){
    int n;
    cout<<"number daalo";
    cin>>n;
    printIncreasing(n);
}
