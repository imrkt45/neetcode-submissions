class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(int i =0;i<t.length();i++){
            mp[t[i]]++;
           
        }
        int i =0;
        int j =0;
        int count =0;
        int minlen = INT_MAX;
        int k =0;
        while(j<s.length()){
            if(mp[s[j]]>0){
                count++;
            } 
            mp[s[j]]--;

            if(count== t.length()){
                while(count==t.length()){
                    if(j-i+1<minlen){
                        minlen = j-i+1;
                        k =i;
                    }
                    mp[s[i]]++;
                    if(mp[s[i]]>0){
                        count--;
                    }
                    i++;
                }
                

            }
            j++;

        }

        if(minlen==INT_MAX){
            return "";
        }
        return s.substr(k,minlen);
    }
};
