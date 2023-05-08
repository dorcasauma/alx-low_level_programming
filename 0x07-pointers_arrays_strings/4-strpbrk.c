/**
 * _strpbrk - Locates the first occurrence in
 * the string 's' of any of the bytes in the string 'accept'.
 *
 * @s: A pointer to a null-terminated string.
 * @accept: a pointer to a null-terminated string.
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *p = accept;
while (*p != '\0')
{
if (*s == *p)
{
return (s);
}
p++;
}
s++;
}
return ('\0');
}
