#include <stdio.h>
#include "scanner.h"

int main()
{
    enum Token tok;
    
    while (!feof(stdin))
    {
        tok = get_token(); 
        switch (tok)
        {
        case CAD:
            printf("Cadena: %s \n", buffer);
            buffer[0] = '\0';
            break;
        case SEP:
            printf("Separador: %c \n", buffer[0]);
            break;
        default:
            printf("Fin de Texto \n");
            break;
        }
    }
 return 0;
}