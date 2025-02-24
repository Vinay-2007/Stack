#include<stdio.h>
#include<stdlib.h>
#define MAX 4
struct stack
{
    int items[MAX];
    int top;
};
void push(struct stack*,int);
int pop(struct stack*);
void display(struct stack*);
int peek(struct stack*);
int main()
{
    int ch,ele;
    struct stack st;
    st.top=-1;
    
    while(1)
    {
        
        printf("\n1.Push\n2.pop\n3.display\n4.peek\n5.Exit");
        printf("\nEnter your option\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
                printf("Enter element to insert\n");
                scanf("%d",&ele);
                push(&st,ele);
                break;
        case 2:
                ele=pop(&st);
                if(ele==-1)
                {
                    printf("Stack is empty");
                }
                else
                {
                    printf("Removed element is %d\n",ele);
                }
                break;
        case 3:
                display(&st);
                break;
        case 4:
                ele=peek(&st);
                if(ele==-1)
                {
                    printf("Stack is empty");
                }
                else
                {
                    printf("The top element is %d\n",ele);
                }
                break;
        case 5:
                exit(0);
                break;
        default:
                printf(" Enter the valid Choice");  
                break;
        }
    }
    

    return 0;
}
void push(struct stack *stp,int ele)
{
    if(stp->top==MAX-1)
    {
        printf("Overflow");
    }
    else
    {
        stp->top=stp->top+1;       
        stp->items[stp->top]=ele;
    }
}
int pop(struct stack *st)
{
    int ele;
    if(st->top==-1)
    {
        return -1;
    }
    else
    {
        ele=st->items[st->top];
        st->top=st->top-1;
        return ele;
    }
}
int peek(struct stack *st)
{
    int ele;
    if(st->top==-1)
    {
        return -1;
    }
    else
    {
        ele=st->items[st->top];
        return ele;
    }
}
void display(struct stack *st)
{
    int i;
    if(st->top==-1)
    {
        printf("UnderFlow");
    }
    else
    {
        for(i=st->top;i>=0;i--)
        {
            printf("|%d|\n",st->items[i]);
        }
    }
}
