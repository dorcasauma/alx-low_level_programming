/**
 * int_index - Searches for an integer in an array and
 * returns the index of the first element
 * for which the provided comparison function does not return 0.
 *
 * @array: The pointer to the integer array to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function used to
 * compare values.
 * The comparison function should take
 * an integer argument and return an integer.
 * Return: int_index should return 0 if the comparison fails, 
 * and a non-zero value otherwise.
 *the index of the first element that matches the comparison function.
 *if no element matches, or if size <= 0, it returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}

return (-1);
}
