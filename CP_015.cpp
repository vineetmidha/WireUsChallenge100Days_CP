// See Problem Statement in Description

#include <iostream>
#include <cmath>

using namespace std;

long convert (string s){
    if (s.empty()){
        return 0;
    }
    
    long part_ans = convert(s.substr(1));
    
    return (s.at(0) - int('0')) * long(pow(10,s.length()-1)) + part_ans;
}

int main() {
    string s;
    cin>>s;
    
    cout<<convert(s);
    
    return 0;
}

/*
Input: 1234
Output: 1234
*/
