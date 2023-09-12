#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int * arr;
};

  int isempty(struct stack *ptr)
  {
    if(ptr->top==-1)
    {
       printf("stack is empty\n");
    }
    {
     return 0;
    }
  }
  
 int isfull(struct stack *ptr)
  {
    if(ptr->top==ptr->size-1)
    {
        printf("stack is full\n");
    }
    else

  {
    return 0 ;
  }
  }
  
  void push(struct stack* ptr,int val)
  {
    if(isfull(ptr))
    {
      printf("overflow\n");
    }
    else{
      ptr->top++;
      ptr->arr[ptr->top]=val;
    }
  }
  void pop(struct stack* ptr)
  {
    if(isempty(ptr)){
      printf("underflow !can't pop from stack\n");
    }
    else 
    {
      int val=ptr->arr[ptr->top];
      ptr->top--;

    }
  }
int main()
{
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));

    s->size=4;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));

    printf("stack has been created sucessfully\n");

    //push(s,44);
    //push(s,44);
    //push(s,44);
    isfull(s);
    isempty(s);
      
            
     pop(s);

    
    return 0;
}
