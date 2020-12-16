#include <iostream>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;
int main() {
int N;
cin>>N;
bool gender;
int score;
vector <int> arr_male;
vector <int> arr_female;
for(int i=0;N>i;i++){
  cin>>gender;
   cin>>score;
    if(gender==0)
       arr_female.push_back(score);
    if(gender==1)
       arr_male.push_back(score);
} 
  sort(arr_female.begin(), arr_female.end(), greater<int>());
  sort(arr_male.begin(), arr_male.end(), greater<int>());

    for (int i=0;i<arr_female.size();i++) 
        cout << arr_female[i] << " ";
       for (int i=0;i<arr_male.size();i++) 
        cout << arr_male[i] << " ";  
        return 0;
}