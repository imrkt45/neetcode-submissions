class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<int>ans;
        int i =0;
        int j =arr.size()-1;

        while(i<j){
            int sum = arr[i]+arr[j];
            if(sum==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;

            }
            else if(sum<target){
                i++;
            } else {
                j--;
            }
        }
        return ans; 
    }
};
