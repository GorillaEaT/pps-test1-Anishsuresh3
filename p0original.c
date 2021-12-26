#include<stdio.h>
int main()
{
  char s[50];
  printf("Enter your name:\n");
  //gets(s);
  scanf("%[^\n]",s);
  printf("%s",s);
  return 0;
}
