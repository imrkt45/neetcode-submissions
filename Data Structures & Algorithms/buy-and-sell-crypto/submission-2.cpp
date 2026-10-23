class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int minpr = INT_MAX;
        int maxpro =0;
        vector<int>leftmin(n);
        leftmin[0] = arr[0];
        for(int i=1;i<n;i++){
            leftmin[i] = min(leftmin[i-1],arr[i]);
        }

        for(int i =0;i<n;i++){
            maxpro = max(maxpro, arr[i]-leftmin[i]);
        }
        return maxpro;
        
    }
};
