//print multiplication table of n..
#include<stdio.h>
main()
{
    int i=1,n,b;
    printf("Enter a value of n= ");
    scanf("%d",&n);
    while(i<=10)
    {
        b=n*i;
        printf("\n%d",b);
        i=i+1;
    }
}

