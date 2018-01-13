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
            if(inpstr[head]=='1')
            {
                state=1;
                inpstr[head++]='X';
            }
            else if(inpstr[head]=='Y')
            {
                state=3;
                inpstr[head++]='Y';
            }
            else
            {
                state=5;
                break;
            }
        }
        else if(state==1)
        {
            if(inpstr[head]=='1')
            {
                state=1;
                inpstr[head++]='1';
            }
            else if(inpstr[head]=='Y')
            {
                state=1;
                inpstr[head++]='Y';
            }
            else if(inpstr[head]=='0')
            {
                state=2;
                inpstr[head--]='Y';
            }
            else
            {
                state==5;
                break;
            }
        }
        else if(state==2)
        {
            if(inpstr[head]=='1')
            {
                state=2;
                inpstr[head--]='1';
            }
            else if(inpstr[head]=='Y')
            {
                state=2;
                inpstr[head--]='Y';
            }
            else if(inpstr[head]=='X')
            {
                state=0;
                inpstr[head++]='X';
            }
            else
            {
                state=5;
                break;
            }
        }
        else if(state==3)
        {
            if(inpstr[head]=='Y')
            {
                state=3;
                inpstr[head++]='Y';
            }
            else if(inpstr[head]==BlankSpace)
            {
                state=4;
                inpstr[head]=BlankSpace;
                break;
            }
            else
            {
                state=5;
                break;
            }
        }
        else
        {
            state=5;
            break;
        }
    }

    if(state==4)
        printf("    Accepted");
   else
        printf("    Rejected");

    printf("\n");

    return 0;
}
