#include<bits/stdc++.h>
using namespace std;
int kadane(vector<int>&arr,int n){
   int sum =0,maxsum=INT_MIN;
   for(int i = 0; i < n; i++){
    sum = sum+arr[i];
    if(sum>maxsum){
        maxsum = sum;
    }
    if(sum<0){
        sum = 0;
    }
   }
   return maxsum;
}