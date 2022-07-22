#include <stdio.h>
/**
* main - a program that prints all arguments it receives.
* @argc: arguement count
* @argv: arguement value
* Return: 0(success)
*/
int main(int argc, char *argv[])
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}
