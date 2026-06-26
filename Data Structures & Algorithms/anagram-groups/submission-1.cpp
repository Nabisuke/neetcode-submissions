class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;        
        int n = strs.size();
        vector<bool> visited(n,false);
        for (int i = 0; i < n; i++){
            vector<int> v(26,0);
            vector<string> sub_list;
            string s = strs[i];
            if (visited[i] == true) continue;
            else{
                visited[i] = true;
                sub_list.push_back(s);
                for (auto ch: s){
                    v[ch - 'a']++;
                }
                for (int j = i+1; j < n; j++){
                    vector<int> v_1(26,0);
                    string s_1 = strs[j];
                    if (visited[j] == false){
                        for (auto ch: s_1){
                            v_1[ch - 'a']++;
                        }
                        if (v_1 == v){
                            sub_list.push_back(s_1);
                            visited[j] = true;                                    
                        }

                    }

                }
                ans.push_back(sub_list);

            }

            
        }
        return ans;
        
    }
};
