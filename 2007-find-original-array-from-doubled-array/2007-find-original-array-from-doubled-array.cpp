class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        
        vector<int> ans;
        if(changed.size()&1) return ans;
        sort(changed.begin(),changed.end());
        unordered_map<int,int> mp;
        for(auto i:changed) mp[i]++;
        
        for(auto i:changed){
            if(mp[2*i] and mp[i])
            {
                mp[i]--;
                mp[2*i]--;
                ans.push_back(i);
            }
        }
        for(auto i=mp.begin();i!=mp.end();i++)
            if(i->second) return {};
        return ans;

    }
};