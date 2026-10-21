class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        unordered_map<int, int> mp;
        int n = arr.size();

        if (n == 0) {
            return 0;
        }

        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        int count = 0;
        int maxlen = 0;

        for (int i = 0; i < n; i++) {
            int tmp = arr[i] - 1;

            if (mp.find(tmp) == mp.end()) {
                count = 1;
                int num = arr[i];

                while (mp.find(num + 1) != mp.end()) {
                    num++;
                    count++;
                }

                maxlen = max(maxlen, count);
            }
        }

        return maxlen;
    }
};