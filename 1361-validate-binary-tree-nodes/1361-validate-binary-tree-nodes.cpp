class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        unordered_map<int,int>child_to_parent;
        unordered_map<int,vector<int>>adj;

        for(int i=0;i<n;i++){
            int node=i;
            int left_c=leftChild[i];
            int right_c=rightChild[i];

            if(left_c!=-1){
                adj[node].push_back(left_c);
                if(child_to_parent.find(left_c)!=child_to_parent.end()) return false;
                child_to_parent[left_c]=node;
            }

            if(right_c!=-1){
                adj[node].push_back(right_c);
                if(child_to_parent.find(right_c)!=child_to_parent.end()) return false;
                child_to_parent[right_c]=node;
            }
        }

        int root=-1;
        for(int i=0;i<n;i++){
            if(child_to_parent.find(i)==child_to_parent.end()){
                if(root!=-1) return false;
                root=i;
            }
        }
        if(root==-1) return false;
        int count=0;
        queue<int>q;
        vector<bool>visited(n,false);

        q.push(root);
        count++;
        visited[root]=true;

        while(!q.empty()){
            int node=q.front();
            q.pop();

            for(int &v:adj[node]){
                if(!visited[v]){
                    visited[v]=true;
                    count++;
                    q.push(v);
                }
            }
        }

        return count==n;
    }
};