#include<stdio.h>
void input_camel_details(float *radius,float *height,float *lenght)
{
  printf("Enter the radius\n");
  scanf("%f",radius);

  printf("Enter the height\n");
  scanf("%f",height);

  printf("Enter the lenght\n");
  scanf("%f",lenght);
  }

int find_mood(float radius, float height, float length)
{ int mood;
  if(radius<height && radius<length)
    {mood = -1;}
  else if(height<radius && height<length)
    {mood = 0;}
  else if(length<radius && length<height)
    {mood = 1;}
  return mood;
}
void output(float radius, float height, float length, int mood)
{
  if(mood==-1)
    printf("Camel id sick");
  else if(mood==0)
    printf("Camel is happy");
  else 
    printf("Camel is tense");
}

int main()
  {
    float a,b,c,d;
    input_camel_details(&a,&b,&c);
    m = find_mood(a,b,c);
    output(a,b,c,d);
    return 0;
  }
