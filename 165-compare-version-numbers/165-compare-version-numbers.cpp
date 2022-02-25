class Solution {
public:
     
    int compareVersion(string version1, string version2) {
        vector<int> v1;
        vector<int> v2;
        stringstream vv1(version1);
        stringstream vv2(version2);
        string str;
        while(getline(vv1,str,'.'))
            v1.push_back(stoi(str));
        while(getline(vv2,str,'.'))
            v2.push_back(stoi(str));
        
        v1.size()>v2.size()?v2.resize(v1.size()):v1.resize(v2.size());
        
        for(int i=0;i<v1.size();i++){
            if(v1[i]>v2[i])
                return 1;
            else if(v1[i]<v2[i])
                return -1;
        }
        
        return 0;
    }
};
