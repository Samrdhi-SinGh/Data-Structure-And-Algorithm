// Nested if-else statement :-
/* 
Take the age from the user and then decide accordingly,

1. If age < 18
print -> Not eligible for job.
2. If age >= 18 and age <= 54
print -> Eligible for job.
3. If age >= 55 and age <= 57
print -> Eligible for job, but retirement soon.
4. If age > 57
print -> Retirement time.

*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cin >> age;
    if (age < 18){
        cout << " Not eligible for job.";
    }
    else if(age <= 54){
        cout << "Eligible for job.";
    }
    else if (age <= 57) {
        cout << "Eligible for job,";
        if(age >=55){  // We used nested 'if' here , as we can see age<=57 are eligible but the one who are above 55 will have retirement soon. So to warn them we used 'if' inside the 'else if' statement. We know that it would only come to this condition after it failed the previous one, that means age >54. So just to warn we used nested 'if'.z
            cout << "but retirement soon.";
        }
    }
    else {
        cout << " Retirement time.";
    }

    return 0;
}


// We used nested 'if' here. We used it inside an 'else if', we can use it inside 'if'too.

