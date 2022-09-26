#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,s=0,arr[100],k;
    printf("Enter the max. no. of numbers:");
    scanf("%d",&n);
    printf("Enter the numbers.\n ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    k=s/n;
    printf("The average is %d.",k);
    
    return 0;
}
