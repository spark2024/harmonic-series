#include<stdio.h>

int main()
{   int i,n;
printf("\n        \\Hormonic series// ");
    printf("\nEnter any number : ");
    scanf("%d",&n);
    for(i=1; i<n; i++)
    {
      
        printf("1/%d +",i);
    }
    if(n==i)
    printf(" 1/%d",i);
    return 0;
}
