#include <bits/stdc++.h>
using namespace std;
int largest_Element(int arr[], int n)
{
    int large = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    return large;
}
int second_LargestBetter(int arr[], int n)
{
    int largest = arr[0];
    int sLargest = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
        }
        if (arr[i] < largest && arr[i] > sLargest)
        {
            sLargest = arr[i];
        }
    }
    return sLargest;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int largest = largest_Element(arr, n);
    cout << "The largest element in the array is: " ;
    cout << largest;
    cout<<"\n";
    int second_Largest = second_LargestBetter(arr, n);
    cout << "The second largest element in the array is: " << endl;
    cout << second_Largest;
}