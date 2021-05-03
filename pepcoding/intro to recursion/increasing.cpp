#include<iostream>
using namespace std;
void printIncreasing(int n){
    if(n!=0){
    printIncreasing(n--);
    cout<<n<<endl;;
    }
}
int main(){
    int n;
    cin>>n;
    printIncreasing(n);
}
