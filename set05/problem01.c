#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the  first numerator ");
  scanf("%d",num1);
  printf("Enter the  first denomenator ");
  scanf("%d",den1);
  printf("Enter the  second numerator ");
  scanf("%d",num2);
  printf("Enter the  second denomenator ");
  scanf("%d",den2);
  
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
  *res_num = (num1*den2)+(num2*den1);
  *res_den = den1*den2;
  int hcf;
    for(int i=1; i<= *res_num && i<=*res_den; i++)
    {
        if(*res_num%i==0 && *res_den%i==0)
        {
            hcf = i;
        }
    }
    *res_num/=hcf;
    *res_den/=hcf;
}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
  printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,res_num,res_den);
  }
int main()
{
  int n1,n2,d1,d2,n,d;
  input(&n1,&d1,&n2,&d2);
  add(n1,d1,n2,d2,&n,&d);
  output(n1,d1,n2,d2,n,d);
  
}