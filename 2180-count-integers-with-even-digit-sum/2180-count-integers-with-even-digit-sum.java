class Solution {
    public int countEven(int num) {
        int answer = 0;
        for(int i = 2;i <=num;i++) {
            int x = i;
            int sum = 0;
            while(x> 0) {
                sum =sum+ x % 10;
                x =x/ 10;
            }
            if(sum % 2 == 0){
              answer++;  
            } 
        }
        return answer;
    }
}