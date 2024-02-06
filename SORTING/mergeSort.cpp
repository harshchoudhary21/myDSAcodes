#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid,int high){
    vector<int>temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<arr[right]){
            temp.push_back(arr[left]);
            left++;

        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
     while(right<=high+1){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low; i <= high;i++){
        arr[i] = temp[i-low];
    }

}

void merge_Sort(int arr[],int low, int high){
    if(low>=high){
        return;
    }
    int mid = low+(high-low)/2;
    merge_Sort(arr,low,mid);
    merge_Sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void mS(int arr[],int n){
    merge_Sort(arr,0,n-1);
}


int main(){
    int n;
 cout<<"Enter the size of Array: ";
 cin>>n;
 int arr[n];
 cout<<"Enter the elements of the array: "<<endl;
 for(int i =0; i < n ; i++){
    cin>>arr[i];
 }
 cout<<"Array before sorting: ";
 for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
 }
 mS(arr,n);

 cout<<"Array after sorting: ";
 for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
 }



}