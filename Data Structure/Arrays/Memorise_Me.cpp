/*
Arijit is a brilliant boy. He likes memory games. He likes to participate alone but this time he has to have a partner. So he chooses you.

In this Game , your team will be shown N numbers for few minutes . You will have to memorize these numbers.

Now, the questioner will ask you Q queries, in each query He will give you a number , and you have to tell him the total number of occurrences of that number in the array of numbers shown to your team . If the number is not present , then you will have to say “NOT PRESENT” (without quotes).

INPUT And OUTPUT

The first line of input will contain N, an integer, which is the total number of numbers shown to your team.

The second line of input contains N space separated integers .

The third line of input contains an integer Q , denoting the total number of integers.

The Next Q lines will contain an integer denoting an integer,  , for which you have to print the number of occurrences of that number () in those N numbers on a new line.

If the number  isn’t present then Print “NOT PRESENT” (without quotes) on a new line.

CONSTRAINTS:
1<=N<=10^5
0<=Bi<=1000
1<=Q<=10^5

Sample Input:
6
1 1 1 2 2 0
6
1
2
1
0
3
4
Sample Output:
3
2
3
1
NOT PRESENT
NOT PRESENT

Explanation
The given array is (1,1,1,2,2,0) of size 6.

Total number of queries is 6 also.

For the first query i.e for 1 , the total of number of occurrences of 1 in the given array is 3 . Hence the corresponding output is 3.

For the second query i.e. for 2, the total of number of occurrences of 2 in the given array is 2 . Hence the corresponding output is 2.

For the fifth query i.e. for 3. 3 is not present in the array . So the corresponding output is "NOT PRESENT" (without quotes)

*/

// Write your code here

#include <bits/stdc++.h>
using namespace std;

// //slow method
// int element_count(int arr[], int n, int q){
//     int count = 0;
//     for(int i = 0; i<n; i++){
//         if(arr[i] == q)
//             count++;
//     }
//     if(count != 0)
//         return count;
//     else 
//         return -1;
// }
//fast method using unordered_map
/*
int main(){
    int n,q,i,num;
    unordered_map<int, int> mp;
    cin>>n;
    for(i=0; i<n; ++i){
        cin>>num;
        if(mp.find(num) == mp.end()){
            mp.insert(make_pair(num,1));
        }
        else{
            mp[num] = mp[num] + 1;
        }
    }
    cin>>q;
    int query;
    for(i=0; i<q; ++i){
        cin>>query;
        if(mp.find(query) == mp.end())
            cout<<"NOT PRESENT"<<endl;
        else
            cout<<mp[query]<<endl;
    }
    return 0;
        
} */
//Very Fast Methods
int main(){
    int n,q,query,i,a,b;
    scanf("%d",&n);
    int num[100000] = {0};
    for(i = 0; i<n; i++){
        scanf("%d",&a);
        num[a]++;
    }
    scanf("%d",&q);
    while(q--){
        scanf("%d",&query);
        if(num[query] == 0)
            printf("NOT PRESENT\n");
        else
            printf("%d\n",num[query]);
    }
    return 0;
}





