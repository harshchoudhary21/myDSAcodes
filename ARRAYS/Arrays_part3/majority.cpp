#include<bits/stdc++.h>
using namespace std;
int moore_Voting(vector<int>&arr,int n){
    int cnt = 0;
    int el;
    for(int i = 0 ; i < arr.size();i++){
        if(cnt == 0){
            cnt =1;
            el =arr[i];
        }else if(arr[i]==el){
            cnt++;
        }else{
            cnt--;
        }
    }
    int cnt1 =0;
    for(int i =0; i < arr.size(); i++){
        if(arr[i]==el){
            cnt1++;
        }
    }
    if(cnt1>(arr.size()/2)){
        return el;

    }
    return -1;

}