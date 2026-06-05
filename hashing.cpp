/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5]={0,5,2,0,5};

    int hash[10]={0};
    for(int i=0;i<5;i++){
        hash[arr[i]]++;
    }
    int q;
    cout<<"enter element u want to find frequency ";
    cin>>q;
    cout<<hash[q];

    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="abcabdfab";

    int hash[26]={0};                     //we can also use 256 when to find number of any char
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;                   // because by using ASCII values we can find the index in hash which convert the character index to integer index as an array can not contain char index
    }
    char q;
    cout<<"enter q ";
    cin>>q;            
    cout<<hash[q-'a'];

    return 0;

}*/

#include<bits/stdc++.h>
using namespace std;

/*int main(){
    int arr[5]={1,2,2,1,3};
    map<int,int> mp;                // we can also unordered_map to get the best time complexity
    for(int i=0;i<5;i++){
        mp[arr[i]]++;          // it stores in sorted order
    }
    int q;
    cout<<"enter q ";    
    cin>>q;
    cout<<mp[q];

    for(auto it: mp){
        cout<<it.first<<"->"<<it.second<<endl;      //stores in sorted order
    }
    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="abcabcba";

    map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    char q;
    cout<<"enter q ";
    cin>>q;
    cout<<mp[q]<<endl;

    for(auto it:mp)
    cout<<it.first<<"->"<<it.second<<endl;

    return 0;

}