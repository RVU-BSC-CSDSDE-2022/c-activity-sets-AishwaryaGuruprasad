#include <stdio.h>
int input()
{
  int a;
  printf("Enter the number\n");
  scanf("%d",&a);
  return a;
}
int largest(int a,int b,int c,)
{
  if(a>b && a>c)
    return a;
  else if(b>a && b>c)
    return b;
  else 
    return c;
}

int main()
{
  int e,f,g,h;
  e=input();
  f=input();
  g=input();
  h=largest(e,f,g);
  printf("Largest number amongst %d ,%d and %d is %d",e,f,g,h);
  
  return 0;
}