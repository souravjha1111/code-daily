# include <iostream>
using namespace std;

int largestValue(int A, int A_array[]){
    int total = 0; 
    for (int i = 0; i < A; i++) { 
         for (int j = i+1; j < A; j++) {
             total = total + A_array[i]*A_array[j];
             }                           
}       
return total;
}
int main(){
    int A;
    cin>>A;
    int ARRAY[A];
    for (int k=0;k<A;k++){
        cin>>ARRAY[k];
    } 
    cout<<largestValue(A, ARRAY);
}