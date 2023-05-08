/**
 * __strspn - Calculates the length of the
 * initial segment of the string 's' that consists of
 * characters in the string 'accept'.
 *
 * @s: A pointer to a null-terminated string.
 * @accept: A pointer to a null-terminated string.
 * Return: The number of bytes in the initial
 * segment of s which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
break;
}
}
if (accept[j] == '\0')
{
return (i);
}
}
return (i);
}
