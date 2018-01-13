#include<stdio.h>
#define EOS '\0'

int islet(char c) 
{
    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        return 1;
    return 0;
}

int isdig(char c) {
    if(c>='0' && c<='9')
        return 1;
    return 0;
}

int main() {
    char c, inpstr[50];
    int i, q;
    printf("Enter C identifier: ");
    scanf("%s",inpstr);
    q=1;
    i=0;
    c=inpstr[i];
    printf("\n");
    printf("%s ", inpstr);
    while(c!=EOS) {
        if(q==1 && islet(c)) {
            q=2;
        }
        else if(q==2 && (islet(c) || isdig(c))) {
             q=2;
        }
        else {
             q=3;
             break;
        }

        c=inpstr[i++];
    }

    if(q==3)
        printf("    Illegal");
    else
        printf("    Legal");

    printf("\n");

    return 0;

}
