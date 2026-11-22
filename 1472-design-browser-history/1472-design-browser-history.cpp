class Node{
    public:
    string url;
    Node* back;
    Node* next;
    Node(string s){
        url=s;
        back=NULL;
        next=NULL;
    }
};
class BrowserHistory {
public:
    Node* current;
    BrowserHistory(string homepage) {
        current=new Node(homepage);
    }
    
    void visit(string url) {
        Node* newNode=new Node(url);
        newNode->back=current;
        current->next=newNode;
        current=newNode;
    }
    
    string back(int steps) {
        while(steps-- && current->back) current=current->back;
        return current->url;
    }
    
    string forward(int steps) {
        while(steps-- && current->next) current=current->next;
        return current->url;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */