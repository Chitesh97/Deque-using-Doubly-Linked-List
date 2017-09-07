#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;
};

class Linked_list{
public:
    node* start;
    node* temp;
    node* newnode;
    int n,pos;

    void create_node()
    {
        newnode = new node();
        cin>>newnode->data;
        newnode->next = NULL;
    }
    void deletion(){
        node* temp, * temp2;
        temp =start;
        int n,k;
        cout<<endl<<"Enter value of n"<<endl;
        cin>>n;
        cout<<endl<<"Enter value of k"<<endl;
        cin>>k;
        while(temp)
        {
            for(int i=0; i<(n-1) /*&& temp!= NULL*/; i++)
            {
                temp = temp->next;
            }
            if(temp == NULL)
                return;
            temp2 = temp;
            for(int j=0; j<=k /*&& temp2!=NULL*/; j++)
            {
                temp2= temp2->next;
            }
            temp->next = temp2;
            temp = temp2;
        }
    }
    void insertion_end()
    {
        start = NULL;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            create_node();
            if(start == NULL){
                start = newnode;
            }
            else{
                temp = start;
                while(temp->next != NULL){
                    temp = temp->next;
                }
                temp->next = newnode;
            }

        }
    }
    void display(){
        cout<<"display"<<endl;
        temp = start;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};
int main(){
    Linked_list t;
    t.insertion_end();
    t.deletion();
    t.display();
    return 0;
}



