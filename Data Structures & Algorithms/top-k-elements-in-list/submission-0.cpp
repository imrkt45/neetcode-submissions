class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;

        for(int i =0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;


        for(int i =1;i<=k;i++){
            int count =0;
            int temp =0;
            for(auto it:mp){
                if(it.second>count){
                    count = it.second;
                    temp = it.first;
                }
            }
            ans.push_back(temp);
            mp.erase(temp);
        }


        return ans;





        
    }
};
