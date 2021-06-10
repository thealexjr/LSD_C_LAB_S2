#include "header.h"


int RPN(char *c){
    t_stack **head=NULL;
    fwrite(1,"h",1);
    if (!isdigit(c[0])){
            printf("Error");
            return 0;
        }
  int a;
    for (int i=0;i<strlen(c);i++){
        if (isdigit(c[i])){
            a=atoi(&c[i]);
            push(head,a);
        }
        while (stack_len(*head)>2){
            if (!isdigit(c[i])){
                if (c[i]=='+')
                        push(head,(pop(head)+pop(head)));
                        return 0;
                if (c[i]=='-')
                        push(head,(pop(head)-pop(head)));
                        return 0;
                if (c[i]== '/')
                        push(head,(pop(head)/pop(head)));
                        return 0;
                if (c[i]== '*')
                        push(head,(pop(head)*pop(head)));
                        return 0;   
                if (c[i]== '%')
                        push(head,(pop(head)%pop(head)));
                        return 0; 
            }
        }
    }
    return pop(head);
}
