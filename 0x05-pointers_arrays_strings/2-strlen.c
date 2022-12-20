/**
 * _strlen - Returns the length of a string.
 * @s: The string length to be returned.
 * Return: The length of s.
 */
int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != '\0');
	p++;
	return (p);
}
