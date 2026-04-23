// Function :-
/*
Function are a set of code that perform something for you.
Functions are used to modularise code.
Function are used to increase readability.
Functions are used to use same code multiple times in a program.

Some types of function :-

1. void Function :-
It just does it's work and gives nothing in return.

2. Parameterised function :-
If parameters are given to the function. Then, it's a parameterised code.


*/

#include <bits/stdc++.h>
using namespace std;

void printName(string name){
    cout << "Hello " << name <<endl;
}
int main(){
string name;
cin >> name;
printName(name);
return 0;
}