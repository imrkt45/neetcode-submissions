class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxval = INT_MIN;

        for(int i=0;i<piles.size();i++){
            maxval = max(maxval,piles[i]);
        }
        int i =1;
        int j =maxval;
        int minans = INT_MAX;

        while(i<=j){
            int mid = i + (j - i) / 2;
            long long totlehours = 0;
            for(int k =0;k<piles.size();k++){
             totlehours += piles[k] / mid;

            if (piles[k] % mid > 0) {
                totlehours++;
            }
            }
            if(totlehours<=h){
                j = mid-1;
            } else{
                i = mid+1;
            }
        }
         return i;
    }
};
