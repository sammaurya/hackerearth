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


import java.io.BufferedReader;
import java.io.InputStreamReader;

class TestClass {
    public static void main(String args[] ) throws Exception {
      
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());                // Reading input from STDIN
        n = fact(n);
        System.out.println(n);    // Writing output to STDOUT

    }
    
    //Iterative method
    static int factorial(int num){
        int fact = 1;
        for(int i = 1; i<=num; ++i){
            fact = fact * i;
        }
        return fact;
    }
    
    //Recursive method
    static int fact(int num){
        if(num == 1)
            return 1;
        else
            return num * fact(num -1);
    }
}
