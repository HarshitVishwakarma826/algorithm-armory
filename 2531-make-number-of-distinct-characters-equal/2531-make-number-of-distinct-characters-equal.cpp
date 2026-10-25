class Solution {
public:
    bool isItPossible(string word1, string word2) {
        vector<int>a(26,0),b(26,0);
        int d1=0,d2=0;
        for(char c:word1){
            if(a[c-'a']==0) d1++;
            a[c-'a']++;
        }
        for(char c:word2){
            if(b[c-'a']==0) d2++;
            b[c-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a[i]==0) continue;

            for(int j=0;j<26;j++){
                if(b[j]==0) continue;

                int x=d1, y=d2;

                if(i!=j){
                    if(a[i]==1) x--;
                    if(a[j]==0) x++;

                    if(b[j]==1) y--;
                    if(b[i]==0) y++;
                }

                if(x==y) return true;
            }
        }
        return false;
    }
};