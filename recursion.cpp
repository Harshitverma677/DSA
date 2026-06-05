/*#include<iostream>
using namespace std;

int main(){
    int a[10]={2,4,5,6,9,8};

    for(int x:a){          // here we use for each loop
        cout<<x<<" ";
    }
    return 0;
}*/

/*#include<iostream>
using namespace std;

struct rectangle{
    int l;                              //structure
    int b;
};

int main(){
    struct rectangle r={10,5};

    cout<<"area of rectangle r is "<<r.l*r.b;

    return 0;
}*/

/*#include<iostream>
using namespace std;

struct card{
    int face;
    int shape;
    int colour;
};

int main(){
    struct card c[2]={{0,1,1},{11,3,1}};
    cout<<c[0].face<<c[0].shape<<c[0].colour;

    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int a[5]={0,1,2,3,4};
    int *p;
    p=a;     // here we don't need to write & because already a have the address of elements in it

    for(int i=0;i<5;i++)
    cout<<p[i]<<endl;

    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){
    int *p;
    p=new int[5];    // creating a array in heap

    cout<<"enter elements in that array ";
    for(int i=0;i<5;i++)
    cin>>p[i];

    for(int j=0;j<5;j++)
    cout<<p[j];

    delete [] p;   // after using the code we must delete the memory of heap
    return 0;
}*/

/*#include<iostream>
using namespace std;

struct rectangle{
    int l;                              //structure
    int b;
};

int main(){
    struct rectangle r={10,5};
    struct rectangle *p=&r;

    //(*p).l-=20;
    p->l=20;

    cout<<r.l;


    return 0;
}*/

/*#include<iostream>
using namespace std;

struct rectangle{
    int l;                              //structure
    int b;
};

int main(){
    struct rectangle *p;
    p=new rectangle;     // dyanamically created in heap

    p->l=20;
    p->b=5;

    cout<<"Length: "<<p->l<<" Breadth: "<<p->b;


    return 0;
}*/


/*#include<iostream>
using namespace std;

struct rectangle{
    int l;                              //structure
    int b;
};
int area(struct rectangle r1){

    r1.l++;
    return r1.l*r1.b;
}

int main(){
    struct rectangle r={2,8};

    cout<<area(r);

    return 0;
}*/

/*#include<iostream>
using namespace std;

template<class T>

class arithmetic{
private:
T a;
T b;

public:

    arithmetic(T a,T b);
    T add();
};

template<class T>
arithmetic<T>::arithmetic(T a,T b){
    this->a=a;
    this->b=b;
}

template<class T>
 T arithmetic<T>::add(){
    T c;
    c=a+b;
    return c;
}

int main() {

    arithmetic <int> ar(10,5);
    cout<<ar.add();
    
    return 0;
}
*/


/*#include<iostream>
using namespace std;

int fun(int n){

    if(n>0){
        cout<<n;
        fun(n-1);          //Tail recursion
    }
}
int main(){
  fun(5);

  return 0;
}*/

/*#include<iostream>
using namespace std;

int fun(int n){

    if(n>0){
         fun(n-1); 
         cout<<n;                      //Head recursion
    }
}
int main(){
  fun(5);

  return 0;
}
*/

/*#include<iostream>
using namespace std;

int fun(int n){

    if(n>0){
        cout<<n;
        fun(n-1); 
        fun(n-1);       //Tree recursion    time-> O(2^n) and space ->O(n+1)                   
    }
}
int main(){
  fun(3);

  return 0;
}*/

/*#include<iostream>
using namespace std;


void funA(int n);
void funB(int n);

void funA(int n){
if(n>0){
    cout<<n;
    funB(n-1);
}
}
void funB(int n){                    // indirect recursion
if(n>1){
    cout<<n;
    funA(n/2);
}
}

int main(){
    funA(20);
    return 0;
}*/

/*#include<iostream>
using namespace std;

int fun(int n){
    if(n>100)
    return n-10;
    else
    return fun(fun(n+11));
}
int main(){
    cout<<fun(95)<<" ";

    return 0;
}*/

/*#include<iostream>
using namespace std;

int fact(int n){
    if(n==0)
    return 1;
    return fact(n-1)*n;

}
int main(){
    int r;
    r=fact(1);
    cout<<r;

    return 0;
}*/

/*#include<iostream>
using namespace std;

int pow(int m,int n){
    if(n==0)
    return 1;
    return pow(m,n-1)*m;

}
int main(){
  int r=pow(2,4);
  cout<<r;

    return 0;
}*/

/*#include<iostream>
using namespace std;

int pow(int m,int n){
    if(n==0)
    return 1;
    if(n%2==0)
    return pow(m*m,n/2);             // power function but take less stack space
    else
    return m*pow(m*m,(n-1)/2); 

}
int main(){
  int r=pow(2,4);
  cout<<r;

    return 0;
}*/

/*#include<iostream>
using namespace std;

double e(int x,int n){
    static double p=1,f=1;
    double r;
    if(n==0)
    return 1;
    else
    r=e(x,n-1);
    p=p*x;                              //Taylor's series
    f=f*n;
    return r+p/f;
}
int main(){
    cout<<e(1,10);
    return 0;
}*/

/*#include<iostream>
using namespace std;

double e(int x,int n){
static double sum=1;
if(n==0)
return sum;
sum=1+x*sum/n;
return e(x,n-1);

}                                            //Taylor's series using horner's rule
int main(){
    cout<<e(1,10);
    return 0;
}*/

/*#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
    return 1;
    return fact(n-1)*n;
}

double cos(int x,int n){
    static double p=1,f=1;
    double r;
    if(n==0)
    return 1;
    else{
    r=cos(x,n-1);
    p=p*x*x;
    f=fact(2*n);
    }
    if(n%2==0)                   // cosine series using recursion
    return r+p/f;
    else
    return r-p/f; 
}

int main(){
    cout<<cos(1,4);
    return 0;
}*/

/*#include<iostream>
using namespace std;

int fib[10];

int fun(int n){
if(n<=1){
    fib[n]=n;
    return n;
}
else{
    if(fib[n-2]==-1)
    fib[n-2]=fun(n-2);
    if(fib[n-1]==-1)
    fib[n-1]=fun(n-1);
}

return fib[n-2]+fib[n-1];
}

int main(){
    int n=5;
      for(int i=0;i<n;i++)
        fib[i]=-1;

cout<<fun(n);

return 0;
}*/

/*#include<iostream>
using namespace std;

int fact(int n){
    if(n==0)
    return 1;
    return fact(n-1)*n;
}
int C(int n,int r){
    int t1,t2,t3;

    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);                              //nCr recursive function by using fact function

    return t1/(t2*t3);
}
int main(){
    cout<<C(6,3);

    return 0;
}*/

/*#include<iostream>
using namespace std;

int C(int n,int r){
    if(r==0 || n==r)
    return 1;                                   // nCr independent recursive function (Pascal's triangle)
    return C(n-1,r-1)+C(n-1,r);
}
int main(){
    cout<<C(6,3);
    return 0;
}*/

/*#include<iostream>
using namespace std;

void TOH(int n,int a,int b,int c){
    if(n>0){
TOH(n-1,a,c,b);
cout<<a<<" to "<<c<<endl;  // tower of hanoi 
TOH(n-1,b,a,c);
    }
}
int main(){
    TOH(3,1,2,3);

    return 0;
}
*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){ 
  vector<int> v={0,1,2,3,4};
  auto left=v.begin();
  auto right=v.end()-1;
  int temp;
  while(left!=right){
    temp=*(left);
    *(left)=*(right);
    *(right)=temp;
    left=left+1;
    right=right-1;
  }
  for(vector<int>::iterator it=v.begin();it!=v.end();it++){
    cout<<*(it);
  }


    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

void fun(int l,int r,int a[]){
    if(l>=r)
    return;
    swap(a[l],a[r]);
    fun(l+1,r-1,a);
}


int main(){

    int a[]={0,1,2,3};
    fun(0,3,a);

    for(auto i:a)
    cout<<i<<" ";

    return 0;

}*/

//reversing an array using one pointer

/*#include<bits/stdc++.h>
using namespace std;

void fun(int i,int n,int a[]){
    if(i>=n/2) return;
    swap(a[i],a[n-i-1]);
    fun(i+1,n,a);
}
int main(){
    int n=4;
    int a[n]={1,2,3,4};
    fun(0,n,a);

    for(auto i:a)
    cout<<i<<" ";

    return 0;

}
*/

/*#include<bits/stdc++.h>
using namespace std;

bool fun(int i,int n,string s){
    if(i>=n/2) return true;
    if(s[i]!=s[n-i-1]) return false;
    return fun(i+1,n,s);
}
int main(){
    string s="BOOK";
    int n=s.length();
    cout<<fun(0,n,s);

    return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1)
    return n;

    return fib(n-1)+fib(n-2);  

}

int main(){
    int n=3;
    cout<<fib(n)<<" ";

    return 0;
}