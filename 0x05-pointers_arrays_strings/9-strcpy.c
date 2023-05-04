/**
 * _strcpy - Copies the string pointed to by src, including the terminating null byte (\0),
 *           to the buffer pointed to by dest.
 * @dest: Pointer to the buffer where the string will be copied to.
 * @src: Pointer to the string that will be copied.
 *
 * Return: Pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';

return dest;
}
