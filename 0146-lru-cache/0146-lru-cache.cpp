class LRUCache {
public:
    list<int>dll;
    unordered_map<int,pair<list<int>::iterator,int>>mpp;
    int n;
    LRUCache(int capacity) {
        n=capacity;
    }
    void makerecent(int key){
        dll.erase(mpp[key].first);
        dll.push_front(key);
        mpp[key].first=dll.begin();
    }
    int get(int key) {
        if(mpp.find(key)==mpp.end()) return -1;
        makerecent(key);
        return mpp[key].second;
    }
    
    void put(int key, int value) {
        if(mpp.find(key)!=mpp.end()){
            mpp[key].second=value;
            makerecent(key);
        }else {
            dll.push_front(key);
            mpp[key] = {dll.begin(), value};

            if(dll.size() > n) {
                int key_tobe_deleted = dll.back();
                mpp.erase(key_tobe_deleted);
                dll.pop_back();
            }
        }
    }
};
