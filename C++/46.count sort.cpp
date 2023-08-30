#include<iostream>
using namespace std;
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<int> sort(int n, vector<int> &arr)
{
    int k = arr[0];
    for(int i = 0; i  <n; i++){
        k = max(k , arr[i]);
    }
    vector<int>count(20);
    for(int i = 0; i < n; i++){
        count[arr[i]]++;
    }
    
    for(int i = 1; i <=k; i++){
        count[i] += count[i-1];
    }
    vector<int> ans(n);
    for(int i = n-1; i >= 0; i--){
        ans[--count[arr[i]]] = arr[i];
    }
    return ans;

}
int main(){
	int n = 9;
	vector<int> arr = {1,3,2,3,4,1,6,4,3};
	vector<int> ans = sort(n , arr);
	for(auto x : ans){
		cout<<x<<" ";
	}
    return 0;
}
