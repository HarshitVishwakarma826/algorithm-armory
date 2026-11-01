class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int>arr;
        int temp=n;
        while(temp){
            int rem=temp%10;
            arr.push_back(rem);
            temp=temp/10;
        }
        reverse(arr.begin(),arr.end());
        if(!next_permutation(arr.begin(), arr.end())) {
            return -1;
        }
        long long num=0;
        for(int i=0;i<arr.size();i++){
            num=num*10+arr[i];
        }
        if(num>INT_MAX) return -1;
        return num;
    }
};