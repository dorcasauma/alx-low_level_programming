/**
 * string_toupper - Changes all lowercase letters of a \n  string to uppercase.
 * @str: Pointer to the string to be converted.
 *
 * This function takes a string pointed to by @str and changes all \n lowercase
 * letters to uppercase.
 * Returns : a pointer to the converted string.
 */
char *string_toupper(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}
}
return (str);
}
