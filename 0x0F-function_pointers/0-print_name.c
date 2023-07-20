#include "function_pointers.h"

/**
 *print name-prints a name.
 *@name: input a name.
 *@f: function pointer.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char*))
{
	if (name && f)
		f(name);
}
