#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>sum3_Better(vector<int>&arr){
    set<vector<int>>st;
    for(int i = 0; i < arr.size(); i++){
        set<int>hash;
        for(int j = i+1;j< arr.size();j++){
            int third = -(arr[i]+arr[j]);
            if(hash.find(third)!=hash.end()){
                vector<int>temp = {arr[i],arr[j],third};
                st.insert(temp);

            }
            hash.insert(arr[j]);

        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;

}
vector<vector<int>>sum3_Better(vector<int>&nums){
    sort(nums.begin(),nums.end());
      vector<vector<int>>ans;
  
    for(int i = 0;i < nums.size(); i++ ){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        int j = i+1;
        int k = nums.size()-1;
        while(j<k){
            int sum = nums[i]+nums[j]+nums[k];
            if(sum<0){
                j++;

            }else if (sum>0){
                k--;

            }else{
                vector<int>temp = {nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k&&nums[j]==nums[j-1]){
                    j++;
                }
                while(j<k&&nums[k]==nums[k+1]){
                    k--;
                }

            }
        }

    }
    return ans;
    

}