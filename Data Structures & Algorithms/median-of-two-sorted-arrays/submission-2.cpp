class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int total = n+m;
        int tmp = total/2;
        int cnt =0;
        int i =0;
        int j =0;
        int pre =0;
        int curr =0;
        while(i<n && j<m){
            pre = curr;
            if(nums1[i]<nums2[j]){
                curr = nums1[i];
                i++;
            } else{
                curr = nums2[j];
                j++;
            }
            cnt++;
            if(cnt==tmp+1){
                break;
            }
        }

            while(j<m && cnt <tmp+1){
                pre = curr;
                curr = nums2[j];
                j++;
                cnt++;
            }
            while(i<n && cnt <tmp+1){
                pre = curr;
                curr = nums1[i];
                i++;
                cnt++;
            }

        
        double res =0;
        if(total%2!=0){
            res =  curr;
        } else{
            res = (double(curr)+pre)/2.0;
        }
        return res;
    }
};
