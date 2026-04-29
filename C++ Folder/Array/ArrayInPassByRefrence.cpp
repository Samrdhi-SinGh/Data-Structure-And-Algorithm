// Array in Pass by reference :-
// Array always use pass by reference even without giving '&'(Address) it let's the function use original input instead of it's copy.

#include <bits/stdc++.h>
using namespace std;

void Arrays(int arr[], int n){
    arr[0] +=100;
    cout << "Value of arr[0] in function : "<< arr[0] << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i= i+1){
        cin >> arr[i];
    }
    Arrays(arr,n);
    cout << "Value of arr[0] in int main : " << arr[0] << endl; 
    return 0;
}

// Both arr[0] of funcion and int main will always be same.

