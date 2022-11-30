#include <stdio.h>
typedef struct
{
    float num, den;
} 
Fraction;

Fraction input()
{ Fraction f;
    printf("Enter the numerator and denomenator: \n");
	scanf("%f %f",&f.num,&f.den);
	return f;
}
int smallest(Fraction *f1, Fraction *f2, Fraction *f3)
{  int result;
   float fac1,fac2,fac3;
   fac1= f1->num/f1->den;
   fac2= f2->num/f2->den;
   fac3= f3->num/f3->den;
   if(fac1<fac2 && fac1<fac3)
  {
    result=-1;
    printf("The smallest of %0.1f/%0.1f, %0.1f/%0.1f and %0.1f/%0.1f is %0.1f/%0.1f",f1->num,f1->den,f2->num,f2->den,f3->num,f3->den,f1->num,f1->den);
  }
  else if(fac2<fac1 && fac2<fac3)
  {
    result=0;
     printf("The smallest of %0.1f/%0.1f, %0.1f/%0.1f and %0.1f/%0.1f is %0.1f/%0.1f",f1->num,f1->den,f2->num,f2->den,f3->num,f3->den,f2->num,f2->den);
  }
  else if(fac3<fac1 && fac3<fac2)
  {
    result=1;
    printf("The smallest of %0.1f/%0.1f, %0.1f/%0.1f and %0.1f/%0.1f is %0.1f/%0.1f",f1->num,f1->den,f2->num,f2->den,f3->num,f3->den,f3->num,f3->den);
    
  }
  else
  {
      printf("Error");
  }
   printf("%d",result);
  return result;
}
int main()
{
  Fraction f1,f2,f3;int s;
  f1=input();
  f2=input();
  f3=input();
  s=smallest(&f1,&f2,&f3);
  
}