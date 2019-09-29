/*
Having a good previous year, Monk is back to teach algorithms and data structures. This year he welcomes the learners with a problem which he calls "Welcome Problem". The problem gives you two arrays A and B (each array of size N) and asks to print new array C such that:
C[i] = A[i] + B[i]; 1<=i<=N 
Now, Monk will proceed further when you solve this one. So, go on and solve it :)

Input:
First line consists of an integer N, denoting the size of A and B.
Next line consists of N space separated integers denoting the array A.
Next line consists of N space separated integers denoting the array B.

Output:
Print N space separated integers denoting the array C.

Input Constraints:
1<=N<10^5
1<=A[i]<=10^6; 1<=i<=N
1<=B[i]<=10^6; 1<=i<=N

Sample Input:
5
1 2 3 4 5
4 5 3 2 10
Sample Output:
5 7 6 6 15 

*/

// Write your code here
#include <bits/stdc++.h>

using namespace std;

void scanf_leave_int(int *n)
    {
        register int c = getchar_unlocked();
        for( ; (c<48 || c>57); c = getchar_unlocked() );
        for( ; (c>47 && c<58); c = getchar_unlocked() );
    }
     
    void scanf_int(int *n){
        register int c = getchar_unlocked();
        *n = 0;
        for( ; (c<48 || c>57); c = getchar_unlocked() );
        for( ; (c>47 && c<58); c = getchar_unlocked() ){
            *n = (*n<<1) + (*n<<3) +c -48;
        }
    }

int main(){
    int n,i,b;
    scanf_int(&n);
    int a[n+1];
    for(i=1;i<=n;i++){
        scanf_int(&a[i]);
    }
    for(i=1;i<=n;i++){
        scanf_int(&b);
        printf("%d ",a[i]+b);
    }
    return 0;
}
