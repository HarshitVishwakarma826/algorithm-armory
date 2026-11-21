class MyCircularQueue {
    int *arr;
    int front,rear;
    int size;
    int currSize;
public:
    MyCircularQueue(int k) {
        arr=new int[k];
        front=-1,rear=-1;
        size=k;
        currSize=0;
    }
    
    bool enQueue(int value) {
        if(currSize==size) return false;
        if(currSize==0){
            front=0;
            rear=0;
        }
        else rear=(rear+1)%size;
        arr[rear]=value;
        currSize++;
        return true;
    }
    
    bool deQueue() {
        if(currSize==0) return false;
        if(currSize==1){
            front=-1;
            rear=-1;
        }
        else front=(front+1)%size;
        currSize--;
        return true;
    }
    
    int Front() {
        if(currSize==0) return -1;
        return arr[front];
    }
    
    int Rear() {
        if(currSize==0) return -1;
        return arr[rear];
    }
    
    bool isEmpty() {
        return currSize==0;
    }
    
    bool isFull() {
        return currSize==size;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */