class Solution {
    public int subarraySum(int[] nums, int k) {
        int count =0;
        int currentSum = 0;
        HashMap<Integer,Integer> hm = new HashMap<>();
        hm.put(0,1);
        
        for(int x:nums){
            currentSum +=x;
            int compliment = currentSum - k;
            if(hm.containsKey(compliment)){
                count = count + hm.get(compliment);
            }
            
            if(hm.containsKey(currentSum)){
                hm.put(currentSum, hm.get(currentSum) + 1); 
            }
            else{
              hm.put(currentSum,1);              
            }
        }
        return count;
    }
}
//time complexity : O(n)
//Space Complexity : O(n)
