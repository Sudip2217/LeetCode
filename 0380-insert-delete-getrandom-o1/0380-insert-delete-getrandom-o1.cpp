class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet() 
    {
        
    }
    
    
    bool insert(int val) 
    {
        if (Map.find(val)!=Map.end())
            return false;
        else
        {
            Map[val]=q.size();
            q.push_back(val);
            return true;
        }
    }
    
    
    bool remove(int val) 
    {
        if (Map.find(val)==Map.end())
            return false;
        else
        {
            q[Map[val]] = q.back();
            Map[q.back()] = Map[val];
            q.pop_back();
            Map.erase(val);
            return true;
        }
    }
    
    
    int getRandom() 
    {
        int pos = rand()%q.size();
        return q[pos];
    }
    
private:    
    unordered_map<int,int>Map;
    vector<int>q;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param_1 = obj.insert(val);
 * bool param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */