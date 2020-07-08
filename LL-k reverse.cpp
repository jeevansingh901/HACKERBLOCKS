#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    //Constructor 
    node(int d){
        data = d;
        next = NULL;
    }
};
void insertAtTail(node*&head,int data){
    if(head == NULL){
        head = new node(data);
        return;
    }
    node *tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
}
int buildList(node*&head){
    int n;
    cin>>n;
    int k;
    cin>>k;
    while(n--){
        int data;
        cin>>data;
        insertAtTail(head,data);
    }
    return k;
}
node* reverse(node*&head,int k) 
{ 
    int x=k;
    node *current = head; 
    node *prev = NULL, *nex = NULL; 
    while (current != NULL && x>0) 
    { 
        nex = current->next; 
        current->next = prev; 
        prev = current; 
        current = nex;
        x--;
        //cout<<nex->data<<" "<<endl;
    } 
    if(nex != NULL){
        head->next = reverse(nex,k);
    }
    return prev;
} 
void printList(node*head){
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    printList(head->next);
}
int main() {
    node* head = NULL;
    int k = buildList(head);
   // printList(head);
    //cout<<endl;
    head=reverse(head,k);
    printList(head);
}
