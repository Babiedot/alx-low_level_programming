/**
 * _strlen - Returns the length of a string.
 * @s: The string length to be returned.
 * Return: The length of s.
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
