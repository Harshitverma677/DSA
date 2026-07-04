/*#include<iostream>
using namespace std;

int main(){
    int *p=new int[5];
    int *q=new int[10];

    p[0]=3;p[1]=5;p[2]=7;p[3]=9;p[4]=11;

    for(int j=0;j<5;j++)
     q[j]=p[j];

     p=NULL;
     p=q;
     q=NULL;

     p[5]=10;              //Here we can change the size of an array dynamically using other pointer by copying in an array of bigger size

    for(int k=0;k<6;k++)
      cout<<p[k]<<endl;


    return 0;
}*/

//TO CREATE A 2D MATRICES THERE ARE 3 METHODS


  // int A[2][2]={{1,3},{2,2}};      -->1st

  /*int *A[2];   //This will create a array of pointers in stack
  A[0]=new int[2];
  A[1]=new int[2];    // these will point to columns making 2x2 matrices  -->2nd  
  */

  /*int **A;
  A=new int*[2];      // This method used double pointer   -->3rd
  A[0]=new int[2];
  A[1]=new int[2];
  */


  /*#include<iostream>
  using namespace std;

  struct array{
    int *A;
    int length;
    int size;
  };

  void display(struct array ar){
    for(int i=0;i<ar.length;i++)
    cout<<ar.A[i];
  }

  int main(){
    array arr;                                     //here we dynamically store create an array in heap with any size
    int n;
    cout<<"enter size of an array: ";
    cin>>arr.size;

    arr.A=new int[arr.size];
    arr.length=0;

    cout<<"enter how many number you have to store :";
    cin>>n;
    arr.length=n;

    cout<<"enter elements :";
    for(int i=0;i<n;i++)
      cin>>arr.A[i];

      display(arr);                        // Here display operation is used

      return 0;
    
  }*/

  /*#include<iostream>
  using namespace std;

  void display(int a[],int length){
    for(int i=0;i<length;i++)
    cout<<a[i];
  }
  void add(int x,int length,int a[]){
    a[length]=x;
    length++;
    display(a,length);
  }


  int main(){
    int size,length,no,x;
    cout<<"enter size";
    cin>>size;

    int a[size];
    cout<<"enter length";
    cin>>length;

    cout<<"enter elements";
    for(int i=0;i<length;i++)
      cin>>a[i];

      display(a,length);

      cout<<endl<<"enter 1 if u want to add element or 0 if not";
      cin>>no;

      if(no==1){
        cout<<"enter that number";
        cin>>x;
        add(x,length,a);
      }
      return 0;
  }
*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int arr[9]={0,1,2,3,3,4,4,5,5};
  int largest=arr[0]; 
  int slargest=-1;                         // IF THE AARAY CONTAIN NEGATIVE NUMBER THAN DECLARE THIS AS slargest=INT_MIN

  for(int i=0;i<9;i++){
    if(arr[i]>largest) largest=arr[i];                         // we can also find the largest element and second largest element by using sorting in which the last element from sorted array will return  
  }                                                    
  for(int i=0;i<9;i++){
    if(arr[i]>slargest && arr[i]!=largest) slargest=arr[i];
  }
  cout<<slargest;

  return 0;  
}*/

//ANOTHER OPTIMAL APPROACH 

/*#include<bits/stdc++.h>
using namespace std;

void finds(int arr[],int smallest,int ssmallest){
  for(int i=0;i<9;i++){
    if(arr[i]<smallest){
      ssmallest=smallest;
      smallest=arr[i];
    }
    else if(arr[i]>smallest && arr[i]<ssmallest) ssmallest=arr[i];
  }
  cout<<smallest<<" "<<ssmallest;
}

void findl(int arr[],int largest,int slargest){
   for(int i=0;i<9;i++){
    if(arr[i]>largest){
      slargest=largest;
      largest=arr[i];
    }
  }
  cout<<largest<<" "<<slargest;
}
int main(){
  int arr[9]={1,2,3,3,4,4,5,5,6};

  int largest=arr[0];
  int slargest=-1,ssmallest=INT_MAX;

  //findl(arr,largest,slargest);
  finds(arr,largest,ssmallest);
  
  return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=6;
  int arr[6]={0,1,2,4,3,3};           // array is sorted or not

  int count=0;
  for(int i=0;i<n-1;i++){
    if(arr[i]<=arr[i+1]) count++;
    else break;
  }
  if(count==n-1) cout<<"sorted";
  else cout<<"not sorted";

  return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=7;
  int arr[n]={1,1,2,2,3,3,4};
  int index=0;


  set<int> st;
  for(int i=0;i<n;i++) st.insert(arr[i]);           // remove duplicates from sorted array TC-> N + NlogN

  for(auto it: st){
    arr[index]=it;
    index++;
  }
cout<<index;
  return 0;
}
*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=7;
  int arr[n]={1,1,2,2,3,3,4};
  int i=0;
  for(int j=1;j<n;j++){
    if(arr[j]!=arr[i]){
     arr[i+1]=arr[j];
     i++;
    }
  }
  cout<<i+1;   // size of array after removal of duplicate elements  TC-> O(n) SC->O(1)

  return 0;
}
*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
   int n=7;
  int arr[n]={1,1,2,2,3,3,4};
  int val=3;
  int i=0;
  for(int j=0;j<n;j++){
    if(arr[j]!=val){
      arr[i]=arr[j];               //remove element 
      i++;
    }
  }
  cout<<i;
  return 0;
}
*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=7;
  int arr[n]={1,1,2,2,3,3,4};

  int temp=arr[0];

  for(int i=1;i<=n;i++){
    if(i<n) arr[i-1]=arr[i];
    else arr[i-1]=temp;                              // left rotation
  }
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";

  return 0;
}*/

// BRUTE FORCE TO left rotate array by d places

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=7;
  int arr[n]={1,1,2,2,3,3,4};
  int d=11;
  vector<int> temp;
  if(d>n) d=d%n;

  for(int i=0;i<d;i++) temp.push_back(arr[i]);          // it will store the elements in temp array 
  for(int i=d;i<n;i++) arr[i-d]=arr[i];
  for(int i=n-d;i<n;i++) arr[i]=temp[i-(n-d)];
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";

  return 0;

}*/


/*#include<bits/stdc++.h>                   // right rotate array by k places
using namespace std;

int main(){
  int n=7;
  int arr[n]={1,1,2,2,3,3,4};
  int k=3;
  if(k>n) k=k%n;
  vector<int> temp;

       for(int i=n-k;i<n;i++) temp.push_back(arr[i]);
       for(int i=n-1;i>=k;i--) arr[i]=arr[i-k];
       for(int i=0;i<k;i++) arr[i]=temp[i];

       for(int i=0;i<n;i++) cout<<arr[i]<<" ";

  return 0;

} */

// optimal solution for rotation which take O(1) space complexity 

/*#include<bits/stdc++.h>                   // right rotate array by k places
using namespace std;

int main(){
  int n=7;
  int arr[n]={1,1,2,2,3,3,4};
  int k=3;
  if(k>n) k=k%n;

  reverse(arr,arr+k);
  reverse(arr+k,arr+n);    // left rotation
  reverse(arr,arr+n);

  reverse(arr,arr+(n-k));
  reverse(arr+(n-k),arr+n);  // right rotation
  reverse(arr,arr+n); 


  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
  return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=8;
  int arr[n]={1,0,2,0,0,5,4,6};            // moving zero to end
  vector<int> temp;

  for(int i=0;i<n;i++){
    if(arr[i]!=0) temp.push_back(arr[i]);
    }
    for(int i=0;i<n;i++) arr[i]=0;
   for(int i=0;i<temp.size();i++) arr[i]=temp[i];

   for(int i=0;i<n;i++) cout<<arr[i]<<" ";

   return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=8;
  int arr[n]={1,0,2,0,0,5,4,6};               // optimal soln of mobing zero

  int j=-1;
  for(int i=0;i<n;i++){
    if(arr[i]==0){ 
      j=i;
      break;
    }
  }
  for(int i=j+1;i<n;i++){
    if(arr[i]!=0){
      swap(arr[j],arr[i]);
      j++;
    }
  }
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
   return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n1=5;
  int n2=8;

  int arr1[n1]={0,1,2,3,4};
  int arr2[n2]={5,1,0,3,4,3,5,2};

  set<int> st;                       //we use set to find the union of two array in sorted order
  vector<int> uni;

  for(int i=0;i<n1;i++) st.insert(arr1[i]);
  for(int i=0;i<n2;i++) st.insert(arr2[i]);
  for(auto it:st) uni.push_back(it);
  for(int i=0;i<uni.size();i++) cout<<uni[i]<<" ";
  
  return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n1=5;
  int n2=8;

  int arr1[n1]={0,1,2,3,4};
  int arr2[n2]={1,2,3,4,5,6,7,8};              // optimal approach for union
  int i=0,j=0;

  vector<int> uni;

  while(i<n1 && j<n2){
    if(arr1[i]<=arr2[j]){
      if(uni.size()==0 || uni.back()!=arr1[i]) {
        uni.push_back(arr1[i]);
      }
      i++;
    }
    else{
      if(uni.size()==0 || uni.back()!=arr2[j]){
         uni.push_back(arr2[j]);
      }
      j++;
    }
  }
  while(i<n1){
    if(uni.size()==0 || uni.back()!=arr1[i]) {
        uni.push_back(arr1[i]);
      }
      i++;
  }
  while(j<n2){
    if(uni.size()==0 || uni.back()!=arr2[j]){
         uni.push_back(arr2[j]);
      }
      j++; 
  }

  for(int i=0;i<uni.size();i++) cout<<uni[i]<<" ";

  
  return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n1=7;                        // finding intersection of two sorted array 
  int n2=7;

  int arr1[n1]={0,1,2,2,3,4,5};
  int arr2[n2]={0,1,2,3,4,5,6};
  int vis[n2]={0};
  vector<int> uni;

  for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
      if(arr2[j]==arr1[i] && vis[j]==0){
        uni.push_back(arr1[i]);
        vis[j]=1;
        break;
      }
      if(arr2[j]>arr1[i]) break;
    }
  }
  for(int i=0;i<uni.size();i++) cout<<uni[i]<<" ";

  return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n1=8;                        //  optimal solutipn finding intersection of two sorted array 
  int n2=7;

  int arr1[n1]={1,2,2,3,3,4,5,6};
  int arr2[n2]={2,3,3,5,6,6,7};
  vector<int> uni;
  int i=0,j=0; 

  while(i<n1){
    if(arr1[i]==arr2[j]){
    uni.push_back(arr1[i]);
    i++;
    j++;
    }
    else if(arr1[i]<arr2[j]){
    i++;
    }
  }

  for(int i=0;i<uni.size();i++) cout<<uni[i]<<" ";

  return 0; 
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=5;
  int N=6;   // hence the given number is +1 then the size of array in missing number question

  int arr[n]={1,2,3,4,6};
  for(int i=1;i<=N;i++){
    bool flag=0;
    for(int j=0;j<n;j++){
      if(arr[j]==i){
        flag=1;
        break;
      }
    }
    if(flag==0) cout<<i;
  }
  

  return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=5;
  int N=6;   // hence the given number is +1 then the size of array in missing number question

  int arr[n]={1,2,3,4,6};
  int hash[N]={0};
  for(int i=0;i<n;i++){
    hash[arr[i]]=1;
  }
  for(int i=1;i<N;i++){                    //better approach of finding missing number
    if(hash[i]==0)
    cout<<i;
  }

  return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=5;
  int N=6;   // hence the given number is +1 then the size of array in missing number question                //optimal approach of finding missing number (sum)

  int arr[n]={1,2,3,4,6};
  
  int sum=(N*(N+1))/2;
  int s=0;

  for(int i=0;i<n;i++) s+=arr[i];

  cout<<sum-s;


  return 0;
} */

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=5;
  int N=6;   // hence the given number is +1 then the size of array in missing number question                //optimal approach of finding missing number (XOR)   

  int arr[n]={1,2,3,4,6};
  int xor1=0,xor2=0;
  for(int i=0;i<n;i++) {
    xor2=xor2^arr[i];  
    xor1=xor1^(i+1);           // we can also use one loop here
    xor1=xor1^N;                                                                
  }
  cout<<(xor1^xor2);  // here bracket is imp
 

  return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=11;
  int arr[n]={1,0,1,1,1,0,1,1,0,1,1};
  int maxn=0;
  int count=0;
  for(int i=0;i<n;i++){
    if(arr[i]==1) count++;
    else{
      if(maxn<count) maxn=count;  
      count=0;
    }
  }

  for(int i=0;i<n;i++){
    if(arr[i]==1){
       count++;
       maxn=max(count,maxn);
    }
    else count=0;
  }

  cout<<maxn;

  return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  string s1="abcd",s2="abcde";
  int xor1=0,xor2=0;
  for(int i=0;i<s1.length();i++){
     xor1=xor1^s1[i];
     xor2=xor2^s2[i];
  }
   xor2=xor2^s2[s2.length()-1];
  //for(int i=0;i<s2.length();i++) xor2=xor2^s2[i];

  cout<<char(xor1^xor2);

}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=10;
  int arr[n]={1,1,2,3,4,5,6,1,2,3};
  int sum=0,ks=12,len=0;

  for(int i=0;i<n;i++){                          // brute fo solution for longest subarray with sum k
    for(int j=i;j<n;j++){
      sum+=arr[j];
      if(sum==ks) len=max(len,j-i+1);
    }
  }
  cout<<len;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=10;
  int arr[n]={1,2,3,1,1,1,1,4,2,3};
  int k=3,maxlen=0;

  map<long long,int> mp;
  long long sum=0;

  for(int i=0;i<n;i++){
    sum+=arr[i];                            // better solution for longest subarray with sum k works for all cases +,-,0
    if(sum==k){
    maxlen=max(maxlen,i+1);
    }
  long long rem=sum-k;
  if(mp.find(rem)!=mp.end()){
    int len=i-mp[rem];
    maxlen=max(len,maxlen);
  }
  if(mp.find(sum)==mp.end()){               // here we can go through all the element till start
  mp[sum]=i;
  }
  }
  cout<<maxlen;

  return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=9;
  int arr[n]={1,2,3,1,1,1,1,3,3};
  int i=0,j=0,sum=0,len=0,k=6;

  while(i<n){
    sum+=arr[i];

    while(sum>k){
      sum-=arr[j];                   // optimal case for finding longest subarray with sum k only for positive and zeroes
      j++;
    }
    if(sum==k){
      len=max(len,i-j+1);
    }
    i++;
  }
  cout<<len;

  return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=5;
  int arr[n]={2,5,6,8,11};
  int sum=0,rem=0,target=15;
  bool flag=0;
  map<int ,int> mp;
  for(int i=0;i<n;i++) mp[arr[i]]=i;                 // better soln to find 2sum 
  for(int i=0;i<n;i++){
    rem=target-arr[i];
    if(mp.find(rem)!=mp.end()){
      flag=1;
      break;
    }
  }
  if(flag==1) cout<<"yes";
  else cout<<"no";
  return 0;
}*/


/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=5;
  int arr[n]={2,5,6,8,11},target=15;
  map<int,int> mp;
  bool flag=0;

  for(int i=0;i<n;i++){
    int a=arr[i];
    int rem=target-a;
    if(mp.find(rem)!=mp.end()){                // another better soln to find 2sum
      flag=1;
      break;
    }
    mp[arr[i]]=i;
  }
  if(flag==1) cout<<"yes";
  else cout<<"no";
  return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=5;
  int arr[n]={2,5,6,8,11},target=14;
  int i=0,j=n-1;
  sort(arr,arr+n);  // sorting is necessary  optimal 

  while(i<j){
    int sum=arr[i]+arr[j];
    if(sum<14) i++;
    else if(sum>14) j--;
    else break;
  }
  cout<<i<<" "<<j;
  return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
 
  vector<int> arr{0,1,2,0,1,2,1,2,0,0,0,1};
  int c0=0,c1=0,c2=0;

  for(int i=0;i<arr.size();i++){
    if(arr[i]==0)c0++;
    else if(arr[i]==1)c1++;
    else c2++;
  }
  for(int i=0;i<c0;i++) arr[i]=0; 
  for(int j=c0;j<c0+c1;j++) arr[j]=1;                             // better soln for sorting 0 , 1 , 2  for optimal visit algo.cpp [2]
  for(int k=c0+c1;k<arr.size();k++) arr[k]=2;

  for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";

  return 0;

}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=7;
  int arr[n]={2,2,3,3,1,2,2};
  int count=0;

  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(arr[i]==arr[j]) count++;                      // Brute soln for majority element O(n2)
    }
    if(count>n/2) break;
    else count=0;
  }
  cout<<count;  
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=7;
  int arr[n]={2,2,3,3,1,2,2};

  map<int,int> mp;
  int count;

  for(int i=0;i<n;i++){
    mp[arr[i]]++;
  }
  for(auto it:mp){
    if(it.second > n/2){                     // better solution majority element using hashing O(nlogn) for optimal visit algo.cpp[3]
      count=it.first;
      break;
    }
  }
  cout<<count;
  return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=8;
  int arr[n]={-2,-3,4,-1,-2,1,5,-3};
  int maxi=INT_MIN;

  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      int sum=0;
      for(int k=i;k<=j;k++){                       // brute soln for maximum subarray sum  O(n3)
        sum+=arr[k];
        maxi=max(sum,maxi);
      }
    }
  }
  cout<<maxi;

  return 0; 
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=8;
  int arr[n]={-2,-3,4,-1,-2,1,5,-3};
  int maxi=INT_MIN;

  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){                               // better soln for maximum subarray sum  O(n2)  for optimal visit algo.cpp[4]
        sum+=arr[j];
        maxi=max(sum,maxi);
    }
  }
  cout<<maxi;

  return 0; 
}*/

// buy and sell stock 

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=6;
  int arr[n]={7,1,5,3,6,4};

  int profit=0;
  int mini=arr[0];

  for(int i=1;i<n;i++){
    int cost=arr[i]-mini;
    profit=max(cost,profit);
    mini=min(mini,arr[i]);
  }
  cout<<profit;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=6;
  int arr[n]={3,1,-2,-5,2,-4};

  vector<int> po,ne;

  for(int i=0;i<n;i++){
    if(arr[i]>0) po.push_back(arr[i]);               //brute soln to rearrange array with alternate 
    else ne.push_back(arr[i]);
  }
  /*int j=0,k=0;
  for(int i=0;i<n;i++){
    if(i%2==0){
      arr[i]=po[j];
      j++;
    }
    else {
      arr[i]=ne[k];
      k++;
    }
  }

  for(int i=0;i<n/2;i++){
    arr[i*2]=po[i];
    arr[i*2+1]=ne[i];
  }
  for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=6;
  int arr[n]={3,1,-2,-5,2,-4};
  int pos=0,neg=1;                                               // optimal soln for rearrange the elements
  int v[n]={};           

  for(int i=0;i<n;i++){
    if(arr[i]>0){
      v[pos]=arr[i];
      pos+=2;
    }
    else{
      v[neg]=arr[i];
      neg+=2;
    }
  }
  for(int i=0;i<n;i++) cout<<v[i]<<" ";
}*/

// follow up question 

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=6;
  int arr[n]={3,1,-2,5,2,-4};

  vector<int> po,ne;

  for(int i=0;i<n;i++){
    if(arr[i]>0) po.push_back(arr[i]);               
    else ne.push_back(arr[i]);
  }

  if(po.size()>ne.size()){
    for(int i=0;i<ne.size();i++){
      arr[i*2]=po[i];
      arr[i*2+1]=ne[i];
    }
    int index1=ne.size()*2;
    for(int i=ne.size();i<po.size();i++){
      arr[index1]=po[i];
      index1++;
    }
  }
  else{
     for(int i=0;i<po.size();i++){
      arr[i*2]=po[i];
      arr[i*2+1]=ne[i];
    }
    int index2=po.size()*2;
    for(int i=po.size();i<ne.size();i++){
      arr[index2]=ne[i];
      index2++;
    }
  }

  for(int i=0;i<n;i++) cout<<arr[i]<<" ";

}*/

/*#include<bits/stdc++.h>                // next permutation
using namespace std;

int main(){
  int n=3;
  int arr[n]={3,2,1};

  int ind=-1;

  for(int i=n-2;i>=0;i--){
    if(arr[i]<arr[i+1]){
      ind=i;
      break;
    }
  }
  if(ind==-1) reverse(arr, arr+n);

  else{
  for(int i=n-1;i>=ind;i--){
    if(arr[i]>arr[ind]){
      swap(arr[i],arr[ind]);
      break;
    }
  }
  reverse(arr+ind+1,arr+n);
  }                                                   // assume that arr=0 and then starting from ind+1 to n

  for(int i=0;i<n;i++) cout<<arr[i]<<" ";

  return 0;
}*/

// Printing all the possible permutation


/*#include<bits/stdc++.h>
using namespace std;

void permut(int arr[], vector<vector<int>> &ans, vector<int> &ds, int freq[], int n){
  if(ds.size()==n){
    ans.push_back(ds);
    return;
  }
  for(int i=0;i<n;i++){
    if(!freq[i]){
      ds.push_back(arr[i]);
      freq[i]=1;
      permut(arr,ans,ds,freq,n);                     // brute force code to print all permutatiion [a]
      freq[i]=0;
      ds.pop_back();
    }
  }
}

int main(){
  int n=3;
  int arr[n]={1,2,3};
  vector<vector<int>> ans;
  vector<int> ds;
  int freq[n]={0};

  permut(arr,ans,ds,freq,n);

  for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }
}*/


/*#include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr={1,2,3};
    vector<vector<int>> v;
    

    sort(arr.begin(),arr.end());
    v.push_back(arr);     
    while(next_permutation(arr.begin(),arr.end())){
       v.push_back(arr);                                             // optimise code to print permutation using stl
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
  int n=6;
  int arr[n]={10,22,12,3,0,6};
  vector<int> v;
  bool flag=0;

  for(int i=0;i<n;i++){
    flag=0;
  for(int j=i;j<n;j++){
    if(arr[i]<arr[j]){
      flag=1;
      break;
    }
  }
  if(flag==0) v.push_back(arr[i]);      // brute force soln to collect all the leaders (leaders means having all the smaller element after the leader element )
  }
  

  for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
}*/


/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=6;
  int arr[n]={10,22,12,3,0,6};
  vector<int> v;
  
  int maxi=INT_MIN;

  for(int i=n-1;i>=0;i--){
    if(arr[i]>maxi){
      maxi=arr[i];
      v.push_back(arr[i]);                         // optimal soln to collect all the leaders 
    }
  }
  for(int i=0;i<v.size();i++) cout<<v[i]<<" "; 
}*/

/*#include<bits/stdc++.h>
using namespace std;

bool ls(int arr[],int num,int n){
  for(int i=0;i<n;i++){
    if(arr[i]==num) return true;
  }
  return false;
}

int main(){
  int n=9;
  int arr[n]={102,4,100,1,101,3,2,1,1};                 // brute force soln to find longest consective length
  int count,longest=1,x;

  for(int i=0;i<n;i++){
    count=1;
    x=arr[i];
    while(ls(arr,x+1,n)==true){
      count++;
      x++;
    }
    longest=max(count,longest);
  }

  cout<<longest;
  
}*/

//better soln to find longest consecutive length

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=14;
  int arr[n]={100,102,100,101,101,4,3,2,3,2,1,1,1,2};
  int cnt=0,longest=1,lastsmall=INT_MIN;

  sort(arr,arr+n);

  for(int i=0;i<n;i++){
   if(arr[i]-1==lastsmall){
    cnt++;
    lastsmall=arr[i];
   }
   else if(arr[i]!=lastsmall){
    cnt=1;
    lastsmall=arr[i];
   }
   longest=max(longest,cnt);
  }
  cout<<longest;
}*/

/*#include<bits/stdc++.h>           // optimal soln to find longest consecutive length
using namespace std;

int main(){
  int n=14;
  int arr[n]={100,102,100,101,101,4,3,2,3,2,1,1,1,2};

  int cnt=1;
  int longest=0;

  unordered_set<int> st;               // unordered set takes O(1) in average and best case
  for(int i=0;i<n;i++){
    st.insert(arr[i]);
  }
  for(auto it:st){
    if(st.find(it-1)==st.end()){
      cnt=1;
      int x=it;
      while(st.find(x+1)!=st.end()){
        x++;
        cnt++;
      }
      longest=max(longest,cnt);
    }
  }
   cout<<longest;                    // this takes TC O(3N) and SC O(N)
}*/

// set metrix zeroes  brute force soln

/*#include<bits/stdc++.h>
using namespace std;

void rowzero(int arr[][4],int i,int m){
for(int j=0;j<m;j++){
  if(arr[i][j]==1) arr[i][j]=-1;
}
}
void colzero(int arr[][4],int j,int n){
  for(int i=0;i<n;i++){
    if(arr[i][j]==1) arr[i][j]=-1;
  }
}

int main(){
 const int n=4,m=4;
 int arr[n][m]={
    {1,1,1,1},
    {1,0,0,1},
    {1,1,0,1},
    {1,1,1,1}
};
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(arr[i][j]==0){
        rowzero(arr,i,m);
        colzero(arr,j,n);
      }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(arr[i][j]==-1) arr[i][j]=0;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
 const int n=4,m=4;
 int arr[n][m]={
    {1,1,1,1},                                   // better soln to set metrix zero
    {1,0,1,1},
    {1,1,0,1},
    {1,1,0,1} };

  int row[n]={0};
  int col[m]={0};

for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    if(arr[i][j]==0){
      row[i]=1;
      col[j]=1;
    }
  }
}
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    if(row[i]==1 || col[j]==1) arr[i][j]=0;
  }
}
for(int i=0;i<n;i++){
  for(int j=0;j<m;j++){
    cout<<arr[i][j]<<" ";
  }
  cout<<endl;
}

}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
 const int n=4,m=4;
 int arr[n][m]={
    {1,1,1,1},                                   // optimal soln to set metrix zero [b]
    {1,0,1,1},
    {1,1,0,1},
    {0,1,1,1} };
    int col0=1;

  //int row[n]={0}; row = arr[..][0]
  //int col[m]={0}; column = arr[0][..]

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(arr[i][j]==0){
        arr[i][0]=0;
        if(j!=0) arr[0][j]=0;
        else col0=0;
      }
    }
  }
  for(int i=1;i<n;i++){
    for(int j=1;j<m;j++){
      if(arr[i][j]!=0){
        if(arr[i][0]==0 || arr[0][j]==0) arr[i][j]=0;
      }
    }
  }
  if(arr[0][0]==0){
    for(int j=0;j<m;j++) arr[0][j]=0;
  }
  if(col0==0){
    for(int i=0;i<n;i++) arr[i][0]=0;
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }


}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=4,m=4;
  int arr[n][m]={
    {1,2,3,4},                                   //brute force soln to rotate matrix by 90
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16} };
  int ans[n][m];

    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        ans[j][(n-1)-i]=arr[i][j];
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cout<<ans[i][j]<<" ";
      }
      cout<<endl;
    }
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=4,m=4;
  int arr[n][m]={
    {1,2,3,4},                                   //optimal soln to rotate matrix by 90
    {5,6,7,8},
    {9,10,11,12},
    {13,14,15,16} };

    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<m;j++){
         swap(arr[i][j],arr[j][i]);        // first we do transpose by changing element expect at the same i and j which is diagonal    
      }
    }
    for(int i=0;i<n;i++){
      reverse(arr[i],arr[i]+n);
    }



    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }


  }*/

  /*#include<bits/stdc++.h>
  using namespace std;

  int main(){
    int n=4,m=2;
    int arr[n][m]={
      {1,2},
      {3,4},
      {5,6},
      {7,8}
    };
    vector<int> ans;

    int top=0,bottom=n-1,left=0,right=m-1;

    while(top<=bottom && left<=right){
    // right

    for(int i=left;i<=right;i++){
      ans.push_back(arr[top][i]);                          // direction of spiral matrix will be right->bottom->left->top [c]
    }
    top++;

    // bottom

    for(int i=top;i<=bottom;i++){
      ans.push_back(arr[i][right]);
    }
    right--;

    // left
    if(top<=bottom){
    for(int i=right;i>=left;i--){
      ans.push_back(arr[bottom][i]);
    }
    bottom--;
  }

    // top
    if(left<=right){
    for(int i=bottom;i>=top;i--){
      ans.push_back(arr[i][left]);
    }
    left++;
  }
  }

  for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=10;
  int arr[n]={1,2,3,-3,1,1,1,4,2,-3};              // better soln to find no. of subarray having sum k
  int k=3;

  int cnt=0;

  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
      sum+=arr[j];
    }
    if(sum==k) cnt++;
  }
  cout<<cnt;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=10;
  int arr[n]={1,2,3,-3,1,1,1,4,2,-3};
  int k=3;
  map<int,int> mp;                //map of <sum,appearance(app)>      optimal soln for finding no. of subarray with sum k
  int sum=0;
  int cnt=0;
  mp[0]=1;

  for(int i=0;i<n;i++){
    sum+=arr[i];
    int rem=sum-k;
    if(mp.find(rem)!=mp.end()){
       cnt=cnt+mp[rem];
    }
    mp[sum]++;
  }
  cout<<cnt;
  
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=6;
  int arr[n]={4,5,0,-2,-3,1};       
  int k=5;                     // follow up question brute divisible by k subarray 
  int cnt=0;

  for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
      sum+=arr[j];
      if(sum%k==0) cnt++;
    }
  }
  cout<<cnt; 
  
 
}
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=6;
  int arr[n]={4,5,0,-2,-3,1};       
  int k=5;
  map<int,int> mp;  
  mp[0]=1;
  int sum=0;
int cnt=0;                                      // optimal divisible by k
  for(int i=0;i<n;i++){
    sum+=arr[i];
    int rem=sum%k;
    if(rem<0) rem=rem+k;
    cnt+=mp[rem];
    mp[rem]++;
  }
cout<<cnt;
}