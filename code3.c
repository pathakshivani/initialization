#include<stdio.h>
#include<conio.h>


long int fact(int n);
int main()
{
     int n;
printf("enter a postive integer");
scanf("%d",&n);
printf("factorial of %d=%!d",n,fact(n));
}
long int fact(int n)
{
    if (n>=1)
    {
       return n*fact (n-1);
    }
    else
    {
        return 1;
    }
}














}









