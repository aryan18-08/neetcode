class MyHashMap {
public:
    static const int size=10000;
    vector<list<pair<int,int>>> mp;
    MyHashMap() {
        mp.resize(size);
    }
    int hash(int key){
        return key%size;
    }
    void put(int key, int value) {
        int idx=hash(key);
        for(auto &p:mp[idx]){
            if(p.first==key){
                p.second=value;
                return;
            }
        }
        mp[idx].push_back({key,value});
    }
    int get(int key) {
        int idx=hash(key);
        for(auto &p:mp[idx]){
            if(p.first==key){
                return p.second;
            }
        }
        return -1;
    }
    void remove(int key) {
        int idx=hash(key);
        for(auto it=mp[idx].begin();it!=mp[idx].end();it++){
            if(it->first==key){
                mp[idx].erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */