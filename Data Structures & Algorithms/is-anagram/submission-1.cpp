class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!= t.length()) return false;

        unordered_map<char, int>mp;
        unordered_map<char, int> mp2;

        for(int i = 0; i<=s.length() - 1; i++){
            mp[s[i]]++;
        }

        for(int j = 0; j<=t.length() - 1; j++){
            mp2[t[j]]++;
        }

        if(mp.size() != mp2.size()) return false;


        for (auto& p : mp) {
            if(mp2.find(p.first) == mp.end()) return false;
            else if(mp2.find(p.first) != mp.end())
            {
                if(p.second == mp2[p.first]){
                    continue;
                }else{
                    return false;
                }
            }
        }
        return true;
    }  
};
