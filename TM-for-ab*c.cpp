#include<stdio.h>
#define BlankSpace '\0'

int main()
{
    char inpstr[50];
    int head, state;
    printf("Enter String: ");
    scanf("%s",inpstr);
    state=0;
    head=0;
    printf("\n");
    printf("%s ", inpstr);
    while(1)
    {
         if(state==0)
         {
            if(inpstr[head]=='a')
            {
                state=1;
                inpstr[head++]='a';
            }
            else
            {
                state=4;
                break;
            }
         }
         else if(state==1)
         {
            if(inpstr[head]=='b')
            {
                state=1;
                inpstr[head++]='b';
            }
            else if(inpstr[head]=='c')
            {
                state=2;
                inpstr[head++]='c';
            }
            else
            {
                state==4;
                break;
            }
         }
         else if(state==2)
         {
            if(inpstr[head]==BlankSpace)
            {
                state=3;
                inpstr[head++]=BlankSpace;
                break;
            }
            else
            {
                state=4;
                break;
            }
         }
         else
         {
            state=4;
            break;
         }
    }

    if(state==3)
        printf("    Accepted");
    else
        printf("    Rejected");

    printf("\n");

    return 0;
}
