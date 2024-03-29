class Solution {
    public int longestPalindrome(String s) {
        int size=0;
        HashSet<Character> hs = new HashSet<Character>();
        for(int i=0;i<s.length();i++){
            if(hs.contains(s.charAt(i))){
                size = size+2;
                hs.remove(s.charAt(i));
            }
            else{
                hs.add(s.charAt(i));
            }
        }
        if(!hs.isEmpty()){
            size=size+1;
        }
        return size;
    }
}

//time complexity: O(n)
