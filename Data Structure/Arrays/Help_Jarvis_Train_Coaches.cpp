/*
Tony Stark is in the planet Titan crying for his friends are turning into ashes, and on earth mayhem has ensued since a lot of people are turning into ashes too. Some trains have been derailed in such a way that a lot of its coaches are thrown off in a random disarray like coach 3, 4 and 5 are thrown off in one place, coach 2 and 6 are thrown off in another place, etc.

S.H.I.E.L.D calls upon Hulk and jarvis to help them collect and connect some the thrown off coaches of those trains, but a train can only move if the collected coaches number are in a continuous manner (need not to be in order) ,like 1234, 2314, 4123, 2341  etc.

Help Jarvis write a program for hulk to decide whether collected coaches will move or not.

Input Format:

First ilne contains one number t , denoting the number of test cases.

Next t lines contain sequence of the collected coach numbers (n)

Output Format:

YES or NO (In capitals)

Input constraints:
1 <= T <= 10000
1 <= N <= 1000000

Sample Input:
7
2415
4231
4125
5142
4132
2143
0001

Sample Output:
NO
YES
NO
NO
YES
YES
NO

Explanation
4231
4132
2143

For the above sample inputs the train will move because the combination of the coach numbers are in a continuous sequence.
*/


#include <bits/stdc++.h>

using namespace std;

void scanf_int(int& number){
	//Variable to indicate sign of input number
	bool negative = false;
	register int c;
	number = 0;

	//extract current character from buffer
	c = getchar(); //Can use getchar_unlocked() for more speed but it is not thread safe

	if(c == '-'){
		negative = true;
		c = getchar();
	}
	// Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for( ; (c > 47 && c < 58); c = getchar()){
    	number = number*10 + c - 48;
    }

    if(negative)
    	number *= -1;

}

void scanf_intToArray(int n[], int& size){
    int i=0;
    register int c = getchar_unlocked();

    for(; (c > 47 && c < 58); c = getchar_unlocked()){
        n[i++] = c-48;
    }
    size = i;
}

bool canMove(int n[], int size){
    
    sort(n, n+size);
    for(int j=0; j<size-1; ++j){
        //cout<<n[j]<<" "<<n[j+1]<<"\n";
        if((n[j+1] - n[j]) != 1)
            return false;
    }
    
    return true;
}

int main(){
    int v[1000000];
    int T, size;
    scanf_int(T);
    while(T--){
        scanf_intToArray(v, size);
        if(canMove(v, size))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
