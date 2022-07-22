#include <stdio.h>
/**
* main - prints the number of arguenments passed to it
* @argc: arguemnet count
* @argv: arrguement value
* Return: 0(success)
*/
int main(int argc, char *argv[])
{
/* to suppress unused variable warning */
argv = argv;
printf("%d\n", argc - 1);
return (0);
}
