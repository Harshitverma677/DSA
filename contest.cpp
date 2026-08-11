/*#include<bits/stdc++.h>
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
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    string s= "dcab";
    char x='d',y='b';
    string z=s,t="";
    int cnt1=0,cnt2=0;

    for(int i=0;i<z.length();i++){
        if(z[i]==x)cnt1++;
        if(z[i]==y)cnt2++;
    }
   while (cnt2--) t.push_back(y);
    while (cnt1--) t.push_back(x);
    for(int i=0;i<z.length();i++){
        if(z[i]!=x && z[i]!=y) t.push_back(z[i]);
    }
    cout<<t;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=3;
    int arr[n]={3,5,1};
    int a=3,b=3;
    int i=0,j=1,cnt=0;
    while(i<n && j!=n){
        if(arr[i]>=a){
            if(arr[j]<a){
             while (j>i) {
              swap(arr[j],arr[j-1]);
              cnt++;
              j--;
            }
             i++;
             j=i+1;
            }
            else j++;
        }
        else i++,j++;
    }
    j=i+1;
    while(i<n && j!=n){
       if(arr[i]>b){
        if(arr[j]>=a && arr[j]<=b){
             while (j>i) {
              swap(arr[j],arr[j-1]);
              cnt++;
              j--;
            }
             i++;
             j=i+1;
            }
        else j++;
       }
       else i++,j++;
    }
    cout<<cnt;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[n]={100,4,200,1,3,2};
    int start=1,length=0;

    unordered_set<int,int> st(arr,arr+n);

    int i=0;
    
    while(i<n){
        int cnt=arr[i];
        start=1;
        if(st.find(cnt-1)!=st.end()){
           i++;
            continue;
        }
        while(st.find(cnt+1)!=st.end()){
            cnt++;
            start++;
        }
        length = max(length, start);
        i++;
    }
    cout<<length;
    
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=3,k=2;
    int num=n-k+1;
    int sum=0,cnt=0;
    long long mul=1;
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            for(int k=1;k<=num;k++){
                sum=i+j+k;
                mul=1LL*i*j*k;
                if(sum==n && mul%2==0) cnt++;
            }
            sum=0,mul=1;
        }
    }
    cout<<cnt;

}*/

/*#include<bits/stdc++.h>
using namespace std;

int num(int n,int s){
    if(s>9*n) return -1;
    long long num=0;
    int rem=s;
    for(int i=0;i<n;i++){
        int digit=min(9,rem);
        num=num*10+rem;
        rem-=digit;
    }
    return num;
}

int main(){
    int n=2,s=9;

    cout<<num(n,s);
}*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="bacdc",t="abc";

    vector<int> ans;
    int i=0,j=0;
    int cnt=0;
    while(j<t.length()){
        bool flag=0;
        while(i<=s.length()-t.length()){
            if(s[i]==t[j]){
                i++,j++;
                break;
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}



