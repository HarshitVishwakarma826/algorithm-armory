class Solution {
public:
    string removeDigit(string number, char digit) {
        int n=number.size();
        for(int i=0;i<n;i++){
            if(number[i]==digit){
                if(number[i]<number[i+1]){
                    number.erase(i,1);
                    return number;
                }
            }
        }
        int idx=-1;
        for(int i=n-1;i>=0;i--){
            if(number[i]==digit){
                idx=i;
                break;
            }
        }
        number.erase(idx,1);
        return number;
    }
};