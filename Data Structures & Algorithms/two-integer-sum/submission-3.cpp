class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i =0;i<arr.size();i++){
            int temp = target-arr[i];
            if(mp.find(temp)!=mp.end()){
                ans.push_back(mp[temp]);
                ans.push_back(i);
                
            }
            mp[arr[i]] = i;

        }
        return ans;
       
    }
};
