// Problem statement in description

#include <iostream>
#include <map>

using namespace std;

void reverse(int a[], int n){
    for (int i=0; i<n/2; i++){
        int t = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = t;
    }
}

int main() {
    int n;
    
    cin >> n;
    
    int a[n];
    
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    reverse(a, n);
    
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
	
	return 0;
}

/*

Input: 
4
1 2 3 4 5
Output:
5 4 3 2 1

*/
