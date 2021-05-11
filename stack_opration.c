/* 
===============================================================================
compelet code of stack: we are storing the data using array 
================================================================================
*/
#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
void main() {
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    /*
    ineretface of menu 
    */
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");  
    while(1)
    {
        /* 
        we are going to select any of the option: from menu
        */
        printf("\n Enter the Choice:"); 
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();  // this for add data 
                break;
            }
            case 2:
            {
                pop();    // this is for remove data
                break;
            }
            case 3:
            {
                display();  // show the data
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");      // come out to program
                break;
            }
            /*
            if you enter:  choice > 4 ( this default will be work)
            */
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)"); 
            }
                
        }
    }
}
/*
definition: to add input
*/
void push()
{
    /* 
       if there is no data in array 
       and we need to remove data 
    */
    if(top>=n-1)
    {
        printf("\n\tSTACK is overflow");  // no data in array
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top = top + 1;
        stack[top]=x;
    }
}
void pop()
{
    /*
    if you decided array size if full..
    and you are adding(push) datato the array
    */
    if(top == -1)
    {
        printf("\n\t Stack is undrflow");   // stack is full
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top = top -1;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
}