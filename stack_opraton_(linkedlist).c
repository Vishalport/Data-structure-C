#include<stdio.h>
#include<conio.h>
void push();
void pop();
void show();
struct node {
    int data;
    struct node *link;
}
void main() {
    int choice = 0;
    int size,data,i,top = -1;
    printf("\n\t\t-------------------------------------------");
    printf("\n\t\t\t\t WELLLCOME ");
    printf("\n\t\t--------------------------------------------");
    printf("Enter the size of stack : ");
    scanf("%d",&size);
    while(choice != 4) {
        printf("\n\n\t\t\t\t stack opration using linked list :");
        printf("\n\t\t1. push();\n\t\t2. pop();\n\t\t3. show();\n\t\t4. Exit(0);");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice) {
            case 1 : {
                push();
                break;
            }
            case 2 : {
                pop();
                break;
            }
            case 3 : {
                show();
                break;
            }
            case 4 : {
                exit(0);
                printf("\n\n\t\t\t----its EXIT----");
            }
            default : {
                printf("Enter the valid information undear[1/2/3/4]");
            }
        }
    }
}