#include<bits/stdc++.h>
using namespace std;
int square_root(int n){
    int low =1;
    int high= n;
    int ans = 1;
    while(high<=low){
        int mid = (low+high)/2;
        if(mid*mid<=n){
            ans = mid;
            low = mid+1;
        }else{
            high = mid -1;
        }
    }
    return ans;

}