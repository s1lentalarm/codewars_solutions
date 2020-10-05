#include <stdlib.h>

int		str_len(const char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		get_length(const char *str)
{
	int		i;
	int		j;
	int		out;

	i = -1;
	out = 0;
	while (str[++i])
	{
		j = i + 1;
		while(j > 0)
		{
			j--;
			out++;
		}
	}
	return (out);
}

char *accum(const char *source)
{
	int		i;
	int		j;
	int		t;
	char	*out;
	char	c;

	if (!(out = (char *)malloc(sizeof(char) * (get_length(source) + str_len(source)))))
		return (NULL);
	i = 0;
	t = 0;
	while (source[i])
	{
		j = i;
		while (j >= 0)
		{
			c = source[i];
			if (j == (i) && i > 0)
			{
				out[t] = '-';
				t++;
			}
			if ((source[i] >= 'A' && source[i] <= 'Z') && j < i)
				c += 32;
			if ((source[i] >= 'a' && source[i] <= 'z') && j == i)
				c -= 32;
			out[t] = c;
			t++;
			j--;
		}
		i++;
	}
	out[t] = 0;
	return (out);
}
