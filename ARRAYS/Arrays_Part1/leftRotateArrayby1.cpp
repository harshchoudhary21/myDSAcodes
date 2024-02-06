#include<bits/stdc++.h>
using namespace std;
void rotate_arraybyK(int arr[],int n, int k){
    if(k==0||n==0){
        return;
    }
  k = k%n;
  if(k>n||k==0){
    return;
  }
  int temp[k];
  for(int i = 0; i < k; i++){
       temp[i] = arr[i];
  }
  for(int i = k; i<n;i++){
    arr[i-k]=arr[i];
  }
  for(int i = n-k; i < n; i++){
    arr[i] = temp[i-(n-k)];
  }
}
int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements :";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int k = 0; k < n; k++){
        cout<<arr[k]<<" ";
    
    }
    cout<<endl;
    int temp = arr[0];
    for(int j = 1; j< n; j++){
        arr[j-1] = arr[j];
    }
    arr[n-1] = temp;
    cout<<"Array after left rotation by 1 place: ";
    for(int l=0; l< n;l++){
        cout<<arr[l]<<" ";
    }
    cout<<endl;
    rotate_arraybyK(arr,n,3);
     for(int l=0; l< n;l++){
        cout<<arr[l]<<" ";
    }

    

}