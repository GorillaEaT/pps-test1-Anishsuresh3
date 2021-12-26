#include<stdio.h>
void input_two_strings(char *a,char *b)
{
    printf("Enter two strings:\n");
    scanf("%s%s",a,b);
}
int strcmpp(char *a,char *b)
{
    int i,c=0,d=0;
    for (i=0;a[i]!='\0';i++)
        c+=a[i];
    for (int j=0;b[j]!='\0';j++)
        d+=b[j];
    if(c<d)
      return 1;
    else if(c>d)
      return 0;
    return -1;
}
void output(char *a,char *b,int result)
{
    if(result==1)
      printf("%s is greater than %s\n",b,a);
    else if(result==0)
      printf("%s is greater than %s\n",a,b);
    else
      printf("%s is equal to %s\n",a,b);
}
int main(){
    char a[20],b[20];
    input_two_strings(a,b);
    int r=strcmpp(a,b);
    output(a,b,r);
    return 0;
}