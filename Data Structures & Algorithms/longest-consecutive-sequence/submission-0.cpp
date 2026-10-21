class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        if(n==0){
            return 0;
        }
        int maxlen = 0;
        int count =1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                continue;
            }
            int tmp = arr[i]-1;
            if(tmp == arr[i-1]){
                count++;
            } else{
                if(count>maxlen){
                    maxlen=count;
                }
                count =1;
            }


        }
        maxlen = max(maxlen, count);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<endl;
        }
        return maxlen;
    }
};
