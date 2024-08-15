#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
bool narcissistic(int num)
{
    int count = 0;
    int i = 0;
    char str_num[10];
     sprintf(str_num, "%d", num);
    int len_num = strlen(str_num);
    while(i < len_num)
    {
        int digit = str_num[i] - '0';
       count += pow(digit,len_num);
      i++;
    }
    if(count == num)
    return true;
return false;
}
