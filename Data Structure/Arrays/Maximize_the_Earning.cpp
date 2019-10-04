/*
Napoleon choosed a city for Advertising his company's product. There are S streets in that city. Each day he travels one street. There are N buildings in a street which are located at points 1,2,4...N(respectively). Each building has some height(Say h meters). Napoleon stands at point 0. His height is 0.5m. Now Napoleon starts communicating with the people of each building. He can communicate with people of a particular building only if he can see that building. If he succeed to communicate with any particular building then his boss gives him R rupees i.e. if he communicates with K buildings in a day, then he will earn K*R rupees. Now Napoleon wants to know his maximum Earning for each day.

Note: All the points are on Strainght Line and Napoleon is always standing at point 0.

Input:
First line of input contains an integer S, denoting no of streets in the city.
Details for each street is described in next two lines.
First line contains two integers N and R denoting no of buildings in the Street and earning on communicating with a building.
Second line contains N integers, denoting height of  building.

Output:
Print S Lines, each containing maximum earning in ith street.
    
Constraints:
1 <= N <= 10^4
1 <= h <= 10^9
1 <= S <= 100
1 <= R <= 10^4

Sample Input:
2
6 3
8 2 3 11 11 10
5 12
12 20 39 45 89

Sample Output:
6
60

Explanation
There are two streets in the city.

The first street has 6 buildings and the earning of Napoleon for communicating with each building is 3 rupees.

Height of buildings are 8,2,3,11,11,10 respectively.

As Chef is standing at point 0, he will be able to see only 1st and 4th building.

So his total earning will be 3*2 = 6 rupees in that street

Similarly for 2nd street his earning will be 60 rupees

*/


#include <bits/stdc++.h>

#define ll long long
using namespace std;


int scan_int(){

	register int c =getchar_unlocked();;
	int number = 0;

	// Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for( ; (c > 47 && c < 58); c = getchar_unlocked()){
    	number = number*10 + c - 48;
    }
    return number;
}


ll scan_ll() 
{
    register int c; 
    ll number = 0;
    c = getchar_unlocked(); 
    for (; (c>47 && c<58); c=getchar_unlocked()) 
        number = number *10 + c - 48; 
    return number;
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T,N,R,i;
    ll building_height, h;
    int earning;
    T = scan_int();
    while(T--){
        N = scan_int();
        R = scan_int();
        earning = 0;
        h=0;
        for(i=0; i<N; ++i){
            building_height = scan_ll();
            if(building_height > h){
                h = building_height;
                earning++;
            }
        }
        printf("%d\n", earning*R);
    }
    
    return 0;
}



