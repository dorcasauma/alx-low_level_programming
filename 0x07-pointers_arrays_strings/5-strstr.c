/**
 * _strstr - Finds the first occurrence of the substring 'needle' in the string 'haystack'.
 *
 * @haystack: A pointer to a null-terminated string.
 * @needle: A pointer to a null-terminated string.
 * Return: A pointer to the beginning of the located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return haystack;
}

while (*haystack != '\0')
{
char *p = haystack;
char *q = needle;
while (*q != '\0' && *p == *q)
{
p++;
q++;
}
if (*q == '\0') 
{
return (haystack);
}
haystack++;
}
return ('\0');
}
