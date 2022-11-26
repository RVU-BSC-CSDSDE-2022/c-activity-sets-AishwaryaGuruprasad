#include <stdio.h>
#include <math.h>
typedef struct _triangle
{
	float base, height, area;
} Triangle;

int input_n()
{
  int n;
  printf("Enter the number of triangles:");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base and height of the triangle: \n");
	scanf("%f%f",&t.base,&t.height);
	return t;
}
void input_n_triangles(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
  {t[i] = input_triangle();}
}
void find_area(Traingle *t)
{
  t.area=(t.base*t.height)/2;
}
void find_n_areas(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
  {t[i] = input_triangle();}
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  
}
void output(int n, Triangle t[n], Triangle smallest)
{
  
}

