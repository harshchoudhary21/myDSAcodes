#include <bits/stdc++.h>
using namespace std;
void sort_Array(vector<int> &arr, int n)
{
    int c0 = 0;
    int c1 = 0;
    int c2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            c0++;
        }
        else if (arr[i] == 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
    }
    for (int i = 0; i < c0; i++)
    {
        arr[i] = 0;
    }
    for (int i = c0; i < c0+c1; i++)
    {
        arr[i] = 1;
    }
    for (int i = c0+c1; i < n; i++)
    {
        arr[i] = 2;
    }
}
//DUTCH-FLAG ALGORITHM
//Everything between [0->low-1]will be zero
//Everything between [low->mid-1]will be one
//Everything between [high+1->n-1]will be two
void dutch_flag(vector<int>&arr,int n){

    int low = 0;
    int mid =0;
    int high =n-1;
    while(mid<=high){
        if(arr[mid]==0){
            int temp = arr[mid];
            arr[mid] =arr[low];
            arr[low] =temp;
              low++;
            mid++;
          
        }
        else if(arr[mid]==1){
            mid++;
        }
       else{
            int temp2 = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp2;
            high--;
        }
    }
}
int main()
{
    int n = 6;
    vector<int> arr = {0, 1, 2, 0, 1, 2};
    // sort_Array(arr, n);
    dutch_flag(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}