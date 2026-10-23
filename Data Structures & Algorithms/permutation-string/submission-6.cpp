class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>mp;
        for(int i =0;i<s1.length();i++){
            mp[s1[i]]++;
        }
        int i =0;
        int j =0;
        int count =0;
        

        while(j<s2.length()){
            if(mp.find(s2[j])!=mp.end()){
                if(mp[s2[j]]!=0){
                    mp[s2[j]]--;
                    count++;
                 if (j - i + 1 == s1.length()) {
                    return true;
                }
                    j++;
                }
                else{
                    while(s2[i]!=s2[j]){
                        i++;
                    }
                    i++;
                    // len = j-i+1;
                    j++;
                }
            } else{
                if(count>0){

               mp.clear();
                for (int k = 0; k < s1.length(); k++) {
                    mp[s1[k]]++;
                }}
               i=j+1;
                j++;
            }

 
           
        }     
        return false;  
    }
};
