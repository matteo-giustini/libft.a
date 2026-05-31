//#include<stdio.h>
//#include <string.h>
#include"libft.h"

char *ft_strchr(const char *s, int c)
{
    while(*s != '\0' && (char)c != *s)
        s++;
    if((char)c == *s)
        return((char *)s);
    return(0);
}

/* int main(void)
{
	char stringa[] = "Navigare nel codice C";
	char *risultato;

	// Cerca la prima 'e' nella stringa
	risultato = ft_strchr(stringa, 'e');

	// Controlla se il return NON è NULL (carattere trovato)
	if (risultato != 0)
	{
		printf("Carattere trovato!\n");
		printf("Stringa a partire dal carattere trovato: %s\n", risultato);
		
		// Modifica la stringa originale partendo da quel punto
		*risultato = 'X'; 
		printf("Stringa modificata: %s\n", stringa);
	}
	else
	{
		printf("Carattere non trovato.\n");
	}
	return (0);
} */