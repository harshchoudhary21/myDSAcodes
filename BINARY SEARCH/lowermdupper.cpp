#include<bits/stdc++.h>
using namespace std;
int lowerBound(vector<int>&arr,int target){
    int low = 0;
    int n = arr.size();
    int high = n-1;
    int ans =n;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]>=target){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}
int UpperBound(vector<int>&arr,int target){
    int low = 0;
    int n = arr.size();
    int high = n-1;
    int ans =n;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]>target){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}
