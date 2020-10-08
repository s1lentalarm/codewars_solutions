#include <stdlib.h>

int		str_len(const char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*str_cpy(char *dest, const char *src)
{
	char	*save;

	save = dest;
	while (*src && (*save++ = *src++))
		;
	*save = '\0';
	return (dest);
}

char	*strclr(const char *str)
{
	char	*safe_str;
	int		i;
	int		len;
	int		num_bspc;

	len = str_len(str);
	if (!(safe_str = (char*)malloc(sizeof(char) * len + 1)))
		return (0);
	str_cpy(safe_str, str);
	num_bspc = 0;
	safe_str[len--] = '\0';
	while (len >= 0)
	{
		if (str[len] == '#')
			num_bspc++;
		if (str[len] != '#' && num_bspc > 0)
		{
			num_bspc--;
			safe_str[len] = '#';
		}
		len--;
	}
	i = 0;
	len = 0;
	while (safe_str[i])
	{
		if (safe_str[i] != '#')
		{
			safe_str[len] = safe_str[i];
			len++;
		}
		i++;
	}
	safe_str[len] = '\0';
	return (safe_str);
}
