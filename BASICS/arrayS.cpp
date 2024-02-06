#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array: "<<endl;
    cin>>n;
    int arr[n];
    
    cout<<"Enter the elements of array: "<<endl;
    for(int i =0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Elements of array are: "<<endl;
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}