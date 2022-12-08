#include <stdio.h>
#include <string.h>
#define max 1000
void input_string(char *string)
{
  printf("Enter the input string: ");
  gets(string);
}
int count_words(char *string)
{
  char* space;int no_words=0;
  space = strtok(string, " ");
  while (space != NULL) 
  {
    no_words++;
    space = strtok(NULL, " ");
  }

  return no_words;
}

void output(char *string, int no_words)
{
  printf("The number of words in the string %s is %d ",string,no_words);
}
int main()
{
char string[max];
int n;
  input_string(&string);
  n=count_words(&string);
  output(&string,n);
}
