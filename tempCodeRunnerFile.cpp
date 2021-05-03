#include <iostream>
using namespace std;
int main() {
    int test_case =0;
    cin>>test_case;
    while(test_case--){
    float k1,k2,k3,v;
    cin >>k1>>k2>>k3>>v;
    float result = k1*k2*k3*v;
    result = 0.01 * result;
    result = (int)(result*100 + 0.5);
    if(result<9.58)
        cout << "YES" <<endl;
    else 
        cout<<"NO"<<endl;
    }	
}
