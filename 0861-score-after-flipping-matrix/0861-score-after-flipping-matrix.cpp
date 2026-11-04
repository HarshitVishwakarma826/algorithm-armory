class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            if(grid[i][0]==0){
                for(int j=0;j<n;j++){
                    grid[i][j]=1-grid[i][j];
                }
            }
        }
        for(int j=1;j<n;j++){
            int ones=0;
            for(int i=0;i<m;i++){
                if(grid[i][j]==1) ones++;
            }
            if(ones<m-ones){
                for(int i=0;i<m;i++){
                    grid[i][j]=1-grid[i][j];
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            int num=0;
            for(int j=0;j<n;j++){
                num=num*2+grid[i][j];
            }
            ans=ans+num;
        }
        return ans;
    }
};