// Array :-
/*
'Array' is a collection of elements of similar data type, that can be stored multiple times.

Index is referenced by the number where the element is stored. It always starts from '0'.

It is stored inside memory at alocation. The very first element's location is not known but location of elements after it are exactly saved after it only. 

We can modify , add, replace , do anything with array.

[It's also 1 Dimensional Array.]
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    cin >> arr[1] >> arr[2] >> arr[3];

    cout << endl << "The array : "  << arr[1] << endl << arr[2] << endl << arr[3] << endl;

    // Modifying array :-

    arr[3] += 5;
    cout << "arr[3] : " << arr[3] << endl;

    // Replace array :-
    arr [2] = 1;
    cout << "arr[2] : " << arr[2] << endl; 
    return 0;
}