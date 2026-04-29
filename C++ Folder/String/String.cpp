// String :-
/*
String is the collection of characters.
Every characters of string are stored in index. And the last index will be 'length-1'.
And index always starts from '0'.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    cout << s << endl;;
    
    // Assigning value in 's' usinf index :-

    s[0] = 't';

    cout << "After assigning :"<< s <<endl;

    int len = s.size(); // size() is a function which is used to get the size of the string. length() is also a function which is used for similar work.
    cout << " Size of s: " << len << endl;
 
    s[len -1] = 'r'; // Assigning value to last string of 's' by 'len-1' as we know it starts from '0'.
    cout << "After assigning last character in s :" << s << endl;

    return 0;
}