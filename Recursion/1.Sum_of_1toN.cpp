#include <iostream>
using namespace std;

// Parameterised Recursion
void f(int& sum, int n, int i){
    if(i>n) return;
    sum += i;
    f(sum,n,i+1);
}

// Functional Recursion

int func(int n, int i){
    if(i>n) return 0;
    
    return i + func(n,i+1);
}

int main() {
    int n;
    cin>>n;
    cout<<func(n,0);
	return 0;
}