#include <stdlib.h>

char *reverse_letter(const char *str)
{
	char *str_out;
	char *safe_str;
	int strlen;

	strlen = 0;
	if (*str == '\0')
		return (0);	
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			strlen++;
		str++;
	}
	if (!(str_out = (char *)malloc(sizeof(char) * strlen + 1)))
		return (0);
	str--;
	safe_str = str_out;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*safe_str++ = *str;
		str--;
	}
	*safe_str = '\0';
    return (str_out);
}
