// EUCLIDEAN ALGORITHM ( to fing gcd between two numbers)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;                                    // it all means that gcd(a,b) if a>b then gcd(a%b,b)-> it happens till gcd(0,any number) and that number will be gcd
    cin>>a>>b;

    while(a>0 && b>0){   
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) cout<<b<<" is a gcd";
    else cout<<a<<" is a gcd";

    return 0;
}