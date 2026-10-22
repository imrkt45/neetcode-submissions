class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string str = "";
        for(int i =0;i<n;i++){
            if ((s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= '0' && s[i] <= '9')) {
                str += s[i];
            } if((s[i] >= 'A' && s[i] <= 'Z')){
                 str += tolower(s[i]);
            }
        }
        // for(int i =0;i<n;i++){
        //     cout<<str[i];
        // }
        int i =0;
        int j = str.length()-1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;

        
    }
};
