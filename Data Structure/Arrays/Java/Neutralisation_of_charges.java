
/*
In a parallel universe, there are not just two charges like positive and negative, but there are 26 charges represented by lower english alphabets.

Charges have a property of killing each other or in other words neutralizing each other if they are of same charge and next to each other.

You are given a string S where each Si represents a charge, where 0<=i<=|S|-1.

You need to output size of final string followed by string after which no neutralizing is possible.

Sample Input:
12
aaacccbbcccd

Sample Output:
2
ad

Explanation
aaacccbbcccd -> accd -> ad
*/


import java.io.BufferedReader;
import java.io.InputStreamReader;

//import for Scanner and other utility classes
import java.util.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
        //BufferedReader
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int size = Integer.parseInt(br.readLine());
        String s = br.readLine();
        
        neutralize(s, size);
        

    }
    //Efficient Method
    static void neutralize_Efficient(String s, int size){
        char stack[] = new char[100000];
        int top = -1;
        for(int i=0; i<size; ++i){
            if(top == -1){
                stack[++top] = s.charAt(i);
                
            }
            else if(stack[top] != s.charAt(i)){
                stack[++top] = s.charAt(i);
            }
            else{
                top--;
            }
        }
        System.out.println(top+1);
        for(int i=0; i<=top; ++i)
            System.out.printf("%c",stack[i]);
    }
    
    static void neutralize(String s, int size){
        Stack<Character> res = new Stack<Character>();
        Stack<Character> temp = new Stack<Character>();
        
        for(int i=0; i<size; ++i){
            if(temp.empty() == true || temp.peek() != s.charAt(i)){
                temp.push(s.charAt(i));
            }
            else if(temp.peek() == s.charAt(i)){
                temp.pop();
            }
        }
        size = 0;
        while(!temp.empty()){
            res.push(temp.pop());
            size++;
        }
        System.out.println(size);
        while(!res.empty()){
            System.out.printf("%c",res.pop());
        }
    }
}
