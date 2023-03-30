#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
       int i = 0;

       while(*src && n)
       {
	       *(dest + i++) = *src++;
	       --n;
       }
       while (n--)
       {
	       *(dest + i++) = '\0';
       }

       return (dest);
}
