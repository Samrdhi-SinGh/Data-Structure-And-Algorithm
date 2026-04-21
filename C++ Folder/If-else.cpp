// If-else statement :-

/* 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int var;
    cin >> var;
    if (condition){
        cout << "Statement";
    }
    else{
        cout << "Statement";
    }
    return 0;
}
*/

// Write a program that takes an input of age and prints if you are adult or not :-

#include <bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cin >> age;
    if (age >= 18){
        cout << " You are an adult.";
    }
    else{
        cout << " You are not an adult.";
    }
}

// if else-if statement :-

#include <bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cin >> age;

    if(age < 15){ // If the input will be 15 to 17 there will be no output. Because there is no condition for this inputs.
        cout << "You are not an adult.";
    }
    else if(age >= 18 ){ 
        cout << "You are an adult.";
    }
    return 0;
}

