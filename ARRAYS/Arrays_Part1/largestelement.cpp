#include<bits/stdc++.h>
using namespace std;
int largest_Element(int arr[],int n){
    int large = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > large){
            large = arr[i];
        }
    }
    return large;
}
int main(){
    int n;
 cout<< "Enter the size of the array: ";
 cin>>n;
 int arr[n];
 cout<<"Enter the elements in the array: ";
 for(int i = 0; i < n; i++){
    cin>>arr[i];
 }
 int largest = largest_Element(arr,n);
 cout<<"The largest element in the array is: "<<endl;
 cout<<largest;
}