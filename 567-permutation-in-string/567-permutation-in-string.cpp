class Solution {
public:
bool checkInclusion(string s1, string s2) {
	vector<int> cur(26), goal(26);
	for(char c : s1)
        goal[c - 'a']++;
	for(int i = 0; i < s2.size(); i++) {
		cur[s2[i] - 'a']++;
		if(i >= s1.size())
            cur[s2[i - s1.size()] - 'a']--;
		if(goal == cur)
            return true;
	}
	return false;
}};

// class Solution {
// public:
//     bool checkInclusion(string s1, string s2) {
//         if(s1.length()>s2.length()){
//             return false;
//         }
//         if(s2==s1)
//             return true;
//         unordered_map<char, int> frq;
//         int count= 0;
//         for(auto el : s1){
//             frq[el]++;
//             count++;
//         }
//         int tempcount =count;
//         unordered_map<char, int> tempfrq = frq;
//         for(int i=0, j=0; j<s2.length(); ){
//             if(tempcount ==0)
//                 return true;
//             else{
//                 if(frq.find(s2[j])==frq.end()){
//                     j++;
//                     i=j;
//                     tempcount = count;
//                     tempfrq = frq;
//                 }
//                 if(frq[s2[j]]<=0){
//                     j++;
//                     i=j;
//                     tempcount = count;
//                     tempfrq = frq;
//                 }
//                 else{
//                     tempcount--;
//                     tempfrq[s2[j]]--;
//                     j++;
//                 }
//             }
//         }
//         return false;
//     }
// };

