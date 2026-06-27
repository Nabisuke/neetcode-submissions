class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        for (int i = 0; i < n; i++){
            vector<int> temp;
            temp = nums;
            temp.erase(temp.begin()+i);
            long long mul = 1;           
            for (int i = 0; i < n-1; i++){
                mul *= temp[i];
            }
            ans[i] = mul;
        }
        return ans;

    }
};
