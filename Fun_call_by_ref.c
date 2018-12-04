#include<stdio.h>
void func_ref(int *p,int *q)
int main()
{
int a=10, b=20;
printf("\nValues before function call:\na=%d\nb=%d",a,b);
func_ref(&a,&b);
printf("\nValues before function call:\na=%d\nb=%d",a,b);
return 0
}
void func_ref(int *p,int *q)
{
*q= *q * *q;
*p=*p * *p;

}
