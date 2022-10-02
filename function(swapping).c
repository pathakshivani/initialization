#include<stdio.h>
#include<conio.h>
swap(int a,int b)
{
    int shi;
   printf("before swapping:\nEnter first no.=%d\nEnter second no.=%d\n",a,b);

   shi=a;
   a=b;
   b=shi;

   printf("before swapping:\nenter first no.:=%d\nenter second no.=%d\n",a,b);

}

   int main()
{

    int a,b,shi;
    printf("enter 2 integer\n");
    scanf("%d%d",&a,&b);
    swap(a,b);

    return 0;

}
