#include"libft.h"
static int	ft_size(char const *s, char c)
{
	int	i;
	int	delim;

	delim = 0;
	i = 0;
	while (s[i])
	{
		if(s[i] == c)
		{
			while (s[i] && s[i] == c)
				i++;
			if (s[i])
				delim++;
		}
		i++;
	}
	if (s[0] != c)
		delim++;
	return (delim);
}

static char*	ft_word(char const  *s, char c, int size)
{
	char	*word;
	int	i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (size + 1));
	while (size > i)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	char **result;
	int	size;
	int	j;
	int	alloc;
	int	i;
	
	i = 0;
	j = 0;
	size  = ft_size(s, c);
	result = (char **)malloc(sizeof(char) * (size + 1));
	if (result == NULL)
		return (NULL);
	while (s[j])
	{
		alloc = 0;
		while (s[j] == c)
			j++;
		while (s[j+alloc] != c)
			alloc++;
		result[i] = ft_word(&s[j], c, alloc);
		if (result[i] == NULL)
			free(result);
		i++;
		j+=alloc;
	}
	result[i] = NULL;
	return (result);
}


#include<stdio.h>
int main()
{
	int i = 0;
	char **ptr = ft_split("****hello***split* this*!*", '*');
	while (i < 5)
	{
		printf("%s\n",ptr[i]);
		i++;
	}
}
