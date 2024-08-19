#include <stddef.h> // NULL
#include <stdlib.h>  // malloc, free
#include <string.h>  // strlen
#include <stdio.h>
//returned buffer should be dynamically allocated and will be freed by a caller
int islower(int c)
{
    if(c>='a' && c<='z')
        return 1;
    return 0;
}
int isUpper(int c)
{
    if(c>='A' && c<='Z')
        return 1;
    return 0;
}
char* solution(const char *camelCase) 
{
    int M = strlen(camelCase);
    int i = 0 ;
    int j = 0 ;
            char *str= (char *)malloc((M*2+1)*sizeof(char));
if(str == NULL) return NULL;
  while(i<M)
    {
     str[j] = camelCase[i];
      j++;

      if(i+1 < M && isUpper(camelCase[i+1]) && islower(camelCase[i]))
      {
        str[j]=' ';
        j++;
      }
      if(i+1 < M && isUpper(camelCase[i+1]) && isUpper(camelCase[i]))
      {
        str[j]=' ';
        j++;
      }
      i++;
    }
    str[j] = '\0';
    return str;
}
int main()
{
printf("%s",solution("thisIsAVeryLongIdentifierName"));
}