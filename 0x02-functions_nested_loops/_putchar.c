#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stout
 * @C: The characyer to print
 *
 * Return: On success 1
 * On error,-1 is returned, and errno is set appropriately
 */
int _putcher(char c)
{ 
	return (write(1, &c, 1));
}
