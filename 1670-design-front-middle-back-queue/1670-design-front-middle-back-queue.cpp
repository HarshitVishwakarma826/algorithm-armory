class FrontMiddleBackQueue {
public:
    vector<int>arr;
    FrontMiddleBackQueue() {

    }
    
    void pushFront(int val) {
        arr.insert(arr.begin(),val);
    }
    
    void pushMiddle(int val) {
        int mid=(arr.size()/2);
        arr.insert(arr.begin()+mid,val);
    }
    
    void pushBack(int val) {
        arr.push_back(val);
    }
    
    int popFront() {
        if(arr.size()==0) return -1;
        int val=arr.front();
        arr.erase(arr.begin());
        return val;
    }
    
    int popMiddle() {
        if(arr.size()==0) return -1;
        int mid=(arr.size()-1)/2;
        int val=arr[mid];
        arr.erase(arr.begin()+mid);
        return val;
    }
    
    int popBack() {
        if(arr.size()==0) return -1;
        int val=arr.back();
        arr.pop_back();
        return val;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */