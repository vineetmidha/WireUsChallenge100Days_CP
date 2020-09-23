'''
5.	Give a string, remove its duplicate consecutive characters. 
Example: "hello"
Output: "hel*o"
'''

#include <iostream>
using namespace std;

string solve(string s){
    if (s.length()==1){
        return s;
    }
    
    string ans = solve(s.substr(1));

    if (ans[0] == s[0])
        ans = s[0] + string("*") + ans.substr(1);
    else
        ans = s[0] + ans;

    return ans;
}
int main() {
    string s = "Hello";
    
    cout<<"Result: "<<solve(s)<<endl;
    
    return 0;
}
