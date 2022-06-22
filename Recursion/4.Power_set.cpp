#include <bits/stdc++.h>
using namespace std;


void printSubsequences(vector<int> arr, vector<int> &temp /* The & is to maintain the same array and not create copies */, int ind){
    if(ind>=arr.size()){
        if(temp.size()==0) cout<<"Hello this is not blank, i'm null";
        else{
           for(int i=0;i<temp.size();i++){
           cout<<temp[i]<<" ";
        }
           cout<<endl;   
        }
        return;
    }
    
    temp.push_back(arr[ind]);
    printSubsequences(arr,temp,ind+1);
    temp.pop_back();
    printSubsequences(arr,temp,ind+1);
    
}

int main() {
    int n,g;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>g;
        arr.push_back(g);
    }
    vector<int> temp;
    printSubsequences(arr,temp,0);
	return 0;
}

// another way to solve the question

vector<vector<int>> helper(vector<int> &v, int ind){
    if(ind==v.size()) return {{}};
    
    vector<vector<int>> res = helper(v,ind+1);
    vector<vector<int>> ans;
    for(auto x:res){
        ans.push_back(x);
    }
    
    for(auto x:res){
        x.push_back(v[ind]);
        ans.push_back(x);
    }
    return ans;
}


vector<vector<int>> pwset(vector<int>v)
{
   return helper(v,0);
}