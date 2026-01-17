#include "libft.h"

static int	word_count(const char *s, char c)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*fill_word(const char *s, size_t start, size_t end)
{
	char	*word;

	word = malloc((end - start) + 1);
	if (!word)
		return (NULL);
	memcpy(word, s + start, end - start);
	word[end - start] = '\0';
	return (word);
}

static char	**fill_tab(const char *s, char c, char **tab, int total_words, int word_index)
{
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	while (word_index < total_words)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		tab[word_index] = fill_word(s, start, end);
		if (!tab[word_index])
		{
			while (word_index > 0)
				free(tab[--word_index]);
			free(tab);
			return (NULL);
		}
		word_index++;
	}
	tab[word_index] = NULL;
	return (tab);
}
char	**ft_split(const char *s, char c)
{
	char	**tab;
	int		words;

	if (!s)
		return (NULL);
	words = word_count(s, c);
	tab = malloc((words + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	if (!fill_tab(s, c, tab, words, 0))
		return (NULL);
	return (tab);
}

int	main(void)
{
	char	**result;
	int		i;

	result = ft_split(" Hello World", ' ');
	if (!result)
		return (1);
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}