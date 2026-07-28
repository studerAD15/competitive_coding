class MapSum {
public:
    unordered_map<string,int> mp;
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        mp[key]=val;
        
    }
    
    int sum(string prefix) {
        int ans=0;
        for(auto p:mp)
        {
            string key=p.first;
            if(key.substr(0,prefix.length())==prefix)
            {
                ans+=p.second;
            }
        }
        return ans;
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */