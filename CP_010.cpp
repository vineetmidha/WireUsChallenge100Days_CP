// Problem statement in description

#include <iostream>
#include <map>

using namespace std;

void leftRotation(int a[], int n, int rotations){
    rotations %= n;
    
    while (rotations-- > 0) {
        int t = a[0];
        
        for (int i=0; i<n-1; i++){
            a[i] = a[i+1];
        }
        
        a[n-1] = t;
    }
}

int main() {
    int n, rotations;
    
    cin >> n;
    cin >> rotations;
    
    int a[n];
    
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    leftRotation(a, n, rotations);
    
    for (int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    
	return 0;
}

/*
Input:
5 4
1 2 3 4 5
Output:
5 1 2 3 4

Input:
5 6
1 2 3 4 5
Output:
2 3 4 5 1

Input:
5 60
1 2 3 4 5
Output:
1 2 3 4 5

*/
