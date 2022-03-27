#include<stdio.h>
int input()
{
  int a;
  printf("enter a nuber\n");
  scanf("%d",&a);
  return a;
  }
int cmp(int a,int b,int c)
{
  int largest;
  if((a>b)&&(a>c))
    printf("A is big\n");
  else if((b>a)&&(b>c))
  printf("B is big \n");
  else if((c>a)&&(c>b))
  printf("C is big\n");
  }
void output(int a,int b,int c,int largest)
{
  printf("the largest number is %d\n",largest);
  }
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  return 0;
  }