#include "main.h"

/**
* is_divisible - check if num is divisible
* @num: the number to be checked
* @div: the result of division
* Return: 1 if num is divisible or 0 if numis not divisible
*/
int is_divisible(int num, int div)
{
if (num % div == 0)
return (0);

if (div == num / 2)
return (1);

return (is_divisible(num, div + 1));
}
