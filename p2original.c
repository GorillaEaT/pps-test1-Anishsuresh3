#include<stdio.h>
int harsha()
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
  printf("sum of %d+%d is %d",c,d,sum);
}
int main()
{
  int a,b,s;
  a=harsha();
  b=harsha();
  s=add(a,b);
  output(a,b,s);
  return 0;
}