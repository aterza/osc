#include <stdio.h>
#include "osc.h"

void
ascii_output(const Sample*out)
{
	printf("%8.4f %8.6f\n", out->time, out->value);
}
