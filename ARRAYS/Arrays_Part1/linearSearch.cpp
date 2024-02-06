#include<bits/stdc++.h>
using namespace std;
int linear_Search(int arr[],int n,int num){
    for(int i =0; i < n; i++){
        if(arr[i] == num){
            return i;
        }
    }
    return -1;
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
    cout<<endl;
    int index = linear_Search(arr,n,5);
    cout<<index<<endl;
}