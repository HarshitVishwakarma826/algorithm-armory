class Solution {
public:
    string smallestSubsequence(string s) {
        unordered_map<char,int>mpp;
        for(char ch:s){
            mpp[ch]++;
        }
        stack<char>st;
        vector<bool>visited(256,false);
        for(char ch:s){
            mpp[ch]--;
            if(visited[ch]) continue;
            while(!st.empty() && st.top()>ch && mpp[st.top()]>0){
                visited[st.top()]=false;
                st.pop();
            }
            st.push(ch);
            visited[ch]=true;
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};