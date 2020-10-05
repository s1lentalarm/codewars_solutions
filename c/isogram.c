#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool IsIsogram(char *str) 
{
	char	c;
	int		len;

	len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		c = str[i];
		c -= 32;
		for (int j = i + 1; j < len; j++)
			if (str[j] == c || str[j] == str[i])
				return (false);
	}
	return (true);
}
