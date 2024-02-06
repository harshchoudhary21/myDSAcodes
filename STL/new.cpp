#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(5,3);
    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<endl;
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout <<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int>::iterator i2=v.begin();
     
    v.insert(v.begin()+2,17);
    cout<<*(i2)<<endl;
    i2++;
   
    cout<<endl;
    for(auto it:v){
        cout<<it<<" ";

    }
    cout<<endl;
    
}