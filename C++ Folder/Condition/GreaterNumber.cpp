/*
Write a program that takes two numbers as input and prints the greater number.
Example:
Input: 8 12
Output: 12
Input: 15 3
Output: 15
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;
    cin >> a >> b;

    if(a>b){
        cout <<"Greater number is:" << a;
    }
    
    else if(b>a){
        cout << "Greater number is:" << b;
    }
    
    else{
        cout << "Both number are same.";
    }

    return 0;
} 