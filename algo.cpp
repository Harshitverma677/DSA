// EUCLIDEAN ALGORITHM ( to find gcd between two numbers) [1]

/*#include<bits/stdc++.h>
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
}*/

// DUTCH NATIONAL FLAG ALGORITHM ( it helps to sort 0 , 1 , 2 in an array most optimal ) [2]

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr{0,1,2,0,1,2,1,2,0,0,0,1};
    int low=0,mid=0,high=arr.size()-1;                           // here we use three pointers 
                                                                                                                                                //                        low  mid
    while(mid<=high){                                                                                                                          //                          |   |
        if(arr[mid]==0){                              // if at mid we find 0 then it will swap to the left low pointer which will be sorted as well because we will    0 0 0 1 0 1 1 2 
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1) mid++;                                // same as for 1 mid will be mid++ because at last we want 1 in the middle
        else{
            swap(arr[mid],arr[high]);              // and here we put 2 in front of other 2 which is at high+1 means swap at pointer(high)
            high--;
        }
    }
    for(int i=0;i<arr.size();i++) cout<<arr[i]<<" ";
} */

// MOORE'S VOTING ALGORITHM (optimal soln to find majority element )  [3]

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7;
  int arr[n]={2,2,3,3,1,2,2};
  int count=0;
  int el;

  for(int i=0;i<n;i++){
    if(count==0){
        count=1;
        el=arr[i];
    }
    else if(arr[i]==el) count++;
    else count--;
  }
  int cnt=0;
  for(int i=0;i<n;i++){
    if(el==arr[i]) cnt++;
  }
  if(cnt>n/2) cout<<el;
  else cout<<"-1";

  return 0;
}*/

// KADANE'S ALGORITHM (optimal soln to find maximum subarray sum )[4]

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=8;
  int arr[n]={-2,-3,4,-1,-2,1,5,-3};
  int maxi=INT_MIN;
  int sum=0;

  for(int i=0;i<n;i++){
    sum+=arr[i];
    maxi=max(sum,maxi);                                 // if in any possibility that no subarray returning positive sum then the maxi will be 0

    if(sum<0) sum=0;
  }
  if(maxi<0) maxi=0;

  cout<<maxi;

  return 0; 
}*/

// follow up question ( print subarray with largest subarray sum)

/*#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=8;
  int arr[n]={-2,-3,4,-1,-2,1,5,-3};
  int maxi=INT_MIN;
  int sum=0,start,anstart,ansend;

  for(int i=0;i<n;i++){
    sum+=arr[i];

    if(sum>maxi){
        maxi=sum;
        anstart=start;
        ansend=i;
    }
    if(sum<0){ 
        sum=0;
        start=i+1;
    }
  }
  for(int i=anstart;i<=ansend;i++) cout<<arr[i]<<" ";

  return 0; 
}*/





