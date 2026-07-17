// optimal approach for binary search only apply on sorted array iterative one 

/*#include<bits/stdc++.h>
using namespace std;

int bs(int arr[],int target,int low,int high){
    while(low<=high){ 
    int mid=(low+high)/2;
    if(arr[mid]==target) return mid;
    else if(arr[mid]>target) high=mid-1;
    else low=mid+1;
}
return -1;
}

int main(){
int n=6;
int arr[n]={1,3,5,8,9,10};
int target=10;
int low=0,high=n-1;

cout<<bs(arr,target,low,high);

}*/

// optimal approach for binary search only apply on sorted array recursive one 

/*#include<bits/stdc++.h>
using namespace std;

int bs(int arr[],int target,int low,int high){
    if(low>high) return -1;
   int mid=(low+high)/2;              // to avoid overflow use mid=low+(high-low)/2
   if(arr[mid]==target) return mid;
   else if(arr[mid]>target) return (arr,target,low,mid-1);
   return bs(arr,target,mid+1,high);
}

int main(){
int n=6;
int arr[n]={1,3,5,8,9,10};
int target=10;
int low=0,high=n-1;

cout<<bs(arr,target,low,high);

}*/

/*#include<bits/stdc++.h>                       // binary search to find the lower bound smallest index where arr[index]>=n
using namespace std;                            // using recursive one

int bs(int arr[],int target,int low,int high,int miniindex){
    int mid=low+(high-low)/2;
    if(low>high) return mid;
    if(arr[mid]>=target){
        miniindex=min(miniindex,mid);
        return bs(arr,target,low,mid-1,miniindex);
    }
    else{
        miniindex=min(miniindex,mid);
        return bs(arr,target,mid+1,high,miniindex);
    }
}

int main(){
int n=6;
int arr[n]={1,3,5,8,9,10};
int target=10;
int low=0,high=n-1;
int miniindex=n;

cout<<bs(arr,target,low,high,miniindex);

}*/

/*#include<bits/stdc++.h>                       // binary search to find the lower bound smallest index where arr[index]>=n
using namespace std;                            // using iterative one

int main(){
int n=6;
int arr[n]={1,3,5,8,9,10};
int target=10;
int low=0,high=n-1;
int miniindex=n;

while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]>=target){
        miniindex=mid;
        high=mid-1;
    }
    else{
        low=mid+1;
    }
}
cout<<miniindex;
}*/

/*#include<bits/stdc++.h>                       // binary search to find the upper bound smallest index where arr[index]>n
using namespace std;                            // using iterative one

int main(){
int n=6;
int arr[n]={1,3,5,8,9,10};
int target=5;
int low=0,high=n-1;
int miniindex=n;

while(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]>target){
        miniindex=mid;
        high=mid-1;
    }
    else{
        low=mid+1;
    }
}
cout<<miniindex;
}*/

/*#include<bits/stdc++.h>                       
using namespace std;  // another easy method
int main(){
int n=6;
int arr[n]={1,3,5,8,9,10};
int target=5;
int lb=lower_bound(arr,arr+n,target)-arr;
int ub=upper_bound(arr,arr+n,target)-arr;

cout<<lb<<" "<<ub; 
}*/

// floor and ceil question 
// floor means largest number <= target 
// ceil means smallest number >=target which is lower bound

/*#include<bits/stdc++.h>
using namespace std;

int bs(int arr[],int target,int low,int high){
    int ceil=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
    if(arr[mid]>=target){
        ceil=arr[mid];
        high=mid-1;
    }
    else low=mid+1;
}
    return ceil;
}
int fl(int arr[],int target,int low,int high){
    int floor=-1;
    while(low<=high){
            int mid=low+(high-low)/2;
    if(arr[mid]<=target){
        floor=arr[mid];
        low=mid+1;
    }
    else high=mid-1;
}
    return floor;
} 


int main(){
    int n=5;
    int arr[n]={10,20,30,40,50};
    int target=25;

    int low=0,high=n-1;

    int ceil=bs(arr,target,low,high);
    int floor=fl(arr,target,low,high);

    cout<<floor<<" "<<ceil;
}*/

// first and last occurance of x

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=8;
    int arr[n]={1,2,4,8,8,8,9,10};
    int target=8;
    int first=-1,last=-1;

    for(int i=0;i<n;i++){
        if(arr[i]==target && first==-1) first=i;
        if(arr[i]==target) last=i;
    }
    cout<<first<<" "<<last;
}*/

// another method to find first and last occurance of target

/*#include<bits/stdc++.h>
using namespace std;

int lowerb(int arr[],int target,int low,int high){
    int lb=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
    if(arr[mid]>=target){
        lb=mid;
        high=mid-1;
    }
    else low=mid+1;
}
return lb;
}

int upperb(int arr[],int target,int low,int high){
    int ub=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>target){
            ub=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ub;
}


int main(){
    int n=8;
    int arr[n]={1,2,4,8,8,8,9,10};
    int target=1;
    int low=0,high=n-1;
    int lb=lowerb(arr,target,low,high);
    int ub=upperb(arr,target,low,high);
    if(ub==-1 & lb!=-1) ub=lb+1;
    if(lb==n || arr[lb]!=target) cout<<"{-1,-1}";
    else cout<<"{"<<lb<<","<<ub-1<<"}";
}*/

// another mehtod

/*#include<bits/stdc++.h>
using namespace std;
int fr(int arr[],int target,int n){
    int low=0,high=n-1;
    int first=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]>target) high=mid-1;
        else low=mid+1;
    }
    return first;
}
int lt(int arr[],int target,int n){
 int low=0,high=n-1;
 int last=-1;
    while(low<=high){
       int mid=low+(high-low)/2;
        if(arr[mid]==target){
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]>target) high=mid-1;
        else low=mid+1;
    }   
    return last;
}

int main(){
    int n=10;
    int arr[n]={1,2,8,8,8,8,9,10,12,14};
    int target=8;
    int first=fr(arr,target,n);
    int last=lt(arr,target,n);
    cout<<first<<","<<last;
}*/

// find the index of the element in rotated sorted array carrying unqiue

/*#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int target,int n){
int low=0,high=n-1;
while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==target) return mid;
    if(arr[low]<=arr[mid]){
        if(arr[low]<=target && arr[mid]>=target) high=mid-1;
        else low=mid+1;
    }
    else{
        if(arr[mid]<=target && arr[high]>=target) low=mid+1;
        else high=mid-1;
    }
}
return -1;
}

int main(){
    int n=9;
    int arr[n]={7,8,9,1,2,3,4,5,6};
    int target=1;

    cout<<search(arr,target,n);
}*/

//follow up question  carrying duplicates

/*#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int target,int n){
int low=0,high=n-1;
while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==target) return true;
    if(arr[low]==arr[mid] && arr[mid]==arr[high]){
        low++,high--;
        continue;
    }
    if(arr[low]<=arr[mid]){
        if(arr[low]<=target && arr[mid]>=target) high=mid-1;
        else low=mid+1;
    }
    else{
        if(arr[mid]<=target && arr[high]>=target) low=mid+1;
        else high=mid-1;
    }
}
return false;
}

int main(){
    int n=7;
    int arr[n]={3,3,1,2,3,3,3};
    int target=1;
    bool flag=search(arr,target,n);

    cout<<flag;
}
*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=7;
    int arr[n]={4,5,6,7,0,1,2};
    int small=INT_MAX,index=-1;
    int low=0,high=n-1;                       // finding minimum in rotated sorted array and number of rotation
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>=arr[low]){
            if(arr[low]<small){
                small=arr[low];
                index=low;
            }
            low=mid+1;
        }
        else if(arr[mid]<=arr[high]){
            if(arr[mid]<small){
                small=arr[mid];
                index=mid;
            }
            high=mid-1;
        }
    }
    cout<<small<<" "<<index;
}*/
#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int low,int high,int n){
    if(arr[0]!=arr[1]) return arr[0];
    if(arr[n-1]!=arr[n-2]) return arr[n-1];
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]) return arr[mid];
        if(mid%2==1 && arr[mid]==arr[mid-1] ||mid%2==0 && arr[mid]==arr[mid+1]) low=mid+1;  // we are on the left half and eliminating left half
        else high=mid-1;  // we are on the right half and eliminating right half
    }
}
int main(){
    int n=11;
    int arr[n]={1,1,2,2,3,3,4,5,5,6,6};
    int low=1,high=n-2;

    cout<<search(arr,low,high,n);
    
}