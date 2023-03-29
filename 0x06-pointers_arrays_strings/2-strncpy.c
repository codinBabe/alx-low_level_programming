#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
       char* a;

       a = dest;
       while(*src && n--)
       {
	       *dest = *src;
	       dest++;
	       src++;
       }
       if (dest == 0 && src == 0)
	       return (0);
       *dest = '\0';
       return (a);
}
