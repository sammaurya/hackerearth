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



#include <bits/stdc++.h>

using namespace std;

void neutralize(){
    int size;
    scanf("%d",&size);
    string s;
    cin>>s;
    stack<char>res, temp;
    for(int i=0; i<size; ++i){
        if(temp.empty() == true || temp.top() != s[i]){
            temp.push(s[i]);
        }
        else if(temp.top() == s[i]){
            temp.pop();
        }
    }
    size = 0;
    while(!temp.empty()){
        res.push(temp.top());
        temp.pop();
        size++;
    }
    printf("%d\n",size);
    while(!res.empty()){
        printf("%c",res.top());
        res.pop();
    }
}

void neutralize_Efficient(){
    int size;
    char ch;
    scanf("%d",&size);
    
    //Efficient Method
    char stack[100000];
    int top = -1;
    for(int i=0; i<size+1; ++i){
        scanf("%c",&ch);
       // printf("%c",ch);
        if(top == -1){
            stack[++top] = ch;
        }
        else if(stack[top] != ch){
            stack[++top] = ch;
        }
        else{
            top--;
        }
    }
    printf("%d\n",top);
    for(int i=0; i<=top; ++i)
        printf("%c",stack[i]);
}
int main(){
    
    neutralize_Efficient();
    
    return 0;
    
}