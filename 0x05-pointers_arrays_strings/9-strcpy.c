/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: string pointer
 * @src: string buffer
 * Return value: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
