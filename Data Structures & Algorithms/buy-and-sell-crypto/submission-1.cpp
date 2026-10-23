class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int minpr = INT_MAX;
        int maxpro =0;
        for(int i=0;i<n;i++){
            minpr = min(minpr, arr[i]);
            maxpro = max(maxpro, arr[i]-minpr);
            
        }
        return maxpro;
        
    }
};
