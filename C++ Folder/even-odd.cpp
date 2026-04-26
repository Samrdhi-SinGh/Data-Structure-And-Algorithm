/*Write a program that takes an integer as input and uses if-else to check whether the number is:

Even or Odd
And also print whether it is Positive, Negative, or Zero
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    
    if(num == 0){
        cout << "It's Zero.";
    }
    else{
        if(num % 2 == 0){
        cout << "It's Even number, ";
        if(num < 0){
            cout << " and it's Negative.";
        }
         else{
            cout << "and it's Positive";
        }
    }
    else {
        cout << "It's Odd number, ";
               if(num < 0){
            cout << " and it's Negative.";
        }
        else{
            cout << "and it's Positive";
        }
    }
}
    return 0;
}