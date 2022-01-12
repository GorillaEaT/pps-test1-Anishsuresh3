#include<stdio.h>
int input()
{
  int q;
  scanf("%d",&q);
  return q;
}
int add(int x,int y)
{
  int sum=x+y;
  return sum;
}
void output(int c,int d,int sum)
{
  printf("sum of %d+%d is %d\n",c,d,sum);
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