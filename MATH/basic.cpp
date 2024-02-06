#include<bits/stdc++.h>
using namespace std;
//counting number of digit in a number
int main(){
    int n = 5566;
    int digits = log10(n);
    cout<<digits+1<<endl;
    //reversing a number
    int ld = 0;
    int rev =0;
    while(n>0){
        ld = n%10;
        rev = rev*10+ld;
        n=n/10;
    }
    cout<<rev;
}