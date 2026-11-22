class LRUCache {
public:
    vector<pair<int,int>>arr;
    int cap;
    LRUCache(int capacity) {
        cap=capacity;
    }
    
    int get(int key) {
        for(int i=0;i<arr.size();i++){
            if(arr[i].first==key){
                pair<int,int> req_pair=arr[i];
                arr.erase(arr.begin()+i);
                arr.push_back(req_pair);
                return req_pair.second;
            }
        }
        return -1;
    }
    
    void put(int key, int value) {
        for(int i=0;i<arr.size();i++){
            if(arr[i].first==key){
                arr.erase(arr.begin()+i);
                arr.push_back({key,value});
                return;
            }
        }
        if(arr.size()==cap) arr.erase(arr.begin());
        arr.push_back({key,value});
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */