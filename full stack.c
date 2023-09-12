#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int top;
    int * arr;
};
 void stackisfull(struct stack * ptr)
 {
    if(ptr->top==ptr->size-1)
{
    printf("stack is full\n");
}
else
{
    printf("stack is not full\n");
}
 }
int main()
{
    struct stack *s;
    s->size=6;
    s->top=-7;
    s->arr=(int *)malloc(s->size * sizeof(int));
    //pushing element
    s->arr[0]=7;
     s->top++;

     stackisfull(s);

    
    return 0;
}
