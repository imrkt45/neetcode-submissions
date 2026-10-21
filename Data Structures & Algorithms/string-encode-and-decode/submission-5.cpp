class Solution {
public:
    string encode(vector<string>& strs) {
        string str = "";
        for(int i=0;i<strs.size();i++){
            str+= to_string(strs[i].length())+'#'+strs[i];
        }
        return str;
    }
    vector<string> decode(string s) {
        vector<string>ans;
        int i =0;
        while(i<s.length()){
            int j = i;
            while(s[j]!='#'){
                j++;
            }
            int tmp = stoi(s.substr(i,j-i));
            string res = s.substr(j+1,tmp);
            ans.push_back(res);
            i = j+1+tmp;
        }
        return ans;
    }

};
