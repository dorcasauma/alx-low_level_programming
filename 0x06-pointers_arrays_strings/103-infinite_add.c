/**
 * char *infinite_add - Adds two numbers represented as strings and stores the result in a buffer.
 * @param n1 The first number.
 * @param n2 The second number.
 * @param r The buffer to store the result.
 * @param size_r The size of the buffer.
 * @return A pointer to the result, or 0 if the result cannot be stored in the buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0, sum, len1, len2, i, j;

len1 = strlen(n1);
len2 = strlen(n2);

if (len1 + 1 > size_r || len2 + 1 > size_r)
{
return (0);
}

for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--)
{
sum = carry;
if (i >= 0) sum += n1[i] - '0';
if (j >= 0) sum += n2[j] - '0';

carry = sum / 10;
sum %= 10;

r[i + 1] = sum + '0';
}

if (carry > 0)
{
if (len1 + len2 + 1 > size_r)
{
return (0);
}
r[0] = carry + '0';
r[len1 + 1] = '\0';
} else
{
r += 1;
}

return (r);
}
