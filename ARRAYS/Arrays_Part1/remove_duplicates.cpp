#include<bits/stdc++.h>
using namespace std;
void removeDuplicate_brute(int arr[],int n){
    //Space Complexity:O(n)
    //Time Complexity:O(nlogn)
    set<int>st;
    for(int i = 0; i < n; i++){
        st.insert(arr[i]);
    }
    vector<int>unique;
    for(auto it:st){
        unique.push_back(it);
    }
    int index = 0;
    for(auto iit: st){
        arr[index] = iit;
        index++;
    }
 
  for(auto element: unique){
    cout<< element<<" ";
  }
      cout<<endl;
    cout<<index<<endl;

}
int removeDuplicate_Optimal(int arr[], int n){
    int i = 0;
    for(int j =1; j < n; j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
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
    removeDuplicate_brute(arr,n);
    int delements = removeDuplicate_Optimal(arr,n);
    cout<<"Duplicate elements using optimal approach:"<<delements<<endl;
    
}