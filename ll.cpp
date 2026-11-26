// initialising the linked List
/*#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};

int main(){
    vector<int> v={1,2,3,4,5};
    Node* y=new Node(v[0],nullptr);   
    //cout<<y; to get address
    cout<<y->data; // to get the value
}*/

#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};

Node* convertarrLL(vector<int> &v){
    Node* head=new Node(v[0],nullptr);
    Node* mover=head;                                   // finding a head of an array 
    for(int i=1;i<v.size();i++){
        Node*temp=new Node(v[i],nullptr);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}
Node* deletehead(Node* head){
    Node* temp=head;
    head=head->next;
    free(temp); // or delete temp;
    return head;
}
Node* deletetail(Node* head){
    Node* temp=head;
    while(temp){
        if(temp->next->next==nullptr){
            free(temp->next);
            temp->next=nullptr;
            break;
        }
       temp=temp->next;
    }
    return head;
}

int lengthLL(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp){
        temp=temp->next;    
        cnt++;
    }
    return cnt;
}

int search(Node* head,int val){
    Node* temp=head;
    while(temp){
        if(temp->data==val) return 1;
        temp=temp->next;    
    }
    return 0;
}
Node* deletek(Node* head,int k){
    if(head==nullptr) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* prev=nullptr;
    Node* temp=head;
    int cnt=0;
    while(temp){
        cnt++;
        if(cnt==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
Node* deleteele(Node* head,int ele){
    if(head==nullptr) return head;
    if(head->data==ele){
        Node* temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* prev=nullptr;
    Node* temp=head;
    while(temp){
        if(temp->data==ele){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

int main(){
    vector<int> v={10,20,3,4,5};
    //Node* y=new Node(v[0],nullptr);   
    Node* head=convertarrLL(v);
    //cout<<head->data;
    //Node* temp=head;
   /* while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }*/
   //cout<<search(head,20);
   /*Node* newhead=deletetail(head);
   Node* temp=newhead;                     // removal of tail 
   while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }*/ 
   Node* newhead=deleteele(head,20);
   Node* temp=newhead;
   while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}