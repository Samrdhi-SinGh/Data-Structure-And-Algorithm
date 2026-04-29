// 2D array :-
/* 
In 2D array that is 2 Dimensional array, there are rows and columns in it. 
It's form is 'arr[row][column]'.

If we have to give value to array or do anything we do it like 'arr[row.no][column.no]= value'.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[2][2];
    arr[1][2] = 34; // Assigning value.
    cout << "arr[1][2] : " << arr[1][2] << endl;

    cout << "arr[1][3] : " << arr[1][3] << endl; // It will give 'Garbage value'. Why?
    // Because the value isn't assigned. So, when it looks for value and gets none. It instead gives 'garbage value' which gives different values every time the program is executes.

    return 0;

}