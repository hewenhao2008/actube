#include <stdlib.h>

#include "bstr.h"

uint8_t * bstr_replace( uint8_t ** dst, uint8_t * bstr)
{
	if (*dst)
		free(*dst);

	*dst = bstr;
	return *dst;
}
