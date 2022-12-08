#include<stdio.h>
typedef struct
{
    int num, den;
} Fraction;
Fraction input_fraction()
{
  Fraction f;
  printf("Enter the  first numerator ");
  scanf("%d",&f.num);
  printf("Enter the  first denomenator ");
  scanf("%d",&f.den);
  return f;
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
  int hcf;
    hcf=find_gcd(sum.num,sum.den);
    sum.num/=hcf;
    sum.den/=hcf;
  return sum;
}
void output(Fraction f1, Fraction f2, Fraction sum)
{
  printf("%d/%d + %d/%d = %d/%d",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
  }
int main()
{
  Fraction f1,f2,sum;
  f1=input_fraction();
  f2=input_fraction();
  sum=add_fractions(f1,f2);
  output(f1,f2,sum);
  
}