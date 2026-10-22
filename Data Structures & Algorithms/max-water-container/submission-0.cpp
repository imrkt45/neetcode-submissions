class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int i =0;
      int  j = n-1;
        int maxarea = 0;
        int area = 0;
        while(i<j){
            int minhei = min(arr[i],arr[j]);
            int width = j-i;
            area = minhei*width;
            maxarea = max(maxarea, area);
            if(arr[i]<arr[j]){
                i++;
            } 
            else{
                j--;
            }


        } 
        return maxarea;
    }
};
