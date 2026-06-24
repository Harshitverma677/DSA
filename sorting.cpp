/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6,temp;
    int arr[n]={13,46,25,52,9,11};        // selection sort

    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]) min=j;
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[n]={13,46,25,52,9,11};

    for(int j=0;j<n-1;j++){
        
    for(int i=0;i<n-1-j;i++){                        // bubble sort in increasing order
        if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    }
}
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[n]={13,46,25,52,9,11};

    for(int i=0;i<n-1;i++){                                   //insertion sort in which it place the element in correct position
        for(int j=i+1;j>0;j--){
            if(arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=6;
    int arr[n]={13,46,25,52,9,11};

    for(int i=0;i<n;i++){                                   //insertion sort in which it place the element in correct position
       int j=i;
       while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j-1],arr[j]);                             // best case complexity O(n) as if arr[j-1]>arr[j] condition does not coorect than the while loop will not run , i value will increase
        j--;
       }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

void merge_(int arr[],int low,int middle,int high){
    int left=low;
    int right=middle+1;
    vector<int> temp;

    while(left<=middle && right<=high){
        if(arr[left]<arr[right]) {
        temp.push_back(arr[left]);
        left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=middle){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++)
    arr[i]=temp[i-low];
}

void merge_sorting(int arr[],int low,int high){
    if(low==high) return;
    int middle=(low+high)/2;
    merge_sorting(arr,low,middle);
    merge_sorting(arr,middle+1,high);
    merge_(arr,low,middle,high);
}

int main(){
    int arr[9]={3,1,2,4,1,5,6,2,4};
    int low=0;
    int high=8;

    merge_sorting(arr,low,high);

    for(int i=0;i<9;i++) cout<<arr[i]<<" ";

    return 0;

}*/


// # Quick sort better than merge sort because of less space complexity which is o(1)

/*#include<bits/stdc++.h>
using namespace std;

int fun(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while(pivot>=arr[i] && i<high) i++;
        while(pivot<=arr[j] && j>low) j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}


void qs(int arr[],int low,int high){
    if(low<high){
        int part=fun(arr,low,high);
        qs(arr,low,part-1);
        qs(arr,part+1,high);
    }
}



int main(){
    int arr[9]={3,1,2,4,1,5,6,2,4};
    int low=0;
    int high=8;

    qs(arr,low,high);

    for(int i=0;i<9;i++) cout<<arr[i]<<" ";

    return 0;
}*/