#include "main.h"
/**
 * _strlen - Main entry
 * Description - function that returns the length of a string
 * *@s: accepts an input saved into s
 * Return: Always 0 (success)
 * sum - return value
 */
int _strlen(char *s)
{
int i;
int sum = 0;
for (i = 0; s[i] != '\0'; i++)
{
sum += 1;
}
return (sum);
}
