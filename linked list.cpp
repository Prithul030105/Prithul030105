#include<iostream>
using namespace std;
//linked list creation
struct node{
    int data;
    node* next;

    node(int new_data){
        this->data=new_data;
        this->next=nullptr;
    }
};

//insertion at the begining
node* insertatfront(node*head,int new_data){
    node*new_node=new node(new_data);
    new_node->next=head;
    return new_node;


}//insertion after
node*insertafter(node*head,int key,int new_data){
    node*curr=head;
    while(curr!=nullptr){
        if(curr->data==key){
            break;
        }
        else if(curr->data==key){
            return head;
            
        }

        }
        node*newnode=new node(new_data);
        newnode->next=curr->next;
        curr->next=newnode;
        return head;
    }
void printlist()

    


int main(){
    
    return 0;
}
