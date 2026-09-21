class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        unordered_map<int, vector<int>> mp;

        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }
        int ans = 0;
        for(auto &p : mp) {
            vector<int> v = p.second;
            int i = 0;
            for(int j = 0; j < v.size(); j++) {
                while(v[j] - v[i] - (j - i) > k) {
                    i++;
                }
                ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};