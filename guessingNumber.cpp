#include<stdio.h>

void swap (int,int);
void main()    
{
int a,b;
printf("enter two number");
scanf ("%d%d,&a,b");
swap(a,b);
a=7;b=8;
printf("a=%d",a);

printf("b=%d",b);
getchar();
}