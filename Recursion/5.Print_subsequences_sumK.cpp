#include <bits/stdc++.h>
using namespace std;

void printSubsequences(vector<int> arr, vector<int>&temp, int ind,int t,int sum){
    if(ind==arr.size()){
        
        if(t==sum){
           for(int i=0;i<temp.size();i++){
           cout<<temp[i]<<" ";
        }
           cout<<endl;   
        }
        return;
    }
    
    temp.push_back(arr[ind]);
    t += arr[ind];
    printSubsequences(arr,temp,ind+1,t,sum);
    t -= arr[ind];
    temp.pop_back();
    printSubsequences(arr,temp,ind+1,t,sum);
    
}

int main() {
    int n,g,sum;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>g;
        arr.push_back(g);
    }
    cin>>sum;
    vector<int> temp;
    printSubsequences(arr,temp,0,0,sum);
	return 0;
}