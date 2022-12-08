#include<stdio.h>
typedef struct
{
    int num, den;
} Fraction;
int input_n()
{ int n;
  printf("Enter the  number of fractions ");
  scanf("%d",&n);
  return n;
}
Fraction input_fraction()
{
  Fraction f;
  printf("Enter the  first numerator ");
  scanf("%d",&f.num);
  printf("Enter the  first denomenator ");
  scanf("%d",&f.den);
  return f;
}
void input_n_fractions(int n, Fraction f[n])
{
  for(int i=0;i<n;i++)
    f[i]=input_fraction();
}
int find_gcd(int a, int b)
{  int hcf;
    for(int i=1; i<=a&& i<=b; i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf = i;
        }
    }
    return hcf;
}
Fraction add_fractions(Fraction f1, Fraction f2)
{  Fraction sum;
  sum.num = (f1.num*f2.den)+(f2.num*f1.den);
  sum.den = f1.den*f2.den;
  return sum;
}
Fraction add_n_fractions(int n, Fraction f[n])
{ Fraction result;
  for(int i=0;i<n;i++)
   result = 
}
void output(Fraction sum)
{
  printf("%d/%d",,sum.num,sum.den);
  }
int main()
{
  int n;
  n=input_n();
  Fraction f[n];
  input_n_fractions(n,f);
  sum=add_fractions(f1,f2);
  output(sum);
  
}