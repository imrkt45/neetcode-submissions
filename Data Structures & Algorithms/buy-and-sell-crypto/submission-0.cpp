class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int maxpro =0;

        for(int i=0;i<n;i++){
            for(int j =i+1;j<n;j++){
                int tmp = arr[j]-arr[i];
                maxpro = max(maxpro, tmp);
            }
        }

        return maxpro;
        
    }
};
