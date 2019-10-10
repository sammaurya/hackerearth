
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
#include <stdio.h>
 
int main()
{
    int n,i,s,t;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&t);
        if(t%12==1||t%12==0)
        {
            if(t%12==0)
            {
                s=t-11;
                printf("%d WS\n",s);
            }
            else
            {
                s=t+11;
                printf("%d WS\n",s);
            }
            
        }
        else if(t%12==6||t%12==7)
        {
            if(t%12==6)
            {
                s=t+1;
                printf("%d WS\n",s);
            }
            else
            {
                s=t-1;
                printf("%d WS\n",s);
            }
        }
        else if(t%12==5||t%12==8)
        {
            if(t%12==5)
            {
                s=t+3;
                printf("%d MS\n",s);
            }
            else
            {
                s=t-3;
                printf("%d MS\n",s);
            }
        }
        else if(t%12==2||t%12==11)
        {
            if(t%12==2)
            {
                s=t+9;
                printf("%d MS\n",s);
            }
            else
            {
                s=t-9;
                printf("%d MS\n",s);
            }
        }
        else if(t%12==3||t%12==10)
        {
            if(t%12==3)
            {
                s=t+7;
                printf("%d AS\n",s);
            }
            else
            {
                s=t-7;
                printf("%d AS\n",s);
            }
        }
        else
        {
            if(t%12==4)
            {
                s=t+5;
                printf("%d AS\n",s);
            }
            else
            {
                s=t-5;
                printf("%d AS\n",s);
            }
       }
            }
        
    return 0;
}