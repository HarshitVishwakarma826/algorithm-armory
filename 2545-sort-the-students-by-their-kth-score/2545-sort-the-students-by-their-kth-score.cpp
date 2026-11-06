class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        auto myComparator=[k](vector<int>& a,vector<int>& b){
            return a[k]>b[k];
        };
        sort(score.begin(),score.end(),myComparator);
        return score;
    }
};