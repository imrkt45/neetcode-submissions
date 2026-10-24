class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
         int i =0;
         int j =0;
         int maxtimes = 0;
         int maxlen = 0;
         while(j<s.length()){
            mp[s[j]]++;

            maxtimes = 0;
            for(auto it:mp){
                maxtimes = max(maxtimes, it.second);
            }
            while((j-i+1)-maxtimes>k){
                mp[s[i]]--;
                i++;
                maxtimes =0;
                for(auto it:mp){
                    maxtimes = max(maxtimes,it.second);
                }
            }


            maxlen = max(maxlen,j-i+1);
            j++;
         }

         return maxlen;



        
    }
};
