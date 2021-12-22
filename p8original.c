#include<stdio.h>
#include<math.h>
float input()
{
  float f;
  printf("Enter the number:\n");
  scanf("%f",&f);
  return f;
}
float my_sqrt(float n)
{
  return sqrt(n);
}
void output(float n, float sqrt_result)
{
  printf("square root of %f if %f\n",n,sqrt_result);
}
int main()
{
  float n=input();
  float r=my_sqrt(n);
  output(n,r);
  return 0;
}