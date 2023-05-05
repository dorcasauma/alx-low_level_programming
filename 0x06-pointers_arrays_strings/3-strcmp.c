/*
 * _strcmp - compare two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * This function compares the two
 * strings pointed to by s1 and s2,
 * an integer value based on their order.
 * Return: The function returns 0 if the strings
 * are equal, a negative value
 * if s1 is less than s2, and a positive value if
 * s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i])
{
if (s1[i] == '\0')
{
return (0);
}
i++;
}

return (int) (s1[i] - s2[i]);
}
