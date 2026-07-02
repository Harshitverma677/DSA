/*#include<bits/stdc++.h>
using namespace std;

int main(){
     
    pair<int ,int> p ={1,3};
    pair<int , pair<int ,int>> p1 ={5 , { 8 ,9 }};

    pair<int ,int> arr[]={{1,2},{3,5},{4,8}};

    //cout<<p.first<<" "<<p.second;
    //cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second;

    cout<<arr[1].first;
    return 0;
}*/

/* 
#vector

vector<int> v;
v.push_back(5);
v.emplace_back(6);    // this push faster than push_back

vector<pair<int,int>> v1;

v1.push_back({1,2});
v1.emplace_back(5,3);   // this function stores the value in pair itself

vector<int> v(5,100);   //here in array 100 will be store 5 times
vector<int> v(5);    // here 0 will be store 5 times or any other garbage value 

vector<int> v1(5,20);
vector<int> v2(v1);    // here v2 will store same element as v1 
*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(10);
    v.push_back(20);

    //vector<int>::iterator it = v.begin();  // v.end() pointing at last+1 element 
    //cout<<*(it);

    //v.erase(v.begin()+2);

    //v.erase(v.begin(),v.begin()+2); // it will erase the element from index 0 to index 2 but not the element on index 2 [0,2)

    //insert we use v.insert

    v.insert(v.begin(),100);

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){  // we can also right auto datatype before it
        cout<<*(it)<<" ";
    }

    

    return 0;
}*/


/*
#list function

list<int> ls;
ls.push_front();
ls.emplace_front()

all other fun of vector are same for list


#deque function

deque<int> dq;
it include same fun as vector and list

#stack 

stack<int> st;
st.push()
st.pop()
st.top()

#queue

queue<int> q;
q.push()
q.back()
q.front()
q.pop()


#priority Queue 

priority_queue<int> pq;

it will stores the element in descending order it means the maximum number will stay at the top

priority_queue<int , vector<int>, greater<int>> pq;

it will store the element in ascending order it means the minimum number will stay at the top 


#set 

set<int> st;

st.insert()   // insert in sorted sequence and stores only unique elements
st.find()     // it there is no element in set then it will return last element of set through iterator
st.erase()
st.count()

# multi set

multiset<int> ms;

same as set but in sorted order and can store repeated elements

#unordered set

same as set and multiset but stores element in unsorted manner


# map 

map<int,int> mp;
map<int,pair<int,int>> mp1;

map[1]=10;  {1,10}
map[{2,3}]=20   {(2,3),10}
map.insert({});
map.emplace({});

map stores key in sorted manner and unique

# multimap ,unorederedmap

# some algorithms 

int num = 7;
int cnt = __builtinpopcount();    // it will return the number of 1 while converting 7 into binary form 

long long num =15184224884;
int cnt = __builtinpopocountll();  for long long datatype

string s= "123";

while(next_permutation(s.begin(),s.end())){
cout<<s<<" ";                                   // it will print all the possible combination of string s
}
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr={1,2,3};
    vector<vector<int>> v;
    

    sort(arr.begin(),arr.end());
    v.push_back(arr);
    while(next_permutation(arr.begin(),arr.end())){
       v.push_back(arr);
    }
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}