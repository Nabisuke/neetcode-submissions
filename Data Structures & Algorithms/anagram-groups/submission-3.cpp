class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;
        vector<bool> visited(n, false);
        vector<vector<int>> freq(n, vector<int>(26, 0));
        for (int i = 0; i < n; i++){
            for (char ch : strs[i]){
                freq[i][ch - 'a']++;
            }
        }
        for (int i = 0; i < n; i++){
            if (visited[i]) continue;                
            visited[i] = true;
            vector<string> sub_list;
            sub_list.push_back(strs[i]);
            for (int j = i + 1; j < n; j++){
                if (!visited[j] && freq[i] == freq[j]){
                    sub_list.push_back(strs[j]);
                    visited[j] = true;
                }
            }
            ans.push_back(sub_list);
        }

        return ans;
    }
};