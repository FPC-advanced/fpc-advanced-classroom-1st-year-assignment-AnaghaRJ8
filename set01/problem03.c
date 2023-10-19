#include <stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main()
{
    int a,b,c;
    a=input();
    b=input();
    c=a+b;
    output(a,b,c);
    return 0;
}
int input()
{
int num;
printf("enter the number");
scanf("%d",&num);
return num;
}

int add(int a, int b)
{
int c;
c=a+b;
return c;
}
void output(int a, int b, int sum)
{
    printf("the sum is %d\n",sum);
}