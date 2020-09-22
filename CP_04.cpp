'''
4.	Given a string, WAP to insert between each of its characters the difference between their ASCII codes and print the ans. 
Example: 
s = "acb"
Output: a2c-1b
Explanation:
The ASCII code of a=97 and c=99. The difference is 2. 
The ASCII code of c=99 and b=98. The difference is -1.
'''

#include <iostream>
using namespace std;

int main() {
    string s = "acb";
    
    string ns = s.substr(0,1);
    for (int i=1; i<s.length(); i++){
        int diff = int(s[i]) - int(s[i-1]);
        ns += to_string(diff);
        ns += s.at(i);
    }
    
    cout<<ns;
    return 0;
}
