'''
Take as input S, a string. WAF that does basic string compression. Print the value returned. 
Example:
Input: "aaabbccds"
Output: "a3b2c2ds"
'''

#include <iostream>
using namespace std;

string compress(string s) {
    string compressed("");
    
    for (int i=1; i<s.length(); i++){
        int c=1;
        char x = s.at(i-1);
        while (x==s.at(i)){
            i++;
            c++;
        }
        compressed+=x;
        if (c!=1)
            compressed+=to_string(c);
    }
    
    // To handle the last letter, if it occurs only once
    
    if (s.at(s.length()-1)!=s.at(s.length()-2))
        compressed+=string(s,s.length()-1);
        
    return compressed;
}

int main() {
    string s;
    cin>>s;
    cout<<compress(s);
}

