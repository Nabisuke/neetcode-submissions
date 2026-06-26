class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n-1; i++){
                int val = target - nums[i];
                auto it = find(nums.begin()+i+1,nums.end(), val);
                if (it != nums.end()){
                    int idx = it - nums.begin();
                    return {i,idx};
                }

            
        }
        return {};

        
    }
};
