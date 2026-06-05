/*#include<bits/stdc++.h>            // include all the libraries 
using namespace std;

int main(){
    int space =8;
    for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
        cout<<j;
    }
    for(int k=1;k<=space;k++){
        cout<<" ";
    }
    for(int j=i;j>=1;j--){
        cout<<j;
    }
    cout<<endl;
    space-=2;
  }
    return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;

int main(){
     
    pair<int ,int> p ={1,3};

    cout<<p.first<<" "<<p.second;
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> v;
    cin>>n;

    for(int i=1;i<=n;i++){
        if(n%i==0) v.push_back(i);
}
    for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }

    return 0;

}*/

/*#include<bits/stdc++.h>
using namespace std;
int main(){

}*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,gcd;
    cout<<"enter 2 number";
    cin>>n1>>n2;

    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0)
        gcd=i;
    }
    cout<<gcd;
    return 0;
}
