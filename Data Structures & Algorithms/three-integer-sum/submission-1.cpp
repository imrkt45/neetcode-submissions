class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        set<vector<int>>mp;
        for(int i=0;i<arr.size();i++){

            if(i>0 && arr[i]==arr[i-1]) continue;
            int j =i+1;
            int k = arr.size()-1;
            while(j<k){
                int sum = arr[i]+arr[j]+arr[k];
                if(sum==0){
                vector<int>res = {arr[i],arr[j],arr[k]};
                sort(res.begin(),res.end());
                mp.insert(res);
                j++;
                k--;
                }
                else if(sum<0){
                    j++;
                } else{
                    k--;
                }
            }
        }
        vector<vector<int>>ans(mp.begin(),mp.end());
        return ans;
    }
};
