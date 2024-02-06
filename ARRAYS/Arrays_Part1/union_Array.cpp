#include<bits/stdc++.h>
using namespace std;

vector<int> union_brute(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for(int i = 0; i < n1; i++) {
        st.insert(a[i]);
    }
    for(int i = 0; i < n2; i++) {
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it: st) {
        temp.push_back(it);
    }
    return temp;
}

vector<int> union_optimal(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArray;
    while(i < n1 && j < n2) {
        if(a[i] <= b[j]) {
            if(unionArray.size() == 0 || unionArray.back() != a[i]) {
                unionArray.push_back(a[i]);
            }
            i++;
        } else {
            if(unionArray.size() == 0 || unionArray.back() != b[j]) {
                unionArray.push_back(b[j]);
            }
            j++;
        }
    }
    while(j < n2) {
        if(unionArray.size() == 0 || unionArray.back() != b[j]) {
            unionArray.push_back(b[j]);
        }
        j++;
    }
    while(i < n1) {
        if(unionArray.size() == 0 || unionArray.back() != a[i]) {
            unionArray.push_back(a[i]);
        }
        i++;
    }
    return unionArray;
}

int main() {
    int n;
    cout << "Enter the size of the first array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << endl;

    int m;
    cout << "Enter the size of the second array: ";
    cin >> m;

    vector<int> brr(m);
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++) {
        cin >> brr[i];
    }
    cout << endl;

    vector<int> result = union_brute(arr, brr);
    vector<int> unionArrays = union_optimal(arr, brr);

    cout << "Union of the two arrays (brute-force): ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    cout << "Union of the two arrays (optimal): ";
    for (int i = 0; i < unionArrays.size(); i++) {
        cout << unionArrays[i] << " ";
    }
    cout << endl;

    return 0;
}