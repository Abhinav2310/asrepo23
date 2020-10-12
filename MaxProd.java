//Maximum product
class Solution {
    public int maxProduct(int[] nums) {
        int prod,temp,j=0;
        int arr[] =new int[nums.length];
        for(int k=0;k<nums.length-1;k++){
            for(int i=0;i<nums.length-1;i++){
                j=i+1;
                if(nums[i]>nums[j]){
                    temp=nums[j];
                    nums[j]=nums[i];
                    nums[i]=temp;
                }
            }
        }
        for(int i=0;i<nums.length;i++){
            arr[i] = nums[i]-1;
        }
        prod = arr[arr.length-2]*arr[arr.length-1];
        return prod;
    }    
}

//Alternative:
class Solution {
    public int maxProduct(int[] nums) {
        int prod,temp,j=0;
        int arr[] =new int[nums.length];
        Arrays.sort(nums);
        for(int i=0;i<nums.length;i++){
            arr[i] = nums[i]-1;
        }
        prod = arr[arr.length-2]*arr[arr.length-1];
        return prod;
    }    
}
