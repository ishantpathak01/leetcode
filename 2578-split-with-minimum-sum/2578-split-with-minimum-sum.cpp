class Solution {
public:
    int splitNum(int num) {
      vector<int>value;
      while(num>0){
        int last=num%10;
        value.push_back(last);
        num/=10;
      }  
      sort(value.begin(),value.end());
      int num1=0,num2=0;
      for(int i=0;i<value.size();i++){
        if(i%2==0){
            num1=num1*10+value[i];
        }
        else{
            num2=num2*10+value[i];
        }
      }
      return num1+num2;
      
    }
};