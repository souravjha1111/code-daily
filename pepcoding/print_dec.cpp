#include<iostream> 
#include <string>
using namespace std; 
void printDecreasing(int n){
    if(n!=0){
        cout<< n;
        cout<<endl;
        printDecreasing(--n);
    }
}
int main(){
    int num;
    cin>>num;
    printDecreasing(num);

}