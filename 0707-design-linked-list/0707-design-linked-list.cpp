class MyLinkedList {
    struct Node{
        int val;
        Node* next;
        Node(int x){
            val=x;
            next=NULL;
        }
    };
public:
    Node* head;
    MyLinkedList() {
        head=NULL;
    }
    
    int get(int index) {
        Node* curr=head;
        while(index-- && curr){
            curr=curr->next;
        }
        if(curr==NULL) return -1;
        return curr->val;
    }
    
    void addAtHead(int val) {
        Node* newNode=new Node(val);
        newNode->next=head;
        head=newNode;
    }
    
    void addAtTail(int val) {
        Node* newNode=new Node(val);
        if(head==NULL){
            head=newNode;
            return;
        }
        Node* tail=head;
        while(tail->next){
            tail=tail->next;
        }
        tail->next=newNode;
    }
    
    void addAtIndex(int index, int val) {
        if(index==0){
            addAtHead(val);
            return;
        }
        Node* curr=head;
        while(index-->1 && curr){
            curr=curr->next;
        }
        if(curr==NULL) return;
        Node* newNode=new Node(val);
        newNode->next=curr->next;
        curr->next=newNode;
    }
    
    void deleteAtIndex(int index) {
        if(head == NULL) return;

        Node* prev = NULL;
        Node* curr = head;

        while(index-- > 0 && curr) {
            prev = curr;
            curr = curr->next;
        }

        if(curr == NULL) return;

        if(prev == NULL) {
            head = curr->next;
        }
        else {
            prev->next = curr->next;
        }

        delete curr;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */