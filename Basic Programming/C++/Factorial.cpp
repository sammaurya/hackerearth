/*
You have been given a positive integer N. You need to find and print the Factorial of this number. The Factorial of a positive integer N refers to the product of all number in the range from 1 to N. You can read more about the factorial of a number here.

Input Format:
The first and only line of the input contains a single integer N denoting the number whose factorial you need to find.

Output Format
Output a single line denoting the factorial of the number N.

Constraints
1 <= N <= 10

Sample Input:
5

Sample Output:
120

*/


#include <iostream>

//Iterative method
int factorial(int num){
    int fact = 1;
    for(int i = 1; i<=num; ++i){
        fact = fact * i;
    }
    return fact;
}

//Recursive method
int fact(int num){
    if(num == 1)
        return 1;
    else
        return num * fact(num -1);
}

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	num = fact(num);
	printf("%d", num);                          // Writing output to STDOUT

    return 0;
}


