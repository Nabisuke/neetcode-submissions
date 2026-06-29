class Solution {
public:
    int longestConsecutive(vector<int>& nums) {       
        set<int> s;
        for (auto x: nums){
            s.insert(x);
        }
        vector<int> v(s.begin(), s.end());
        int cnt = 0;
        int ans = 0;
        int n = v.size();
        if (n == 0) return 0;
        else{
            for (int i = 0; i < n-1; i++){
                int val = abs(v[i] - v[i+1]);
                if (val == 1){
                    cnt++;                
                    ans = max(cnt,ans);
                }
                else cnt = 0;
            }
            return ans+1;

        }

        
        
    }
};
