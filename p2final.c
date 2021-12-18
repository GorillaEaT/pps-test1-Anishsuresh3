#include<stdio.h>
int input()
{
  int a;
  scanf("%d",&a);
  return a;
}
int add(int a,int b)
{
  int sum=a+b;
  return sum;
}
void output(int a,int b,int sum)
{
  printf("sum of %d+%d is %d",a,b,sum);
}
int main()
{
  int a,b,s;
  a=input();
  b=input();
  s=add(a,b);
  output(a,b,s);
  return 0;
}