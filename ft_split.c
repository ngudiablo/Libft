#include "libft.h"

static size_t	count_words(const char *s, char c)
{
    size_t	count = 0;
    int		in_word = 0;

    while (*s)
    {
        if (*s != c && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return (count);
}

static char	*word_dup(const char *s, size_t len)
{
    char	*word = malloc(len + 1);
    size_t	a = 0;

    if (!word)
        return (NULL);
    while (a < len)
    {
        word[a] = s[a];
        a++;
    }
    word[a] = '\0';
    return (word);
}

char	**ft_split(const char *s, char c)
{
    char		**tab;
    size_t		b = 0, start = 0, end = 0, words;

    if (!s)
        return (NULL);
    words = count_words(s, c);
    tab = malloc(sizeof(char *) * (words + 1));
    if (!tab)
        return (NULL);
    while (s[end])
    {
        while (s[end] == c)
            end++;
        start = end;
        while (s[end] && s[end] != c)
            end++;
        if (end > start)
            tab[b++] = word_dup(s + start, end - start);
    }
    tab[b] = NULL;
    return (tab);
}