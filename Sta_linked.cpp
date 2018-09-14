#include <iostream>
#include <string.h>
 
using namespace std;
 
struct Node{
    int no;
	Node *next;
};
Node *top;
 
class stack{
 
public:
    void push(int n);
    void pop();
    void display();
};
 
void stack :: push(int n)
{
    struct Node *newNode=new Node;
    
    newNode->no=n;
    newNode->next=top;
    
    top=newNode;
}
void stack ::pop()
{
    if(top==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    cout<<top->no<<"is removed"<<" ";
    top=top->next;
}
void stack:: display()
{
if(top==NULL){
        cout<<"List is empty!"<<endl;
        return;
    }
    struct Node *temp=top;
    while(temp!=NULL){
        cout<<temp->no<<" ";
        cout<<endl;
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
 
    stack s;
    char ch;
    do{
    int n;
     
    cout<<"ENTER CHOICE\n"<<"1.Push\n"<<"2.Pop\n"<<"3.Display\n";
    cout<<"Make a choice: ";
    cin>>n;
     
    switch(n){
        case 1:  
            Node nn;
            cout<<"Enter a number";
            
            cin>>nn.no;
            
             
            //push data into the stack
            s.push(nn.no);
            break;
         
        case 2 : 
            //pop data from stack
            s.pop();
            break;
         
        case 3 : 
            //display data
            s.display();
            break;
             
        default : 
            cout<<"Invalid Choice\n";
    }
     
    cout<<"Do you want to continue ? : ";
    cin>>ch;
 
    }while(ch=='Y'||ch=='y');
     
    return 0;
}
