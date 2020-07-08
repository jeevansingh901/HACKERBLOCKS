#include<iostream>
using namespace std;

class node{
public:
	int data;
	node* next;
public:
	node(int d){
		data = d;
		next = NULL;
	}
};
void print(node*head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

void insertAtHead(node*&head,int d){
	node* n = new node(d);
	n->next = head;
	head = n;
}

int length(node*head){
	int len=0;
	while(head!=NULL){
		len++;
		head = head->next;
	}
	return len;
}

void bubbleSort(node*&head){

	int n = length(head);

	for(int i=0;i<n-1;i++){

		node*current = head;
		node*prev = NULL;
		node*N;

		while(current!=NULL && current->next!=NULL){
			if(current->data > current->next->data){
				//Swapping
				if(prev==NULL){   //case when head update
					N = current->next;
					current->next = N->next;
					N->next = current;

					head = N;
					prev = N;
				}
				else{             // case when head won't update
					N = current->next;
					prev->next = N;
					current->next = N->next;
					N->next = current;
					prev = N;

				}
			}
			else{
				prev = current;
				current = current->next;
			}
		}
	}

}

int main()
{
    int N;
    cin>>N;
    node *head=NULL;
    int i=1,d=0;
	while(i<=N)
    {
        cin>>d;
        insertAtHead(head,d);
        i++;
    }


   // print(head);
    bubbleSort(head);
    print(head);
}
