#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int * arr;
};

  void isempty(struct stack *ptr)
  {
    if(ptr->top==-1)
    {
       printf("stack is empty\n");
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
    return 0;
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
int main()
{
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));

    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));

    printf("stack has been created sucessfully\n");
    
      push(s,44);
       push(s,45);
       push(s,46);
      push(s,47);
       push(s,48);
       push(s,49);
       push(s,44);
      push(s,44);
      push(s,44);
      isempty(s);
      isfull(s);

    
    return 0;
}
