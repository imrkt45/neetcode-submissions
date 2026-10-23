class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n =s.length();
        unordered_map<char,int>mp;
        if(n==0){
            return 0;
        }
        int i=0;
        int j= 0;
        int maxlen =0;
        int count =0;
        while(j<n){
            if(mp.find(s[j]) == mp.end()){
                mp[s[j]]++;
                maxlen = max(maxlen, j-i+1);
                j++;
            }
            else {
                while(s[i]!=s[j]){
                    mp.erase(s[i]);
                    i++;
                }
                mp.erase(s[i]);
                i= i+1;
                
            }
        } 

        return maxlen;  
        
    }
};
