#include<bits/stdc++.h>
using namespace std;
bool is_Sorted(int arr[],int n){
    for(int i = 1; i < n; i++){
        if(arr[i]<arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elemets of the array: ";
    for(int i =0; i < n; i++){
        cin>>arr[i];
    }
    cout<<is_Sorted(arr,n)<<endl;
}