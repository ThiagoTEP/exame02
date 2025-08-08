#include <stdlib.h>

int	is_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	count_words(char *str)
{
	int	count = 0;

	while (*str)
	{
		while (*str && is_sep(*str))
			str++;
		if (*str)
		{
			count++;
			while (*str && !is_sep(*str))
				str++;
		}
	}
	return (count);
}

char	*word_dup(char *start, int len)
{
	char	*word = malloc(len + 1);
	int		i = 0;

	if (!word)
		return (NULL);
	while (i < len)
		word[i++] = *start++;
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**out;
	int		i = 0, len;

	out = malloc((count_words(str) + 1) * sizeof(char *));
	if (!out)
		return (NULL);

	while (*str)
	{
		while (*str && is_sep(*str))
			str++;
		if (*str)
		{
			len = 0;
			while (str[len] && !is_sep(str[len]))
				len++;
			out[i++] = word_dup(str, len);
			str += len;
		}
	}
	out[i] = NULL;
	return (out);
}
