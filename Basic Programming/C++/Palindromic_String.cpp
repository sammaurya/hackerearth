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


#include <iostream>
#include <string.h>

using namespace std;

bool isPalindrome(string s, int n){
    for(int i=0, j=n-1; i<=j; ++i, --j){
       // printf("%c %c",s[i],s[j]);
        if(s[i] != s[j])
            return false;
    }
    return true;
}
int main(){
    string str;
    scanf("%s",str.c_str()); //simple scanf("%s",str); doesn't work in c++
   // cin>>str;
    int n = str.length();
    if(isPalindrome(str,n))
        printf("YES");
    else
        printf("NO");
        
    return 0;
}

