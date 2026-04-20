/* // User input string :-

#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string a;
    cin >> a;
    cout << a;
    return 0;
} 
// Input : Hey Sammu
// The output will only print 'Hey'.
// Because string never takes more than one word.
*/

// So do we always assign each and every words of string to a variable to print a whole line of string ? 
/*
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1>>s2;
    cout << s1<<s2;
    return 0;

}*/
// The answer is No.
// Instead we use a function 'getline' where we just give the string andthe line will be printed. But it only prints single line.

// String with 'getline' function :-

# include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin,str);
    cout<< str;
    return 0;
}

// Only one line will be printed. Like, 
//Input :- Hey Sam. 
// How are you?
// Output :- Hey Sam.