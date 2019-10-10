/*
Akash and Vishal are quite fond of travelling. They mostly travel by railways. They were travelling in a train one day and they got interested in the seating arrangement of their compartment. The compartment looked something like

6  7|18 19|30 31|42 43|54 55|66 67|78 79|90 91|102 103 WS
5  8|17 20|29 32|41 44|53 56|65 68|77 80|89 92|101 104 MS
4  9|16 21|28 33|40 45|52 57|64 69|76 81|88 93|100 105 AS

3 10|15 22|27 34|39 46|51 58|63 70|75 82|87 94|99 106  AS
2 11|14 23|26 35|38 47|50 59|62 71|74 83|86 95|98 107  MS
1 12|13 24|25 36|37 48|49 60|61 72|73 84|85 96|97 108  WS

So they got interested to know the seat number facing them and the seat type facing them. The seats are denoted as follows :

Window Seat : WS
Middle Seat : MS
Aisle Seat : AS

You will be given a seat number, find out the seat number facing you and the seat type, i.e. WS, MS or AS.

INPUT
First line of input will consist of a single integer T denoting number of test-cases. Each test-case consists of a single integer N denoting the seat-number.

OUTPUT
For each test case, print the facing seat-number and the seat-type, separated by a single space in a new line.

CONSTRAINTS
1 <= T <= 10^5
1 <= N <= 108

Sample Input:
2
18
40

Sample Output:
19 WS
45 AS

*/


import java.io.BufferedReader;
import java.io.InputStreamReader;

import java.util.*;

class TestClass {
    public static void main(String args[] ) throws Exception {

        //BufferedReader
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        
        int T,n,i=1;
        HashMap<Integer,Integer> WS = new HashMap();
        HashMap<Integer,Integer> MS = new HashMap();
        HashMap<Integer,Integer> AS = new HashMap();
        
        while(i<=108){
            WS.put(i,i+11);
            WS.put(i+5, i+6);
            i += 12;
        }
        i=2;
        while(i<=107){
            MS.put(i, i+9);
            MS.put(i+3, i+6);
            i += 12;
        }
        i=3;
        while(i<=106){
            AS.put(i, i+7);
            AS.put(i+1, i+6);
            i += 12;
        }
        int arr[] = new int[5];
        int count=1;
        boolean flag = false;
        T = Integer.parseInt(br.readLine());
        while(T-- > 0){
            
            n = Integer.parseInt(br.readLine());
           
            arr[0] = n;
            arr[1] = n - 1;
            arr[2] = n + 11;
            arr[3] = n - 11;
            arr[4] = n + 1;
            
            flag = false;
    
            for(i=0; i<5 && flag == false; ++i){
                if(WS.containsKey(arr[i])){
                    // System.out.println("1 "+WS.get(arr[i])+" ");
                    if(WS.get(arr[i]) == n){
                        System.out.println(arr[i]+" WS");
                        flag = true;
                    }
                    else if(arr[i] == n){
                        System.out.println(WS.get(arr[i])+" WS");
                        flag = true;
                    }
                }
            }
            
            if(flag == false){
                arr[0] = n;
                arr[1] = n - 3;
                arr[2] = n + 9;
                arr[3] = n - 9;
                arr[4] = n + 3;
                
                for(i=0; i<5 && flag == false; ++i){
                    if(MS.containsKey(arr[i])){
                        if(MS.get(arr[i]) == n){
                            System.out.println(arr[i]+" MS");
                            flag = true;
                        }
                        else if(arr[i] == n){
                            System.out.println(MS.get(arr[i])+" MS");
                            flag = true;
                        }
                    }
                }
            }
            if(flag == false){
                arr[0] = n;
                arr[1] = n - 5;
                arr[2] = n + 7;
                arr[3] = n - 7;
                arr[4] = n + 5;
                
                for(i=0; i<5 && flag == false; ++i){
                    if(AS.containsKey(arr[i])){
                        if(AS.get(arr[i]) == n){
                            System.out.println(arr[i]+" AS");
                            flag = true;
                        }
                        else if(arr[i] == n){
                            System.out.println(AS.get(arr[i])+" AS");
                            flag = true;
                        }
                    }
                }
            }

    }
}
}
