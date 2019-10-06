/*
You are given an integer N. You need to print the series of all prime numbers till N.

Input Format

The first and only line of the input contains a single integer N denoting the number till where you need to find the series of prime number.

Output Format

Print the desired output in single line separated by spaces.

Constraints
1 <= N <= 1000

Sample Input:
9

Sample Output:
2 3 5 7

*/



#include<stdio.h>
#include<math.h>

int isPrime(int n){
    double m = sqrt(n);
    for(int i=2; i<=m; ++i){
        if(n%i == 0)
            return 0;
    }
    return 1;
}

void printPrime(int n){
    int flag,i,j;
    if(n>=2) printf("2 ");
    
    for(i=3; i<=n; ++i){
        flag = 0;
        for(j = 2; (j*j<=i) && flag==0; j++){
            if(i%j == 0){
                flag = 1;
            }
        }
        if(flag == 0)
            printf("%d ",i);
    }
}

int main(){
    int n;
    scanf("%d",&n);
   // printPrime(n);
   /*printPrime() is little slower than isPrime() method to find all prime numbers till N
   */
    for(int i=2; i<=n; ++i){
        if(isPrime(i))
            printf("%d ",i);
    }
    return 0;
}

