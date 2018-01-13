#include<stdio.h>
#define EOS '\0'

int main()
{
    char c, inpstr[50];
    int i, q;
    printf("Enter String: ");
    scanf("%s",inpstr);
    q=1;
    i=0;
    c=inpstr[i];
    printf("\n");
    printf("%s ", inpstr);
    while(c!=EOS)
    {
        if(q==1 && c=='a')
        {
            q=2;
        }
        else if(q==2 && c=='b')
        {
            q=2;
        }
        else if(q==2 && c=='c')
        {
            q=3;
        }
        else if(q==3 && c=='b')
        {
            q=3;
        }
        else
        {
            q=4;
            break;
        }

        i++;
        c=inpstr[i];
    }

    if(q==4)
        printf("    Illegal");
    else
        printf("    Legal");

    printf("\n");

    return 0;
}
