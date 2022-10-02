#include<stdio.h>
#include<conio.h>
int max(int n1,int n2 );
int min(int n1,int n2);
void main()
{
    int n1,n2,maximum,minimum;
    {
        printf("enter number--");
        scanf("%d",&n1);
    }

    {
        printf("enter number--");
        scanf("%d",&n2);
    }
    maximum=max(n1,n2);
    minimum=min(n1,n2);

    {
        printf("maximum=%d\n",maximum);
    }
    {
        printf("minimum=%d",minimum);
    }
    return 0;
}
int max(int n1, int n2)
{
    return(n1>n2) ? n1:n2;
}
int min(int n1, int n2)
{
    return(n2>n1)? n1 :n2;
}



