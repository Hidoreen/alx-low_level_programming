#include <stdio.h>
#include "main.h"

/**
 * set_string - a function that sets the value of a 
 * pointer to char
 * @s: a double pointer
 * @to: The char variable
 */

void set_string(char **s, char *to)
{
	*s = to;
}
