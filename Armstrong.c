#include <stdio.h>

int main()
{
    int l,p,r,x;
    printf("enter the num: ");
    scanf("%d",&l);
    x=l;
    p=0;
    while(l!=0)
    {
     r=l%10;
     l=l/10;
     p=p+(r*r*r);
    }
    if(p==x)
    {
        printf("num: is armstrong");
    }
    else
    {
        printf("num: is not armstrong");
    }

    return 0;
}
