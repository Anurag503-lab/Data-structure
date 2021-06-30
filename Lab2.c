#include <stdio.h>
#include <stdlib.h>
struct Stack
 {
   int size;
   int top;
   int *arr;
};
void create(struct Stack *st)
{
   printf("Enter Size\n");
   scanf("%d",&st->size);
   st->top=-1;
   st->arr=(int *)malloc(st->size*sizeof(int));
}
void Display(struct Stack st)
{
   int i;
  {
    for(i=st.top;i>=0;i--)
    printf("%d ",st.arr[i]);
    printf("\n");
  }
}
int isFull(struct Stack *st)
{
   if(st->top==st->size-1)
   {
      return 1;
   }
   else 
     return 0;
}
int isEmpty(struct Stack *st)
{
    if(st->top==-1)
    {
        return 1;
    }
    else 
        return 0;
}

void push(struct Stack *st,int x)
{
    if(isFull(st))
      printf("Stack overflow\n");
    else
      {     st->top++;
            st->arr[st->top]=x;
       }
 
}
int pop(struct Stack *st)
{
   int val;
   if(isEmpty(st))
   {
      printf("stack is empty\n");
      return ('\0');
   }
   else
   {
      printf("popped value \n");
      val=st->arr[st->top];
      st->top--;
      return val;
   }
}



int main()
{
 struct Stack st;
 int item,choice;
 create(&st);
 do{
 printf("1.push\n 2.Pop\n 3.Final Display\n 4.Exit\n");
 printf("enter the choice\n");
 scanf("%d",&choice);
 switch(choice){
     case 1:
        printf("enter the value to be pushed:");
        scanf("%d",&item);
        push(&st,item);
        printf("Stack after pushing the value\n");
        Display(st);
        break;
     case 2:
        printf("%d\n",pop(&st));
        break;
     case 3:
       printf("Final stack\n");
       Display(st);
       break;
     case 4:
       exit(0);
       break;  
       default:
        printf("Wrong choice\n");
 }
 }
 while(1);
 return 0;
}
