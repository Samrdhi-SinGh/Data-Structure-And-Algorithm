// Function :-
/*
Function are a set of code that perform something for you.
Functions are used to modularise code.
Function are used to increase readability.
Functions are used to use same code multiple times in a program.
Function can never have samename as already built functions.
Some types of function :-

1. void Function :-
It just does it's work and gives nothing in return.

2. Parameterised function :-
If parameters with data type are given to the function. Then, it's a Parameterised Function.

3. Non - parameterised function :-
If No parameters are given to a function. Then, it's caled Non-parameterised Function.

4. return Function :-
It's a type of function which returns something always. If there is no return it'll always give 'garbage value'.
*/

// void function with parameter :-

#include <bits/stdc++.h>
using namespace std;

void printName(string name){
    cout << "Hello " << name << endl ;
}
int main(){
    cout << "First name : ";
string name;
cin >> name;
printName(name);

// Repeating same function :-
cout << "Second name : ";
string name1;
cin >> name1;
printName(name1);
return 0;
}


// Non-parameterized function :-
/*
#include <bits/stdc++.h>
using namespace std;

void prints(){
    cout << "Hey" << endl;
}

int main(){
    prints();
    return 0;
}*/