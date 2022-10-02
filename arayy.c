#include<stdio.h>
#include<conio.h>
void main()
{
    int a[8];
    int i;
    for (i=0;i<=7;i++)
    {
        printf("enter the no--");
        scanf("%d",&a[i]);
    }
    for(i=0;i<=7;i++)
    {
        printf("%d",a[i]);
    }
}
