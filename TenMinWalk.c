#include <stdbool.h>
#include <string.h>

// input is a null-terminated string

bool isValidWalk(const char *walk) 
{
int x =0;
int y=0;
int i = 0;
if(strlen(walk) != 10)
    return false;
while(walk[i] != '\0')
{
    if(walk[i] == 'n')
        y +=1;
     else if(walk[i] == 's')
        y -=1;
     else if(walk[i] == 'e')
        x +=1;
     else if(walk[i] == 'w')
        x -=1;
        i++;
}
if(x == 0 && y ==0)
    return true;
else
    return false ;
}
