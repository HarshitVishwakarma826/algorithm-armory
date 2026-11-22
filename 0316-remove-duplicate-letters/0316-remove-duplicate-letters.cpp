class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char>st;
        vector<int>last(26);
        vector<bool>vis(26);
        int n=s.size();
        for(int i=0;i<n;i++){
            last[s[i]-'a']=i;
        }
        for(int i=0;i<n;i++){
            if(vis[s[i]-'a']) continue;
            while(!st.empty() && st.top() > s[i] && last[st.top()-'a'] > i){
                vis[st.top()-'a']=false;
                st.pop();
            }
            st.push(s[i]);
            vis[st.top()-'a']=true;
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