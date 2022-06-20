#include <bits/stdc++.h>
using namespace std;

// .... Normal Arrays are always passed by reference ..... 
void reverse1(int i,vector<int> &arr){
    int n = arr.size();
    if(i>n/2) return;
    
    swap(arr[i],arr[n-i-1]);
    reverse1(i+1,arr);
}


void print(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n,g;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        cin>>g;
        a.push_back(g);
    }
    reverse1(0,a);
    print(a);
	return 0;
}