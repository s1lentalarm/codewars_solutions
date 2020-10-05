#include <stdint.h>
#include <stdbool.h>

bool hero(uint32_t bullets, uint32_t dragons)
{
	return ((dragons * 2) <= bullets ? true : false);	
}
