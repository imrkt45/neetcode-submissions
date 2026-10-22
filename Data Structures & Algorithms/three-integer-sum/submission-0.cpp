class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        set<vector<int>>mp;

        for(int i=0;i<arr.size();i++){
            unordered_map<int,int>mp2;
            for(int j =i+1;j<arr.size();j++){
                int tmp = -(arr[i]+arr[j]);
                if(mp2.find(tmp)!=mp2.end()){
                    vector<int>num = {arr[i],arr[j],tmp};
                    sort(num.begin(),num.end());
                    mp.insert(num);
                }
                mp2[arr[j]] =j;

            }

        }

        vector<vector<int>>ans(mp.begin(),mp.end());

        return ans;
    }
};
