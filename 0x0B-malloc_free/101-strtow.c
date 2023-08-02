#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: Input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
int count = 0;
int in_word = 0;
while (*str)
{
if (*str == ' ')
in_word = 0;
else if (in_word == 0)
{
in_word = 1;
count++;
}
str++;
}
return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: Input string.
 *
 * Return: Pointer to an array of strings (words).
 *         Each element of this array contains a single word, null-terminated.
 *         The last element of the array is NULL.
 *         Returns NULL if str == NULL or str == "".
 *         If the function fails, it returns NULL.
 */
char **strtow(char *str)
{
int num_words = count_words(str);
int i = 0;
int in_word = 0;
char *start = str;
int word_len;
int j;
char **words = (char **)malloc((num_words + 1) * sizeof(char *));
if (str == NULL || *str == '\0')
return (NULL);
if (num_words == 0)
return (NULL);
if (words == NULL)
return (NULL);
while (*str)
{
if (*str == ' ')
{
if (in_word)
{
word_len = str - start;
words[i] = (char *)malloc((word_len + 1) * sizeof(char));
if (words[i] == NULL)
{
while (i >= 0)
free(words[i--]);
free(words);
return (NULL);
}
for (j = 0; j < word_len; j++)
i++;
in_word = 0;
}
}
else if (!in_word)
{
start = str;
in_word = 1;
}
str++;
}
if (in_word)
{
word_len = str - start;
words[i] = (char *)malloc((word_len + 1) * sizeof(char));
if (words[i] == NULL)
{
while (i >= 0)
free(words[i--]);
free(words);
return (NULL);
}
for (j = 0; j < word_len; j++)
words[i][j] = start[j];
words[i][j] = '\0';
i++;
}
words[i] = NULL;
return (words);
}
