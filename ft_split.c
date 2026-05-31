#include"libft.h"

int words_count(char const *s, char c)
{
    int words;
    int i;
    
    i = 0;
    words = 0;
    while(s[i])
    {
        while (s[i] &&s[i] == c)
            i++;
        if (s[i])
            words++;
        while(s[i] && s[i] != c)
            i++;
    }   
    return(words);
}

void	free_matrix(char **mtrx, int j)
{
	while (j > 0)
	{
		j--;
		free(mtrx[j]);
	}
	free(mtrx);
}

void *fill_words(char **mtrx, char const *s, char c)
{
    int i;
    int start;
    int j;

    i = 0;
    j = 0;
    while (s[i])
    {
        while (s[i] && s[i] == c)
            i++;
        if (!s[i])
            break;
        start = i;
        while (s[i] && s[i] != c)
        {
            i++;
        }
        mtrx[j] = ft_substr(s, start, i - start);
        if (!mtrx[j])
        {
            free_matrix(mtrx, j);
            return NULL;
        }
        j++;
    }
    mtrx[j] = NULL;
    return(mtrx);
}


char **ft_split(char const *s, char c)
{
    char **mtrx;
    int dim;

    if (!s)
        return NULL;
    dim = words_count(s, c);
    mtrx = malloc(sizeof(char *) * (dim + 1));
    if (!mtrx)
        return NULL;
    if (!fill_words(mtrx, s, c))
		return (NULL);
    return(mtrx);
}


/* #include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char const *stringa_test = "Ciao-questo-e-un-test";
    char separatore = '-';
    char **risultato;
    int i;

    printf("Stringa da dividere: \"%s\"\n", stringa_test);
    printf("Separatore: '%c'\n\n", separatore);

    // Chiamata alla tua ft_split
    risultato = ft_split(stringa_test, separatore);

    // Stampa del risultato
    if (risultato == NULL)
    {
        printf("La funzione ha ritornato NULL.\n");
        return (0);
    }

    printf("Risultato dello split:\n");
    i = 0;
    // Stampiamo le prime 5 stringhe per verificare l'output
    while (i < 5)
    {
        if (risultato[i] != NULL)
            printf("Stringa [%d]: %s\n", i, risultato[i]);
        else
            printf("Stringa [%d]: NULL\n", i);
        i++;
    }

    // Nota: Libera la memoria qui se il programma non si blocca prima

    return (0);
} */