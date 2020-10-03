// Problem statement in description

// Stock span problem

#include <iostream>
#include <stack>
#include <vector> 

using namespace std;

vector<int> stock_span(vector<int> v){
    stack<int> s;
    vector<int> span;
    
    s.push(0);
    span.push_back(1);
    
    for (auto i = 1; i < v.size(); i++){
        while (!s.empty() && v.at(s.top()) <= v.at(i)){
            s.pop();
        }
        
        if (s.empty()){
            span.push_back(i+1);
        } else {
            span.push_back(i - s.top());
        }
        
        s.push(i);
    }
    
    return span;
}

int main() {
	int n; // no of days
	
	cin>>n;
	
	int price;
	
	vector<int> v;
	
	for (int i=0; i<n; i++){
	    cin>>price;
	    v.push_back(price);
	}
	
	vector<int> span = stock_span(v);
	
    for (auto i = 0; i < span.size(); ++i) 
        cout << span[i] << " ";
    
    cout << "END";
    
	return 0;
}

/*
Example-1:
5
30 35 40 38 35

Output: 
1 2 3 1 1 END

Example-2:
7
100 80 60 70 60 75 85

Output:
1 1 1 2 1 4 6 END
*/
