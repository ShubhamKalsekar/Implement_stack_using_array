#include<stdio.h>
int st[4],choice,n, top, x,i;
void push(void);
void pop(void);
void display(void);

int main()
{
    top=-1;
    printf("\n Enter the size of stack[max=4]: ");
    scanf("%d",&n);

    printf("\n\t stack operation using array");
    printf("\n\t------  -   --  -   -   -   -  -    --  --  -   -");
    printf("\n\t 1.push \n\t 2.pop \n\t 3.Display \n\t 4.Exit");

    do {
        printf("\n Enter the Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            {
                push();
                break;
            }
        case 2:
            {
                pop();
                break;
            }
        case 3:
            {
                display();
                break;
            }
        case 4:
            {
                printf("\n\t Exit point");
                break;
            }
        default:
            {
                printf("\n\t Please Enter a valid choice (1/2/3/4): ");

            }
        }
    }
    while(choice!=4);
    return 0;

}
void push(){
if(top>=n-1)
    {
        printf("\n\t Stack is overflow");
    }
    else
        {
        printf("Enter a value to be pushed: ");
        scanf("%d",&x);
        top++;
        st[top] == x;
        }
}

void pop()
{
    if(top<=-1)
    {
        printf("\n\t Stack is underflow ");

    }
    else
    {
        printf("\n\t The popped element is %d ",st[top]);
        top--;
    }
}
void display()
{
    if(top>=0){
        printf("\n element in stack \n");
        for(i=top;i>=0;i--)
            printf("\n%d",st[i]);
        printf("\n Press Next choice: ");
    }
    else {
        printf("\n The stack is empty");
    }
}

