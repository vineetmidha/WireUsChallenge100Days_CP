/*
1.	Given a 2D array, traverse it column-wise (wave style) as under:

Example:

11	12	13	14
21	22	23	24
31	32	33	34
41	42	43	44

Output: 11,21,31,41,42,32,22,12,13,23,33,43,44,34,24,14
*/

#include <iostream>
using namespace std;

void matrixTraverse(int a[][4], int n){
    int DIRECTION=1;  // 1 for down and 0 for up

    for (int i=0; i<n; i++){
        if (DIRECTION==1)
            for (int j=0; j<n; j++){
                    cout<<a[j][i]<<" ";
            }
        else {
            for (int j=n-1; j>=0; j--){
                    cout<<a[j][i]<<" ";
            }
        }
        DIRECTION = !DIRECTION;
    }
}
void display(int a[][4], int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main() {
    int a[][4]={{11,12,13,14},{21,22,23,24},{31,32,33,34},{41,42,43,44}};
    display(a,4);
    matrixTraverse(a,4);
}

/*
Output:

11 12 13 14 
21 22 23 24 
31 32 33 34 
41 42 43 44 

11 21 31 41 42 32 22 12 13 23 33 43 44 34 24 14 
*/
