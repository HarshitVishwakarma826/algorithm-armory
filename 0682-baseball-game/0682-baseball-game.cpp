class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>arr;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+") arr.push_back(arr[arr.size()-1]+arr[arr.size()-2]);
            else if(operations[i]=="D") arr.push_back(2*arr[arr.size()-1]);
            else if(operations[i]=="C") arr.pop_back();
            else arr.push_back(stoi(operations[i]));
        }
        int sum=0;
        for(int x:arr) sum+=x;
        return sum;
    }
};