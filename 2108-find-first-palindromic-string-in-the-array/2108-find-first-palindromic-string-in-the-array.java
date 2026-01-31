class Solution {
    public String firstPalindrome(String[] words) {
        for(int i=0; i<words.length; i++){
            int j=words[i].length()-1;
            int k=0;
            while(k<j && words[i].charAt(k)==words[i].charAt(j)){
                    k++;
                    j--;
            }
            if(k>=j){
                return words[i];
            }
        }
        return "";
    }
}