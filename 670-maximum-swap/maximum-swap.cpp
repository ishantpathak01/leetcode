class Solution {
public:
    int maximumSwap(int num) {
       unordered_map<char,int>index;
       string num1=to_string(num);
       string num2=num1;
       for(int i=0;i<num1.size();i++){
        index[num1[i]]=i;
       }
       sort(num2.rbegin(), num2.rend());
       int count=0;
       int i=0;
       while(count<1&& i<num1.size()){
        if(num1[i]==num2[i]){
            i++;
        }
        else{
            swap(num1[i],num1[index[num2[i]]]);
            count=1;
        }

       }
       return stoi(num1);
    }
};