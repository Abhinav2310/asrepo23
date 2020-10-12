//XOR_Operation
class Solution {
    public int xorOperation(int n, int start) {
        int[] nums = new int[n];
        int result=0;
        for(int i=0;i<n;i++){
            nums[i]=start+(2*i);
        }
        String[] strArr=new String[n];
        for(int j=0;j<n;j++){
            strArr[j]=Integer.toBinaryString(nums[j]);
        }
        String str = strArr[0];
        for(int i=1;i<n-1;i++){
            str = xor(str,strArr[i]);
        }
        result = Integer.parseInt(str.toString(),2);
        return result;
    }
    public String xor(String str1, String str2){
        StringBuilder newStr = new StringBuilder();
        for(int i=0,j=0;i<str1.length()||j<str2.length();i++,j++){
            if(str1.charAt(i)==(str2.charAt(j))){
                newStr.append('0');
            }
            else{
                newStr.append('1');
            }
        }
        return newStr.toString();
    }
}
