// Pass by value :-
//In Pass by value function, when the inout is taken in the function. It always takes a copy of input value, not the original one. 


#include <bits/stdc++.h>
using namespace std;

void sum(int num){
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
    cout << "num : " << num <<endl; // Origional input will be printed instead of the one used in function.
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

    cout << "s : " << s << endl; // Let input be 'raj' then, 'taj' & 'raj'.
    return 0;
}
*/