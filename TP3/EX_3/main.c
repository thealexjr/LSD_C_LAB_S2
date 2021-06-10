#include "stack.h"

int main()
{
    t_stack *S=new_stack(5);
    push(&S,7);
    push(&S,2);
    print_stack(S);
    printf("%d\n",stack_len(S));
    printf("%d\n",peek_stack(S));
    pop(&S);
    print_stack(S);
    return 0;
}
