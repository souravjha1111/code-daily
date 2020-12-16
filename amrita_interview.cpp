#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
	int n,talent;
	bool gen;
	vector <int> girls;
	
	vector <int> boys;

	cin>>n;
	while (n!=0)
	{
		cin>>gen;
		cin>>talent;
		if (gen==0)
		 girls.push_back(talent);
		if (gen==1)
		 boys.push_back(talent);
		n--; 
		  
	}
	 sort(girls.begin(), girls.end(), greater<int>());
	 sort(boys.begin(), boys.end(), greater<int>());
	   for (int i=0;i<girls.size();i++) 
        cout << girls[i] << " ";
       for (int i=0;i<boys.size();i++) 
        cout << boys[i] << " ";  
      
	return 0;	
  
}