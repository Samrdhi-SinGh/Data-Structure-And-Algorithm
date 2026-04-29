// switch statement :-
/*
A 'switch' statement lets the program choose one block of code to be execute from many options based on the value of single input or exprssion.

There are are many cases inside 'switch'. So as i=one block of code is choosen to be execute. So, to not let the cases after it be executed as they are not needed 'break' statement is used.

'break' statement is used to immediately terminate a 'loop' or 'switch' or any case and transfer the contol to the next statement outside.

'default' statement is used at last in 'switch' always. for the inputs which do not relate to the switch case, default executes.
*/

// Take the day number and print the corresponding day for 1 print 'Monday', for 2 print 'Tuesday' and, so on for 7 print 'Sunday' :-

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    case 4:
        cout << "Thrusday";
        break;

    case 5:
        cout << "Friday";
        break;

    case 6:
        cout << "Saturday";
        break;

    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "Invalid Input!";
    }
    
    return 0;
}
