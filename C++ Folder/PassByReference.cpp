// Pass By Refrence :-
// In Pass by reference function, the input value's address is added to the function when given as parameter. Address is given by '&'.


#include <bits/stdc++.h>
using namespace std;

void sum(int &num){
    cout << num << endl;;
    num +=5;
    cout << num << endl;
    num +=5;
    cout << num << endl;
    
}

int main(){
    int num;
    cin >> num;
    sum(num); 
    cout << "num : " << num <<endl; // The 'num' be changed now same as the function one, not the original one.
    return 0;
}


// For string :-

/*
#include <bits/stdc++.h>
using namespace std;

void doSomething(string &s){
    s[0] = 't';
    cout << "s : " << s << endl;

}

int main(){
    string s;
    cin >> s;
    doSomething(s);

    cout << "s : " << s << endl; // Let input be 'raj' then, 'taj' & 'taj' in both.
    return 0;
}
*/