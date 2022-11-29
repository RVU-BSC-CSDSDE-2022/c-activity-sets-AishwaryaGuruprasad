#include <stdio.h>
typedef struct
{
    int num, den;
} Fraction;
void input(Fraction *f)
{
 
  printf("Enter the numerator and denomenator: \n");
	scanf("%d %d",&f->num,&f->den);
	
}
int smallest(Fraction *f1, Fraction *f2, Fraction *f3)
{ int result;
  int r1,r2,r3;
  r1=f1->num/f1->den;
   r2=f2->num/f2->den;
   r3=f3->num/f3->den;
  if(r1<r2 && r1<r3)
  { result=-1;}
  else if(r2<r1 && r2<r3)
   { result=0;} 
  else
  {
    result=1;
  }
  return result;
}
void output(Fraction *f1, Fraction *f2, Fraction *f3,int result)
{
  if(result==-1)
  {
  printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d",f1->num,f1->den,f2->num,f2->den,f3->num,f3->den,f1->num,f1->den);
  }
   if(result==0)
  {
  printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d",f1->num,f1->den,f2->num,f2->den,f3->num,f3->den,f2->num,f2->den);
  }
   if(result==1)
  {
  printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d",f1->num,f1->den,f2->num,f2->den,f3->num,f3->den,f3->num,f3->den);
  }
}
int main()
{
  Fraction f1,f2,f3;int s;
  input(&f1);
  input(&f2);
  input(&f3);
  s=smallest(&f1,&f2,&f3);
  output(&f1,&f2,&f3,&s);
}