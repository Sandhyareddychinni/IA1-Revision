#include<stdio.h>
int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return 0;
}
int cmp(int a, int b, int c)
{
  int l;
  if((a>b)&&(a>c))
  printf("A is big\n");
  else if((b>a)&&(b>c))
  printf("B is big\n");
  else 
  printf("C is big\n");
  return 0;
}
void output(int a,int b, int l)
{
  printf("largest number is %d\n",l);
}
int main()
{
  int a,b,c,l;
  a=input();
  b=input();
  c=input();
  l=cmp(a,b,c);
  return 0;
}