#include<stdio.h>
int main()
{
    int i,num;
    printf("enter a number");
    scanf("%d",&num);
    for (i=1 ; i<=num ; ++i)
    {
        printf("%dx",i);

    }
    return 0;
}