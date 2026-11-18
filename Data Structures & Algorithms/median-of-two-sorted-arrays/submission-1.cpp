class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int i =0;
        int j =0;
        int n = nums1.size();
        int m = nums2.size();
        while(i<n && j<m){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            } else{
                ans.push_back(nums2[j]);
                j++;
            }
        }

  while(j < m) {
    ans.push_back(nums2[j]);
    j++;
}

while(i < n) {
    ans.push_back(nums1[i]);
    i++;
}
       
        int total = n + m;
        double res = 0;

        if (total % 2 != 0) {
    
            res = ans[total / 2];
        } else {
 
            int mid = total / 2;
            res = (ans[mid - 1] + (double)ans[mid]) / 2.0;
        }
        return res;
    }
};
