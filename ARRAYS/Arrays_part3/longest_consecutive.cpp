#include <bits/stdc++.h>
using namespace std;

bool linearSearch(const vector<int>& arr, int num) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == num) {
            return true;
        }
    }
    return false;
}

int cons_arraybrute(const vector<int>& arr) {
    int longest = 1;

    for (int i = 0; i < arr.size(); i++) {
        int x = arr[i];
        int cnt = 1;

        while (linearSearch(arr, x + 1)) {
            x++;
            cnt++;
        }

        longest = max(longest, cnt);
    }

    return longest;
}
int longest_better(vector<int>&arr){
    sort(arr.begin(),arr.end());
    int longest=1;
    int cnt = 0;
    int last_smallest = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i]-1==last_smallest){
            cnt++;
            last_smallest = arr[i];
        }else if(arr[i]!=last_smallest){
            cnt =1;
            last_smallest = arr[i];
        }
        longest = max(longest,cnt);
    }
    return longest;
}
int longest_optimal(vector<int>&arr){
    
}

int main() {
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2};

    int longest = cons_arraybrute(arr);
    int longest2 = longest_better(arr);
    cout<<longest2<<endl;
    cout << longest << endl;

    return 0;
}