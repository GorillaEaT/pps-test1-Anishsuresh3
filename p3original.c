#include<stdio.h>
void input(int a,int b)
{
  int c,d;
  c=a;
  d=b;
}
void add(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("sum of %d+%d is %d",a,b,sum);
}
int main()
{
  int a,b,s=0;
  printf("Enter two number:\n");
  scanf("%d%d",&a,&b);
  input(a,b);
  add(a,b,&s);
  output(a,b,s);
  return 0;
}