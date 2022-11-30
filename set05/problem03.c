#include <stdio.h>
void input_n_and_r(int *n, int *r)
{
  printf("Enter the values of n and r :\n");
  scanf("%d %d",n,r);
}
int fact(int n)
{
  int res = 1;   
           for (int i = 2; i <= n; i++)   
           res = res * i;   
  return res;   
}
int nCr(int n, int r)
{
  int result;
  result= fact(n)/(fact(r)*fact(n-r));
  return result;
}
void output(int n, int r, int result)
{
  printf("For n = %d and r = %d, nCr = %d",n,r,result);
}
int main()
{
  int n,r,result;
  input_n_and_r(&n,&r);
  result=nCr(n,r);
  output(n,r,result);
}