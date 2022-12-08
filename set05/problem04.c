#include <stdio.h>
#include <math.h>

int input_degree()
{ int n;
  printf("Enter the degree of the polyomial :");
  scanf("%d",&n);
  return n;
}
void input_coefficients(int n, float a[n])
{
  for(int i=0;i<n;i++)
    {
      printf("Enter co-efficient %d :",i);
      scanf("%f",&a[i]);
    }
}
float input_x()
{
  float x;
  printf("Enter the degree of the polyomial :");
  scanf("%f",&x);
  return x;
}
float evaluate_polynomial(int n, float a[n], float x)
{ float sum=0;
  for(int i=0;i<n;i++)
    {
      sum=sum+a[i]+pow(x,i);
    }
  
  return sum;
}
void output(int n, float a[n], float x, float result)
{
  printf("Result is %f",result);
}
int main()
{
  int n; float x,result;
  n=input_degree();
  float a[n];
  input_coefficients(n,a);
  x=input_x();
  result= evaluate_polynomial(n,a,x);
  output(n,a,x,result);
}
