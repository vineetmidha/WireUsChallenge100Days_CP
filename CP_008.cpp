// Problem statement in description

#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    
    cin >> n;
    
    map <string, int> smap;
    
    while (n-- > 0){
        string t; 
        cin >> t;
        if (smap.find(t) == smap.end())
            smap[t] = 1;
        else
            smap[t] = smap.at(t)+1;
    }
    
    
    int q;
    
    cin >> q;
    
    while (q-- > 0) {
        string t;
        cin >> t;
        if (smap.find(t) == smap.end())
            cout << 0 << endl;
        else
            cout << smap.at(t) << endl;
        
    }
    
	return 0;
}

/*
Input:
4
aba
baba
aba
xzxb
3
aba
xzxb
ab

Output:
2
1
0
*/
