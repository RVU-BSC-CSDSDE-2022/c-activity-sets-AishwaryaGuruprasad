#include <stdio.h>
typedef struct point
{
    float x, y;
} Point;
typedef struct line 
{
    Point p1;
      Point p2
    float distance;
} Line;
typedef struct polygon 
{
    int sides;
    Line l[100];
    float perimeter;
} Polygon;

int input_n()
{
  int n;
  printf("Enter the number of sides of the polygon:");
  scanf("%d",&n);
  return n;
}
Line input_line(int n)
{
  Line l;
  printf("Enter the co-ordinates of point: \n");
	scanf("%f%f",l->p1.x,l->p2.y);
	return l;
  
}
void input_n_lines(int n, Line *l)
{  Line l[n];
   for(int i=0;i<n;i++)
  {
    l[i] = input_line();
  }
}
int input_polygon(Polygon *p)
{
  
}
float find_distance(Point a, Point b)
{
l->distance= sqrt(pow((l->a.x-l->b.x),2)+pow((l->a.y-l->b.y),2));
  return l;
}
void find_n_distance(int n, Line *l)
{
  
}
void find_perimeter(Polygon* p)
{
  
}
void output(Polygon p)
{
  
}