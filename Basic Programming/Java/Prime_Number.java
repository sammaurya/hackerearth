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


import java.io.BufferedReader;
import java.io.InputStreamReader;

class TestClass {
    public static void main(String args[] ) throws Exception {
       
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        
        for(int i=2; i<=n; ++i){
            
            if(isPrime(i))
                System.out.printf("%d ",i);
                
        }
        

    }
    
    static boolean isPrime(int n){
        double m = Math.sqrt(n);
        for(int i=2; i<=m; ++i){
            if(n%i == 0)
                return false;
        }
        return true;
    }
}
