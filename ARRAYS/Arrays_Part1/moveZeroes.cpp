#include<bits/stdc++.h>
using namespace std;
//Brute approach is that make a temp array and then copy all the non 
//zero element in the temp and again copy back into original array 

//optimal
void move_Zero(int arr[],int n){
    if (n==0||n==1){
        return;
    }
    int j = -1;
    for(int i = 0; i <n; i++){
        if(arr[i]==0){
            j =i;
            break;
        }
    }
    if(j==-1){
        return;
    }else{
        for(int i = j+1; i < n; i++){
            if(arr[i]!=0){
                int temp =arr[i];
                arr[i] = arr[j];
                arr[j] =temp;
                j++;
            }
        }
    }
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
    move_Zero(arr,n);
    cout<<"Array After moving zeroes to the end: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
