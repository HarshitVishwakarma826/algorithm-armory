class Solution {
public:
    long long perfectPairs(vector<int>& nums) {
        vector<int> sorted;
        for (int num : nums) {
            sorted.push_back(abs(num));
        }
        sort(sorted.begin(), sorted.end());
        
        int n = sorted.size();
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            int index = binSearch(sorted, i + 1, n, sorted[i] * 2);
            ans += index - i - 1;
        }
        return ans;
    }
    
private:
    int binSearch(vector<int>& sorted, int left, int right, int target) {
        if (left >= right) return right;
        int mid = left + (right - left) / 2;
        if (sorted[mid] <= target) {
            return binSearch(sorted, mid + 1, right, target);
        } else {
            return binSearch(sorted, left, mid, target);
        }
    }
};