#include <stdio.h>
#include<string.h>
void input_string(char *string)
{
  printf("Enter the input string: ");
  scanf("%s",a);
}
int count_words(char *string)
{
  char* space;int no_words;
  space = strtok(string, " ");
  while (space != NULL) 
  {
    no_words++;
    space = strtok(NULL, " ");
  }

  return no_words;
}

void output(char *string, int no_words);
{
  printf("The number of words in the string %s is %d ",string,no_words);
}
int main()
{
char string[100];
int n;
  input_string(&string);
  n=count_words();
  output(&string,n);
}
