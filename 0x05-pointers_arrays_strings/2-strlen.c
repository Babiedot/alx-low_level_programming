/**
 * _strlen - Returns the length of a string.
 * @s: The string whose the length should be returned.
 * Return: The length of s.
 */
int _strlen(char *s)
{
	int p = 0

		While (*(s + p) != '\0')
		p++;
		return (p);
}
