#include<stdio.h>
int input()
{
  int a;
  printf("Enter the number\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  
  if(a<b && c<b)
     return b;
  else if(a<c)
     return c;
  else
     return a;
}
int cmp1(int a,int b,int c)
{
  int l;
  l=(a>b)?(a>c?a:c):(b>c?b:c);
  return l;
}
void output(int l)
{
  printf("Largest value: %d\n",l);
}
int main()
{
  int a,b,c,r;
  a=input();
  b=input();
  c=input();
  r=cmp1(a,b,c);
  output(r);
  return 0;
}
