#include <stdio.h>
void input_two_strings(char *string1, char *string2)
{
  printf("Enter the First string:");
  scanf("%s",string1);
  printf("Enter the Second string:");
  scanf("%s",string2);
  
}
int stringcompare(char *string1, char *string2)
{
  if(string1>string2)
  { printf("String 1 is greater");
    return 1;}
  else if(string2>string1)
  { printf("String 2 is greater");
    return 0;}
  
}

//void output(char *string1, char *string2, int result)
int main ()
{
  char s1,s2;
  int result;
  input(&s1,&s2);
  result= stringcompare(&s1,&s2);
  return 0;
}
