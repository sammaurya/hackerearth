/*
You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).

Input Format
The first and only line of input contains the String S. The String shall consist of lowercase English alphabets only.

Output Format
Print the required answer on a single line.

Constraints 
1 <= |S| <= 100

Note
String S consists of lowercase English Alphabets only.

Sample Input:
aba

Sample Output:
Yes

*/


import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
       
       BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
       String str = br.readLine();
       
       if(isPalindrome(str))
            System.out.println("YES");
       else
            System.out.println("NO");
    }
    
    static boolean isPalindrome(String str){
        int n = str.length();
        for(int i=0, j=n-1; i<=j; ++i, --j){
            if(str.charAt(i) != str.charAt(j))
                return false;
        }
        return true;
    } 
}

