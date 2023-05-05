/**
 * *leet - encodes a string into 1337
 * @str: the string to encode
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
int i, j;
char leet_chars[] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
char replace_chars[] = {'0', '1', '2', '3', '4', '5', '6', '7'};

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 8; j++)
{
if (str[i] == leet_chars[j] || str[i] == leet_chars[j] + 32)
{
str[i] = replace_chars[j];
break;
}
}
}

return (str);
}
