class Solution {
    public List<Integer> toggleLightBulbs(List<Integer> bulbs) {
        HashSet<Integer> set=new HashSet<>();
       for(int n :  bulbs){
           if(set.contains(n)){
               set.remove(n);
           }else{
           set.add(n);
           }
       }
        List<Integer> res=new ArrayList<>(set);
        Collections.sort(res);
        return res;
        
    }
}