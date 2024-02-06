#include<bits/stdc++.h>
using namespace std;
int find_missing(int arr[],int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum=sum+arr[i];
    }
    int Osum = n*(n+1)/2;
    return Osum-sum;
}
int find_missingOptimal(int arr[],int n){
    int xor1=0;
    for(int i = 1 ; i <n;i++){
        xor1 = xor1^i+1;
    }
    int xor2 = 0;
    for(int i = 0; i < n; i++){
        xor2=xor2^arr[i];
    }
    return xor1^xor2;
}