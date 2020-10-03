/*
2.	Give a string containing a variable name in camel case, decipher the same and write each word on a different line.

String s = IAmACompetitiveProgrammer
I
Am
A
Competitive
Programmer
*/

#include <iostream>
#include <cctype>
using namespace std;

void solve(string s){
    cout<<s.at(0);
    for (int i=1; i<s.length(); i++){
        if (isupper(s.at(i)))
            cout<<endl;
        cout<<s.at(i);
    }
}
int main() {
    string s = "IAmACompetitiveProgrammer";
    solve(s);
}

/*
Output:

I
Am
A
Competitive
Programmer
*/
