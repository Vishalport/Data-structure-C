#include<stdio.h>
#include<stdlib.h>
int Queue[5];
int rear = -1, front = - 1, choice;
void enQueue();
void edQueue();
void show();
void main() {
    printf("\n\n\n           :::::: WELLCOME :::::::          \n");
    while(1) {
        printf("\n\t1. enQueue();\n\t2. edQueue();\n\t3. show();\n\t4. Exit();");
        printf("\n\nEnter your choice  :  ");
        scanf("%d",&choice);
        switch(choice) {
            case 1 : 
            enQueue();
            break;

            case 2 :
            edQueue();
            break;

            case 3 :
            show();
            break;
            
            case 4 :
            exit(0);
            printf("\t\t\t :: EXIT ::");

            default :
            printf("::: ERROR ::::");

        }
    }
}
void enQueue(int data) {
    if(rear == 4 ) {
        printf(" ::  overflow  :: \n\n");
    }
    else { 
        if(front == -1 )
        front = 0;
        printf("\n\nEnter data -> : ");
        scanf("%d",&data);
        rear = rear + 1;
        Queue[rear] = data;
        printf("insseted data -> %d\n\n",data);
    }
}
void edQueue() {
    if(rear == -1) {
        printf("   :: underflow :: \n\n");
    }
    else { 
        printf(" %d <- is delatede \n\n",Queue[rear]);
        rear = rear - 1;
    }
}
void show(int i) {
    if(rear == -1)
        printf("  :: undrflow ::\n\n");
    else {
        for(i=front; i <= rear; i++)
        printf("%d ",Queue[i]);
    }
}