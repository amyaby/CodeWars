#include <sys/types.h>
#include <string.h>
#include <limits.h>

ssize_t find_short(const char *s)
{
    int i = 0;
    int short_length = INT_MAX;
    int word_length =0;
    while( i < strlen(s))
    {
         if(s[i] != ' ')
         {
            word_length += 1;
         }
        else
        {
            if(word_length < short_length)
            {
                short_length = word_length;
            }
            word_length = 0;
        }
       i++;
    }
            if(word_length < short_length)
            {
                short_length = word_length;
            }
  return short_length;
}