#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int * arr;
};
 void stackisempty(struct stack * ptr)
 {
    if(ptr->top==-1 || ptr->top==-2)
{
    printf("stack is empty\n");
}
else
{
    printf("stack is full\n");
}
 }
int main()
{
    struct stack *s;
    s->size=80;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));
     stackisempty(s);

    
    return 0;
}
