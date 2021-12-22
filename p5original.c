#include<stdio.h>
void input(int *a, int *b,int *c)
{
  printf("Enter the numbers:\n");
  scanf("%d%d%d",a,b,c);
}
void cmp(int a,int b,int c,int *large)
{
  if(a<b && c<b)
    *large=b;
  else if(a<c)
    *large=c;
  else
    *large=a;
}
void cmp1(int a,int b,int c,int *large)
{
  *large=(a>b)?(a>c?a:c):(b>c?b:c);
}
int main()
{
  int a,b,c,large;
  input(&a,&b,&c);
  cmp1(a,b,c,&large);
  printf("Largest value: %d\n",large);
  return 0;
}