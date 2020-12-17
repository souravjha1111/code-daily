#include <algorithm>
#include <iostream>
using namespace std;
int main() {
	int test_cases;
	cin>>test_cases;
	while(test_cases>0){
		 int N;
		 cin >> N;	
		  int arr[N];
		for(int i=0;i<N;i++)
			cin>>arr[i];
		int size = sizeof(arr) / sizeof(arr[0]);
     	sort(arr, arr + size);
 	    for (int i = 0,j=0,size_counter=size-1; i < size; ++i){
				if(i%2==0){
					cout<<arr[j]<<" ";
					j++;}
				else{
					cout<<arr[size_counter]<<" ";
					size_counter--;}
				}
				cout<<endl;
test_cases--;}
}