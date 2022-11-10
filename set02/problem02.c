#include<stdio.h>
#include<math.h>
void input_camel_details(float *radius,float *height,float *lenght)
{
  printf("Enter the radius\n");
  scanf("%f",radius);

  printf("Enter the height\n");
  scanf("%f",height);

  printf("Enter the lenght\n");
  scanf("%f",lenght);
  }

  float find_weight(float radius,float height,float lenght)
  { //weight = pi * stomach_radius^3 * sqrt(height * length)`
    float weight;
    weight= 3.14*(pow(radius,3))* (sqrt(height*lenght));
    return weight;
    
  }
  int main()
  {
    float e,f,g,h;
    input_camel_details(&e,&f,&g);
    h = find_weight(e,f,g);
    printf("The weight of camel is %f\n",h);
    return 0;
  }