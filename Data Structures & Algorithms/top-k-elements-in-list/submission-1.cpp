class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        int cnt = k;
        unordered_map<int,int> freq;
        for (int i = 0; i < n; i++){
            int val = nums[i];
            freq[val]++;
        }
        vector<pair<int,int>> v(freq.begin(),freq.end());
        sort(v.begin(),v.end(), [](auto a, auto b){
            return a.second > b.second;
        });

        for (auto [key,value] : v){
            if (k == 0) break;
            ans.push_back(key);
            k--;

        }
        return ans;

        
    }
};
