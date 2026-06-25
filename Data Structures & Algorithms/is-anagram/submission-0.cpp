class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_size = s.size();
        int t_size = t.size();
        if (s_size != t_size) return false;
        else{
            vector<int> vs(26,0);
            vector<int> vt(26,0);
            for (int i = 0; i < s_size; i++){
                char ch_s = s[i];
                char ch_t = t[i];
                vs[ch_s - 'a']++;
                vt[ch_t - 'a']++;
            }
            for (int i = 0; i < 26; i++){
                if (vs[i] != vt[i]) return false;
                
            }
            return true;
        }
        
    }
};
