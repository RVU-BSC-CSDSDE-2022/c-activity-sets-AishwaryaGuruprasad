#include <stdio.h>
#include <math.h>

struct camel
{
	float radius, height, length,weight;
};
typedef struct camel Camel;


Camel input()
{ Camel c;
  printf("Enter the radius\n");
  scanf("%f",&c.radius);

  printf("Enter the height\n");
  scanf("%f",&c.height);

  printf("Enter the lenght\n");
  scanf("%f",&c.length);
  return c;
}
void find_weight(Camel *c) 
{
   c->weight= 3.14*( pow(c->radius,3))*(sqrt(c->height*c->length));
   
}
void output(Camel c)
{ 
  printf("The weight of camel is %f\n",c.weight);
}
int main()
  {
   Camel z;
  z= input();
  find_weight(&z);
    output(z);
  }