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

  #include<iostream>
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





