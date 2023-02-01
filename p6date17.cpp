//insert,delete,peek,display operation on stack
#include<iostream>
using namespace std;
int top=-1;
int siz=10;
int stack[10];
void Push(){
    int n;
    if(top==siz-1){
        cout<<"Stack is overflow\n";
    }
    else{
        printf("enter a element\n");
        cin>>n;
        stack[++top]=n;
    }
}
void Delete(){
    int n;
    if(top==-1){
        cout<<"Stack is underflow\n";
    }
    else{
        n=stack[top--];
        cout<<n<<" is deleted\n";
    }
}
void Display(){
    if(top==-1)
        cout<<"Stack is empty\n";
    else{
        cout<<"\nstack elements are: ";
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<" ";
        }
    }
}
void Peek(){
    if(top==-1){
        cout<<"stack is empty\n";
    }
    else
        cout<<stack[top];
}
int main(){
    int ch;
    while(1){
        cout<<"\nenter 1 for insert a element\n";
        cout<<"enter 2 for delete a element\n";
        cout<<"enter 3 for display a element\n";
        cout<<"enter 4 for peek a element\n";
        cout<<"enter 5 for exit\n";
        cout<<"enter your choice\n";
        cin>>ch;
        switch(ch){
        case 1:
            Push();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Display();
            break;
        case 4:
            Peek();
            break;
        default:
            exit(0);
        }
    }
}
