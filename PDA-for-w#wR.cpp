#include<stdio.h>
#define EOS '\0'
#define SIZE 101

char Stck[SIZE];
int top=-1;

void push(char symb) 
{
    Stck[++top]= symb;
}

char pop(void) 
{
    return  Stck[top--];
}

int main()
{
    char c,inpstr[SIZE];
    int q,i;
    scanf("%s",inpstr);
    printf("\n");
    printf("%s ",inpstr);
    q=1;
    i=0;
    c=inpstr[i];
    while(true)
    {
        if(q==1)
        {
            q=2;
            push('$');
        }
        if(q==2) 
        {
            if(c=='0')  
            {
                q=2;
                push(c);
            }
            else  if(c=='1')  
            {
                q=2;
                push(c);
            }
            else  if(c=='#')  
            {
                q=3;
            }
            else   
            {
                q=5;
                break;
            }
        }
        else  if(q==3)  
        {
            if(c=='0'  &&  Stck[top]=='0')  
            {
                q=3;
                pop();
            }
            else if(c=='1'  &&  Stck[top]=='1')  
            {
                q=3;
                pop();
            }
            else if(c==EOS  &&  Stck[top]=='$')  
            {
                q=4;
                break;
            }
            else    
            {
                q=5;
                break;
            }
        }
        else    
        {
            q=5;
            break;
        }
        i++;
        c=inpstr[i];
    }

    if(q==5)
        printf("    Rejected");
    if(q==4)
        printf("    Accepted");

    printf("\n");

    return  0;
}
