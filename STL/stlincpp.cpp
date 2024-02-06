#include<bits/stdc++.h>
using namespace std;
//Pairs
void explainPair(){
    pair<int,int>p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>>q= {1,{3,4}};
    cout<<q.first<<" "<<q.second.first<<" "<<q.second.second<<endl;
    pair<int,int>arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[1].second<<endl;
}
 //--------------------------------------------------//


//Vectors
//In C++ Vectors are same as arraylist in java 
void explainVectors(){
    vector<int>v;
    v.push_back(1);//add 1 to v
    v.emplace_back(1);//also add 1 to v but is more faster than as compared to emplace back
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    vector<int>vect(5,100);//it means declaring a vector initiallly with size 5 having 100 repeated 5 times
    vector<int>vecto(5);//declare vector with size 5
    vector<int>v1(5,20);
    vector<int>v2(v1);//copying values of v1 into v2

    //Accessing elelmnts in a vector
    //Way1: Directly write v[0],v[1]etc...
    //Way2: Using iterator
    vector<int>::iterator it = v.begin();//points at the adress of first element
    cout<<*(it)<<endl;//prints the value at that address
    //end
    vector<int>::iterator itt = v.end();//pointer point to the adress next to the last element
    //Way 3 using loop 
    for(vector<int>::iterator iit=v.begin(); iit!=v.end();iit++){
        cout<<*(iit)<<endl;

    }
    for(auto it = v.begin(); it!=v.end(); it++ ){
        cout<<*(it)<<endl;
    }
//for each loop
  for(auto it:v){
    cout<<it<<endl;
  }
// Erase: Use to delete elements in vector 
v.erase(v.begin(), v.begin()+2);//[start,en)


//Insert function
vector<int>s(2,100);//{100,100}
s.insert(v.begin()+1,2,10);//{100,10,10,100}//create two copies of 10
cout<<v.size();//print the size of veector

v.pop_back();//{10,20}->{10}
//Clear
v.clear();//deletes the entire vector  
}


//---------------------------------------------------------//

void explainList(){
    //list is ame as vector but the advantage of using list over vector is that you can insert at front too
    list<int>lis;
    lis.push_back(2);
    lis.push_front(5);


}

void explainDeque(){
    deque<int>dq;
    dq.push_back(3);
    dq.push_front(4);
    dq.pop_back();
    dq.pop_front();
}

void explainStack(){
    //Stack works on LIFO
    //all the operations are O(1) operations
    stack<int>st;
    st.push(1);
    st.push(2);
    cout<<st.top();
    cout<<st.size();
    st.pop();
    cout<<st.empty();//return true if stack is empty else returns false
}

void explainQueue(){
    //Works on FIFO principle
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    //{1,2,3}
    q.back()+=5;
    //{1,2,8}
    cout<<q.back();//returns 8
    cout<<q.front();//returns 1
    q.pop();//{2,9}
    cout<<q.size();
    cout<<q.empty();//returns true if q is empty

}

void explainPQ(){
    priority_queue<int>pq;//maximum heap
    pq.push(2);//{2}
    pq.push(5);//{5,2}
    pq.push(8);//{8,5,2}
    cout<<pq.top();//8

    //minimum heap
    priority_queue<int,vector<int>,greater<int>>pq;
     pq.push(2);//{2}
    pq.push(5);//{2,5}
    pq.push(8);//{2,5,8}
    cout<<pq.top();//2

    //push and pop happens in logn time
    //top-> O(1)

}

void explainSet(){
    //stores unique elements in sorted order
    set<int>st;
    st.insert(1);
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(5);

    auto it = st.find(3);//returns an iteartor pointing to 3
    auto it = st.find(6);//if elemnt is not present in the set then returns an iterator pointing at the end of the set
    st.erase(5);//delete element from the set takes log time
    auto it = st.find(5);
    st.erase(it);//takes constant time

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2);//delete[first,last)

}

 void explainMap(){
    //contains a key and a value associated with it 
    //the key is unique and are written in sorted order
    map<int,int>mpp;
    mpp[1] = 2;//means key is 1 and value is 2
    mpp.insert({2,4});
    //traversing the map
    for(auto it: mpp){
        cout<< it.first<<" "<<it.second<<endl;
    }
 }

 void explainExtra(){
    int a[5];
    vector<int>v;
    sort(a,a+6);
    sort(v.begin(),v.end());
    sort(a,a+6,greater<int>); //sort in reverse order










    

 }



int main(){
    explainPair();
    return 0;

}