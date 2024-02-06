#include<bits/stdc++.h>
using namespace std;
void func(int i,int n){
    if(i > n){
        return;
    }
    cout<<"Harsh"<<endl;
    func(i+1,n);
}
int main(){
    int n = 5;
    func(1,n);
}