// Let's make a maximum function to find the max number :-

/*
#include <bits/stdc++.h>
using namespace std;

int maximum(int num1, int num2){
    if(num1>num2){ // We can use if-else statements inside function.
        return num1;
    }
}
    
// If user give num2 greater number then 'Garbage value' will be returned as 'if' will fail and when it'll look for return in the function and find none it'll return 'garbage value'.
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int max = maximum(num1,num2);
    cout << "Maximum number : "<< max << endl;
    return 0;
} 
*/

#include <bits/stdc++.h>
using namespace std;

int maximum(int num1, int num2){

    if(num1>num2){ 
        return num1;
    }
    else{
        return num2;
    }
}
    
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int max = maximum(num1,num2);
    cout << "Maximum number : "<< max << endl;
    return 0;
} 