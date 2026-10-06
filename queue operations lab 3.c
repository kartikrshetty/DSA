#include<stdio.h>
#define MAX 4

int front=-1;
int rear=-1;
int queue[MAX];

void enqueue(int ele);
void dequeue();
void display();

int main(){
    int choice;
    int ele;
    while(1){
        printf("---MENU---\n");
        printf("1.insert\n2.delete\n3.display\n4.exit\n");
        printf("enter the choice : ");
        scanf("%d",&choice);
        if(choice==1){
            printf("enetr the element: ");
            scanf("%d",&ele);
            enqueue(ele);
        }
        else if(choice==2)
            dequeue();
        else if (choice==3)
            display();
        else if(choice==4){
            printf("exiting the program");
            break;
        }
        else
            printf("invalid choice\n");
    }
            return 0;
}

void enqueue(int ele){
    if(rear==MAX-1){
        printf("queue full!\n");
        return;
    }
    if(front==-1)
        front=0;
    rear++;
    queue[rear]=ele;
    printf("the inserted element is %d\n",ele);
}

void dequeue(){
    if(front==-1||front>rear){
        printf("queue is empty!!");
        return;
    }
    printf("the deletd element is %d\n",queue[front]);
    front++;
    if(front>rear){
        front==-1;
        rear==-1;
    }
}

void display(){
int i;
if(front==-1)
    printf("queue empty!!");

printf("queue elements are: ");
for(i=front;i<=rear;i++){
       printf("%d",queue[i]);
        printf("\n");
}

}
