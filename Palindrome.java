//Check Palindrome
public class Palindrome{
  public static void main(String[] args) {
  // Write your code here
  System.out.println("Enter a string: ");
  //Scanner sc = new Scanner(System.in);
  String str = "Max";
  int len = str.length();
  String org_str = str;
  String rev="";
  for(int i=len-1;i>=0;i--){
    rev = rev + str.charAt(i);
  }
  if(org_str.equalsIgnoreCase(rev)){
    System.out.println(org_str+" is a Palindrome.");
  }
  else
    System.out.println(org_str+" is not a Palindrome.");
 }
 }
