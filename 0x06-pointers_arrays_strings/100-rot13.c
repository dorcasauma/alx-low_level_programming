/**
 * *rot13 - Encodes a string using rot13
 * @s: Pointer to the string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *s)
{
char *p = s;
int i;

while (*s)
{
i = (*s >= 'a' && *s <= 'z') ? (*s - 'a') : (*s - 'A');
if (i >= 0 && i < 26)
*s = (*s + 13 > 'z' || (*s + 13 > 'Z' && *s <= 'Z')) ? (*s - 13) : (*s + 13);
s++;
}
return (p);
}
