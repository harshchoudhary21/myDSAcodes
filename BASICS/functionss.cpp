#include<bits/stdc++.h>
using namespace std;
//functions are set of code whic perform something for you
//functions are used to modularise code
//function are used to increase readablity
//function are used to use same code multiple times
//void -> doesnt return anything
//return -> return something
//parameterised -> contains parameter
//non-parameterised -> doesnt contain any parameter

void printName(){
    cout<<"Hey Harsh!!"<<endl;
}
int returnAge(int age){
  
    return age;
}
int twoSum(int num1,int num2){
    int sum = num1+num2;
    return sum;
}
int main(){
       printName();
       int age = returnAge(20);
       cout<<age<<endl;
       int sum = twoSum(10,12);
       cout<<sum<<endl;

    return 0;
}