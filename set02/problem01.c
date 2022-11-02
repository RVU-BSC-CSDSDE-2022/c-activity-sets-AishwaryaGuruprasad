struct _point
{
  float x;
  float y;
};
typedef struct _point Point;

Point input()
{
  Point a,b;
  printf("Enter the x co-ordinates of point A");
  scanf("%f",&a.x);
  printf("Enter the y co-ordinates of point A");
  scanf("%f",&a.y);
  printf("Enter the x co-ordinates of point B");
  scanf("%f",&b.x);
  printf("Enter the y co-ordinates of point B");
  scanf("%f",&b.y);
}
void dist(Point a, Point b)
{
  Point res;
  res.x = b.x-a.x;
  res.y = b.y-a.y;
  return res;
}
void output(Point a, Point b, Point res)
{
  printf("The distance between Point %f,%f and Point %f ,%f is %f,%f",a.x,a.y,b,res.x,res.y);
}
int main()
{
  Point e,f,g;
  e= input();
  f= input();
  dist(e,f);
  output(e,f,g);
}