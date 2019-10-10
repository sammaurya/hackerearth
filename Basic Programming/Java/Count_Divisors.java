/*
You have been given 3 integers - l, r and k. Find how many numbers between l and r (both inclusive) are divisible by k. You do not need to print these numbers, you just have to find their count.

Input Format
The first and only line of input contains 3 space separated integers l, r and k.

Output Format
Print the required answer on a single line.

Constraints
1 <= l <= r <= 1000
1 <= k <= 1000

Sample Input:
200 300 2

Sample Output:
51

*/


import java.util.*;
import java.io.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
       
        //BufferedReader
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();
        String[] str = s.trim().split("\\s+");
        int l = Integer.parseInt(str[0]);
        int r = Integer.parseInt(str[1]);
        int k = Integer.parseInt(str[2]);
        
        //Input as
        // StringTokenizer st = new StringTokenizer(br.readLine(), " ");
        // l = Integer.parseInt(st.nextToken());
        // r = Integer.parseInt(st.nextToken());
        // k = Integer.parseInt(st.nextToken());
        
        //Using Scanner
        // Scanner sc = new Scanner(System.in);
        // String[] str = sc.nextLine().trim().split(" ");
        // int l = Integer.parseInt(str[0]);
        // int r = Integer.parseInt(str[1]);
        // int k = Integer.parseInt(str[2]);
        
        int countMinus = 0, countMax = r/k;
    
        if(l > k){
            countMinus = l / k;
        }
        
        if(l%k == 0 || r%k == 0)
            countMax += 1;
        
        System.out.println((countMax-countMinus));

    }
}
