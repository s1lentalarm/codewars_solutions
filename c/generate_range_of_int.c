#include <stdlib.h>

int *generate_range(int min, int max, int step, size_t *sz)
{
	int *out;
	int i;

    *sz = (max - min) / step + 1; 
	if (!(out = (int*)malloc(sizeof(int) * *sz)))
		return (0);
	i = -1;
	while (++i - step < max)
		out[i] = min + step * i;	
	return (out);
}

