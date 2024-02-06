//leaders: EVerything on the right must be smaller
#include<bits/stdc++.h>
using namespace std;
vector<int>brute(vector<int>&arr,int n){
    vector<int>ans;
    bool leader;
    for(int i = 0; i < n; i++){
        leader =true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                leader = false;
                break;
            }
        }
        if(leader==true){
            ans.push_back(arr[i]);
        }
    }
    return ans;

}
vector<int>optimal(vector<int>&arr){
    int n =arr.size();
    vector<int>ans;
    int maxi = INT_MIN;
    for(int i = n-1; i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        maxi = max(maxi,arr[i]);
    }
    return ans;
}
int main(){
    int n =6;
    vector<int>arr = {10,22,12,3,0,6};
    // vector<int>ans = brute(arr,n);
    vector<int>ans = optimal(arr); 
    for(int i = 0; i < ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}