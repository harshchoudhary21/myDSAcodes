#include<bits/stdc++.h>
using namespace std;
//write a program that takes an input of age
//and prints whether you are adult or not
int main(){
    int age;
    cout<<"Enter Age of the person: "<<endl;
    cin>>age;
    if(age>=18){
        cout<<"The person with the age: "<<age<<" is adult"<<endl;
    }else{
        cout<<"The person with the age: "<<age<<" is not adult"<<endl;
    }
    return 0;
}