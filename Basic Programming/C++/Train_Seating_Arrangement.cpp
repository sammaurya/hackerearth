
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


#include<bits/stdc++.h>

using namespace std;

int main(){
    int T,n,i=1;
    map<int,int> WS;
    map<int,int> MS;
    map<int,int> AS;
    while(i<=108){
        WS.insert(make_pair(i,i+11));
        WS.insert(make_pair(i+5, i+6));
        i += 12;
    }
    i=2;
    while(i<=107){
        MS.insert(make_pair(i, i+9));
        MS.insert(make_pair(i+3, i+6));
        i += 12;
    }
    i=3;
    while(i<=106){
        AS.insert(make_pair(i, i+7));
        AS.insert(make_pair(i+1, i+6));
        i += 12;
    }
    int arr[5],count=1;
    bool flag = false;
    scanf("%d",&T);
    while(T--){
        
        scanf("%d",&n);
       
        arr[0] = n;
        arr[1] = n - 1;
        arr[2] = n + 11;
        arr[3] = n - 11;
        arr[4] = n + 1;
        
        flag = false;
    
        for(int i=0; i<5 && flag == false; ++i){
            auto it = WS.find(arr[i]);
            if(it != WS.end()){
                if(it->first == n){
                    printf("%d WS\n",it->second);
                    flag = true;
                }
                else if(it->second == n){
                    printf("%d WS\n",it->first);
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
            for(int i=0; i<5 && flag == false; ++i){
                auto it = MS.find(arr[i]);
                if(it != MS.end()){
                    if(it->first == n){
                        printf("%d MS\n",it->second);
                        flag = true;
                    }
                    else if(it->second == n){
                        printf("%d MS\n",it->first);
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
            for(int i=0; i<5 && flag == false; ++i){
                auto it = AS.find(arr[i]);
                if(it != AS.end()){
                    if(it->first == n){
                        printf("%d AS\n",it->second);
                        flag = true;
                    }
                    else if(it->second == n){
                        printf("%d AS\n",it->first);
                        flag = true;
                    }
                }
            }
        }
    }
    
    return 0;
}