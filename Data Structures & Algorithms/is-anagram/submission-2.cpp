class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>smp;
        unordered_map<char,int>tmp;
        for(int i =0;i<s.length();i++){
            smp[s[i]]++;
        }
        for(int i =0;i<t.length();i++){
            tmp[t[i]]++;
        }
       for(auto it:smp){
        if(tmp[it.first] != it.second){
            return false;
        }
       }
        for(auto it:tmp){
        if(smp[it.first] != it.second){
            return false;
        }
       }
       return true;




        
        
    }
};
