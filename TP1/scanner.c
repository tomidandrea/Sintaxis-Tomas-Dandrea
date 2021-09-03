#include <stdio.h>
#include <ctype.h>
#include "scanner.h"

int get_token()
{
   char a;

   while (isspace(a = getchar()));

   if (a == EOF) 

       return FDT;

   else if (a == ',')
   {
       buffer[0] = a;
       buffer[1] = '\0';
       return SEP;
   }
   else 
   {
       int i = 0;
       do
       {
           buffer[i] = a;
           a = getchar();
           i++;
       } while (!isspace(a) && a != ',');

       ungetc(a, stdin);
       buffer[i] = '\0';
       return CAD;
   }
}