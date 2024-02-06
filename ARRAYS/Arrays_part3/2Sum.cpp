#include<bits/stdc++.h>
using namespace std;
   vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int>mpp;
       int n = nums.size();
       for(int i = 0; i<n;i++){
           int num = nums[i];
           int extra = target-nums[i];
           if(mpp.find(extra)!=mpp.end()){
               return {mpp[extra],i};
           }
           mpp[num]=i;
       }
       return {-1,-1};
    }