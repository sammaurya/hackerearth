/*
Students have become secret admirers of SEGP. They find the course exciting and the professors amusing. After a superb Mid Semester examination its now time for the results. The TAs have released the marks of students in the form of an array, where arr[i] represents the marks of the ith student.

Since you are a curious kid, you want to find all the marks that are not smaller than those on its right side in the array.

Input Format
The first line of input will contain a single integer n denoting the number of students.
The next line will contain n space separated integers representing the marks of students.

Output Format
Output all the integers separated in the array from left to right that are not smaller than those on its right side.

Constraints
1 <= n <= 1000000
0 <= arr[i] <= 10000

Sample Input:
6
16 17 4 3 5 2

Sample Output:
17 5 2

*/


#include <bits/stdc++.h>
using namespace std;

void FS_int(int& number){
	//Variable to indicate sign of input number
	bool negative = false;
	number = 0;

	//extract current character from buffer
	register int c = getchar(); //Can use getchar_unlocked() for more speed but it is not thread safe

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
    	number = 0 - number;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i;
    FS_int(n);
    int arr[n];
    for(i=0; i<n; ++i){
        FS_int(arr[i]);
    }
    vector<int> temp;
    int max = arr[n-1];
    for(i=n-1; i>=0; --i){
        
        if(arr[i] >= max){
            temp.push_back(arr[i]);
            max = arr[i];
        }
    }
    for(auto it = temp.end()-1; it>=temp.begin(); --it)
        printf("%d ",*it);
    
    return 0;
    
}
