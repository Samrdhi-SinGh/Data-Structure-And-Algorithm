/* A school has following rules for grading system :-
a) Below 25 : F
b) 25 to 44 : E
c) 44 to 49 : D
d) 50 to 59 : C
e) 60 to 79 : B
f) 80 to 100 : A
*/

// If we use 'if' here for all the conditions. Then, in the execution even if the output will be executed . It'll still execute the leftover conditions :-

/*#include <bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    cin >> marks;

    if(marks < 25){
        cout << "F";
    }
    if(marks >= 25 && marks <= 44 ){
        cout << "E";
    }
    if(marks >= 44 && marks <= 49){
        cout << "D";
    }
    if(marks >= 50 && marks <= 59){
        cout << "C";
    }
    if(marks >= 60 && marks <=79){
        cout << "B";
    }
    if(marks >= 80 && marks <= 100){
        cout << "A";
    }

    return 0;
}

// It's not wrong to use 'if'. IT's just time taking as even after it gets the output, it still executes all existing conditions even as they will fail anyway.
 
*/

// And that's where 'felse if' statement comes in use. WIth it's use, when the output will be executed. IT'll stop executing the further conditions. We don't use '&&' because in the execution's work , it goes further because the condition it executed failed. So, the condtion is already more than the previous one :-

#include <bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    cin >> marks;

    if(marks < 25){
        cout << "F";
    }
    else if(marks <=44){
        cout << "E";
    }
    else if( marks <=49){
        cout << "D";
    }
    else if(marks <=59){
        cout << "C";
    }
    else if(marks <= 79){
        cout << "B";
    }
    else if(marks <= 100){ 
        cout << "A";
    }
// It isn't nacessary to always give 'else'.
    return 0;
}