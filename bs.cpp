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
// single element in sorted array 

/*#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int low,int high,int n){
    if(arr[0]!=arr[1]) return arr[0];
    if(arr[n-1]!=arr[n-2]) return arr[n-1];
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]!=arr[mid+1] && arr[mid]!=arr[mid-1]) return arr[mid];
        if(mid%2==1 && arr[mid]==arr[mid-1] ||mid%2==0 && arr[mid]==arr[mid+1]) low=mid+1;  // we are on the left half and eliminating left half
        else high=mid-1;                                                                    // we are on the right half and eliminating right half
    }
}
int main(){
    int n=11;
    int arr[n]={1,1,2,2,3,3,4,5,5,6,6};
    int low=1,high=n-2;

    cout<<search(arr,low,high,n);
    
}*/

/*#include<bits/stdc++.h>
using namespace std;                      // find peak element means arr[i-1]<arr[i]>arr[i+1]

int main(){
    int n=6;
    int arr[n]={1,2,3,4,5,3};
    int index=-1;

    for(int i=0;i<n;i++){
        if((i==0 || arr[i+1]<arr[i]) && (i==n-1 || arr[i-1]<arr[i])) index=i;
    }
    cout<<index;
}*/

// optimal soln
/*#include<bits/stdc++.h>
using namespace std;                      // find peak element

int peak(int arr[],int n){
    if(n==1) return 0;
    if(arr[0]>arr[1]) return 0;
    if(arr[n-1]>arr[n-2]) return n-1;
    int low=1,high=n-2;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]) return mid;
        if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1]) low=mid+1;
        else high=mid-1;   // works for other cases and also works when there is multiple peaks
    }
    return -1;
}
int main(){
    int n=5;
    int arr[n]={1,5,1,2,1};

    cout<<peak(arr,n);
}
*/

// finding sqrt by binary search


/*#include<bits/stdc++.h>
using namespace std;

int search(int target){
    int low=1,high=target,ans;
    while(low<=high){
        int mid=low+(high-low)/2;
        long long pro=mid*mid;
        if(pro==target) return mid;
        else if(pro<=target){
            low=mid+1;
            ans=mid;
        }
        else high=mid-1;
    }
    return ans;
}

int main(){
    int target=28;
   cout<<search(target);
}*/

// nth root of a number

/*#include<bits/stdc++.h>
using namespace std;
int func(int mid,int n){
long long ans=1;
while(n>0){
    if(n%2==1){
        ans=ans*mid;
        n--;
    }
    else{
        mid=mid*mid;
        n=n/2;
    }
}
return ans;
}

int search(int n,int m){
    int low=1,high=m;
    while(low<=high){
        int mid=low+(high-low)/2;
        int midn=func(mid,n);
        if(midn==m) return mid;
        else if(midn<m) low=mid+1;
        else high=mid-1;
    }
    return -1;
}

int main(){
    int n=3,m=64;
   cout<<search(n,m);
}
*/

// minimum number of days required to form bouqets;

/*#include<bits/stdc++.h>
using namespace std;                                  // brute force soln 

bool poss(int arr[],int day,int m,int k,int n){
    int cnt=0,bouque=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=day)cnt++;
        else{
            bouque+=(cnt/k);
            cnt=0;
        }
    }
    bouque+=(cnt/k);
    if(bouque>=m) return true;
    return false;
}

int main(){
    int n=8;
    int arr[n]={7,7,7,7,13,11,12,7};
    int m=2,k=3;
    int maxi=INT_MIN,mini=INT_MAX;

    if(n<m*k) return -1;

    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    int ans;
    for(int i=mini;i<=maxi;i++){
        if(poss(arr,i,m,k,n)==true){
             ans=i;
             break;
        }
    }
    cout<<ans;
}*/

/*#include<bits/stdc++.h>
using namespace std;                                  // optimal soln using binary search 

bool poss(int arr[],int day,int m,int k,int n){
    int cnt=0,bouque=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=day)cnt++;
        else{
            bouque+=(cnt/k);
            cnt=0;
        }
    }
    bouque+=(cnt/k);
    if(bouque>=m) return true;
    return false;
}

int main(){
    int n=8;
    int arr[n]={7,7,7,7,13,11,12,7};
    int m=2,k=3;
    int maxi=INT_MIN,mini=INT_MAX;

    if(n<m*k) return -1;

    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    int ans;
    int low=mini,high=maxi;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(poss(arr,mid,m,k,n)==true){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<ans;
}
*/

// find smallest divisor that gives threshold

/*#include<bits/stdc++.h>
using namespace std;

bool find(int arr[],int val,int thresh,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=(arr[i]+val-1)/val;
    }
    if(sum<=thresh) return true;
    return false;
}

int main(){
    int n=5;
    int arr[n]={44,22,33,11,1};
    int thresh=5;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int low=1,high=maxi;
    int ans=-1;

    while(low<=high){
        int mid=low+(high-low)/2;
        if(find(arr,mid,thresh,n)==true){
            ans=mid;
            high=mid-1;
        } 
        else low=mid+1;
    }
    cout<<ans;
}*/

// least weight to complete package in d days

/*#include<bits/stdc++.h>
using namespace std;
int func(int arr[],int n,int cap){
    int days=1,load=0;
    for(int i=0;i<n;i++){
        if(arr[i]+load>cap){
            days++;
            load=arr[i];
        }
        else load+=arr[i];
    }
    return days;
}

int main(){
    int n=10;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    int day=5;
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        sum+=arr[i];
    }
    int low=maxi,high=sum;
    while(low<=high){
        int mid=low+(high-low)/2;
        int days=func(arr,n,mid);
        if(days<=day) high=mid-1;
        else low=mid+1; 
    }
    cout<<low;
}*/

/*#include<bits/stdc++.h>                // Kth missing positive integer
using namespace std;
int fun(int arr[],int n,int k){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int miss=arr[mid]-(mid+1);
        if(miss<k) low=mid+1;
        else high=mid-1;
    }
    return high+1+k;
}

int main(){
    int n=5;
    int arr[n]={2,3,4,7,11};
    int k=5;
    cout<<fun(arr,n,k);
}
*/

// agressive cows (placing cows at min distance which is max) O(n^2)

/*#include<bits/stdc++.h>
using namespace std;

bool canbeplaced(int arr[],int dist,int n,int cows){
    int cowcnt=1,last=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-last>=dist){
            cowcnt++;
            last=arr[i];
        }
    }
    if(cowcnt>=cows) return true;
    else return false;
}

int main(){
    int n=6;
    int arr[n]={0,3,4,7,10,9};
    int cows=4;
    sort(arr,arr+n);

    int maxi=INT_MIN,mini=INT_MAX;
    int ans;

    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    for(int i=1;i<=maxi-mini;i++){
        if(canbeplaced(arr,i,n,cows)==true) continue;
        else{
            ans=i-1; 
            break;
        }
    }
    cout<<ans;
}*/


// agressive cows (placing cows at min distance which is max) O(n)

/*#include<bits/stdc++.h>
using namespace std;

bool canbeplaced(int arr[],int dist,int n,int cows){
    int cowcnt=1,last=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-last>=dist){
            cowcnt++;
            last=arr[i];
        }
    }
    if(cowcnt>=cows) return true;
    else return false;
}

int main(){
    int n=6;
    int arr[n]={0,3,4,7,10,9};
    int cows=4;
    sort(arr,arr+n);

    int maxi=INT_MIN,mini=INT_MAX;
    int ans=-1;

    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    int low=1,high=maxi-mini;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(canbeplaced(arr,mid,n,cows)==true){
            low=mid+1;
            ans=max(ans,mid);
        }
        else high=mid-1;
    }
    cout<<ans;
}*/

// Allocate books O(n^2)

/*#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int pages,int n){
    int std=1,sumofp=0;
    for(int i=0;i<n;i++){
        if(sumofp+arr[i]<=pages) sumofp+=arr[i];
        else{
            sumofp=arr[i];
            std++;
        }
    }
    return std;
}

int main(){
    int n=5;
    int arr[n]={25,46,28,49,24};
    int s=4;
    int maxi=INT_MIN,sum=0;
    int ans=-1;

    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        sum+=arr[i];
    }
    for(int pages=maxi;pages<=sum;pages++){
        int cntstd=func(arr,pages,n);
        if(cntstd==s){
            ans=pages;
            break;
        }
    }
    cout<<ans;
}*/


// Allocate books O(nlogn)

/*#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int pages,int n){
    int std=1,sumofp=0;
    for(int i=0;i<n;i++){
        if(sumofp+arr[i]<=pages) sumofp+=arr[i];
        else{
            sumofp=arr[i];
            std++;
        }
    }
    return std;
}

int main(){
    int n=5;
    int arr[n]={25,46,28,49,24};
    int s=4;
    int maxi=INT_MIN,sum=0;
    int ans=-1;

    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        sum+=arr[i];
    }
    int low=maxi,high=sum;
    while(low<high){
        int mid=low+(high-low)/2;
        int cntstd=func(arr,mid,n);
        if(cntstd>=s){
            low=mid+1;
            ans=mid;
        }
        else high=mid-1;
    }
    cout<<ans;
}*/

// painter's partition 

/*#include<bits/stdc++.h>
using namespace std;

int func(int arr[],int units,int n){
    int painter=1,sumofp=0;
    for(int i=0;i<n;i++){
        if(sumofp+arr[i]<=units) sumofp+=arr[i];
        else{
            sumofp=arr[i];
            painter++;
        }
    }
    return painter;
}

int main(){
    int n=4;
    int arr[n]={10,20,30,40};
    int k=2;                               // number of painters available
    int maxi=INT_MIN,sum=0;

    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
        sum+=arr[i];
    }
    int low=maxi,high=sum;
    while(low<=high){
        int mid=low+(high-low)/2;
        int cntpainter=func(arr,mid,n);
        if(cntpainter>k){
            low=mid+1;
        }
        else high=mid-1;
    }
    cout<<low;
}*/

// gas station problem in which minimisation of max space between gas station O(n^2)

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    int arr[n]={1,13,17,23};
    int k=5;
    vector<int> hash(n-1,0);
    for(int gas=1;gas<=k;gas++){
        long double spacelength=-1;
        int index=-1;
        for(int i=0;i<n-1;i++){
            long double space=(arr[i+1]-arr[i])/(hash[i]+1);
            if(spacelength<space){
             spacelength=space;
             index=i;
            }
        }
        hash[index]++;
    }
    long double ans=-1;
    for(int i=0;i<n-1;i++){
        long double space=(arr[i+1]-arr[i])/(long double)(hash[i]+1);
        ans=max(ans,space);
    }
    cout<<ans;
}
*/

// gas station problem in which minimisation of max space between gas station O(nlogn)

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    int arr[n]={1,13,17,23};
    int k=5;
    vector<int> hash(n-1,0);
    priority_queue<pair<long double,int>> pq;
    for(int i=0;i<n-1;i++){
        pq.push({arr[i+1]-arr[i],i});
    }
    for(int gas=1;gas<=k;gas++){
       auto tp=pq.top();pq.pop();
       int secindex=tp.second;
       hash[secindex]++;
       long double diff=arr[secindex+1]-arr[secindex];
       long double space=diff/(long double)(hash[secindex]+1);
       pq.push({space,secindex});
    }
    cout<<pq.top().first;
}*/

// median of two sorted arrays using space O(n1+n2)

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1=6;
    int n2=4;
    int arr1[n1]={1,3,4,7,10,12};
    int arr2[n2]={2,3,6,15};
    vector<int> arr3;
    vector<int> ans;

    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            arr3.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j]){
            arr3.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n1){
        arr3.push_back(arr1[i]);
        i++;
    }
    while(j<n2){
        arr3.push_back(arr2[j]);
        j++;
    }

    if(arr3.size()%2==0){
        ans.push_back(arr3[arr3.size()/2-1]);
        ans.push_back(arr3[arr3.size()/2]);
    }
    else ans.push_back(arr3[arr3.size()/2]);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}*/

// median of two sorted arrays using Time O(nlogn)

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1=6;
    int n2=4;
    int arr1[n1]={1,3,4,7,10,12};
    int arr2[n2]={2,3,6,15};

    int i=0,j=0;
    int n=n1+n2;
    int index1=n/2-1;
    int index2=n/2;
    int ele1=-1,ele2=-1;
    int cnt=0;

    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            if(cnt==index1) ele1=arr1[i];
            if(cnt==index2) ele2=arr1[i];
            cnt++;
            i++;
        }
        else{
            if(cnt==index1) ele1=arr2[j];
            if(cnt==index2) ele2=arr2[j];
            cnt++;
            j++;
        }
    }
    while(i<n1){
         if(cnt==index1) ele1=arr1[i];
         if(cnt==index2) ele2=arr1[i];
            cnt++;
            i++;
    }
    while(j<n2){
        if(cnt==index1) ele1=arr2[j];
        if(cnt==index2) ele2=arr2[j];
            cnt++;
            j++;
    }
    int ans=-1;
    if(n%2==1) ans=ele2;
    else ans=(double)((double)(ele1+ele2))/2.0;

    cout<<ans;
}*/

//kth element of two soted array 

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1=5,n2=7;
    int arr1[n1]={2,3,6,7,9};
    int arr2[n2]={1,4,8,10,12,15,16};
    int k=11;
    int i=0,j=0;
    int cnt=0;
    vector<int> ans;
    while(i<n1 && j<n2){
        if(cnt==k) break;
        if(arr1[i]<=arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j]){
            ans.push_back(arr2[j]);
            j++;
        }
        cnt++;
    }
    while(i<n1){
        if(cnt==k) break;
        cnt++;
        ans.push_back(arr1[i]);
        i++;
    }
     while(j<n2){
        if(cnt==k) break;
        cnt++;
        ans.push_back(arr2[j]);
        j++;
    }
    cout<<ans[k-1];
}*/

// binary search 2D array 

// maximum 1s in  row  we can also do it by finding lower bound

/*#include<bits/stdc++.h>
using namespace std;

int cnt1s(int arr[][5],int i,int m){
    int low=0,high=m-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[i][mid]==1 && (mid==0 || arr[i][mid-1]==0)) return m-mid;
        if(arr[i][mid]==1) high=mid-1;
        else low=mid+1;
    }
    if(high==-1) return m;
    else if(low==m) return 0;
}

int main(){
    int n=5,m=5;
    int arr[5][5]={
        {0,0,1,1,1},
        {0,0,0,0,0},
        {0,1,1,1,1},
        {0,0,0,0,0},
        {0,1,1,1,1}
    };
    int maxi=INT_MIN;
    int index=-1;
    for(int i=0;i<n;i++){
        int cnt=cnt1s(arr,i,m);
        if(cnt>maxi){
            maxi=cnt;
            index=i;
        }
    }
    cout<<index;
}*/

// search in 2D array 

/*#include<bits/stdc++.h>
using namespace std;

bool bs(int arr[],int m,int target){
    int low=0,high=m-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target) return true;
        if(arr[mid]<target) low=mid+1;
        else high=mid-1;
    }
    return false;
}

int main(){
    int n=3,m=4;
    int arr[3][4]={
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60},
    };
    int target=25;
    bool flag=0;
    for(int i=0;i<n;i++){
        if(arr[i][0]<=target && arr[i][m-1]){
            if(bs(arr[i],m,target)==true){
                flag=1;
                break;
            }
            else break;
        }
    }
    cout<<flag;
}*/

// search in a 2D matrix ||

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int m=5,n=5;
    int arr[m][n]={
    {1,4,7,11,15}
    ,{2,5,8,12,19}
    ,{3,6,9,16,22}
    ,{10,13,14,17,24}
    ,{18,21,23,26,30}};

    int target=5;
    int row=0,col=m-1;
    bool flag=0;
    while(row<n && col>=0){
        if(arr[row][col]==target){
            flag=1;
            break;
        }
        if(arr[row][col]<target) row++;
        else col--;
    }
    cout<<flag;
}*/

// finding peak element II

#include<bits/stdc++.h>
using namespace std;

int maxele(int arr[],int m){
    int maxi=INT_MIN,row=-1;
    for(int i=0;i<m;i++){
        if(maxi<arr[i]) row=i;
    }
    return row;
}
void peak(vector<int> &ans,int arr[][3],int n,int m){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        int row=maxele(arr[mid],m);
        int left=-1,right=-1;
        if(mid-1<0) left=-1;
        else left=arr[row][mid-1];
        if(mid+1>=n) right=-1;
        else right=arr[row][mid+1];
        if(left<arr[row][mid] && right<arr[row][mid]){
            ans.push_back(row);
            ans.push_back(mid);
            break;
        }
        else if(arr[row][mid]<left) high=mid-1;
        else low=mid+1;
    }
    return;
}

int main(){
    int m=3,n=3;
    int arr[3 ][3]={
        {10,20,15}
        ,{21,30,14}
        ,{7,16,32}
    };
    vector<int> ans;
    peak(ans,arr,n,m);
    cout<<ans[0]<<" "<<ans[1];
}
