class Solution {
public:
    int secondHighest(string s) {
        vector<int>arr;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                arr.push_back(s[i]-'0');
            }
        }
        int largest=-1,sec_largest=-1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>largest){
                sec_largest=largest;
                largest=arr[i];
            }
            else if(arr[i]>sec_largest && arr[i]<largest){
                sec_largest=arr[i];
            }
        }
        return sec_largest;
    }
};