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


#include <stdio.h>

int isPalindrome(char s[], int n){
    //int n = sizeof(s)/sizeof(string);
    for(int i=0, j=n-1; i<=j; ++i, --j){
        //printf("%c %c\n",s[i],s[j]);
        if(s[i] != s[j])
            return 0;
    }
    return 1;
}

int main(){
    char s[1000];
    scanf("%s",s);
    int i=0,n=1;

    //for(i=0; s[i]!='\0'; ++i); //used to find actual size of string
      // n++;  
    n = strlen(s);
    if(isPalindrome(s, n))
        printf("YES");
    else
        printf("NO");
    
    return 0;
}
