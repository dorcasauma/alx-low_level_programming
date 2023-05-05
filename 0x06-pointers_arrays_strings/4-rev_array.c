/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 *
 * This function reverses the content of
 * the array @a. It takes @n as the number
 * of elements in the \n array @a, and swaps
 * the elements in the array to reverse
 * the order of the elements.
 */
void reverse_array(int *a, int n)
{
int i, j, temp;

for (i = 0, j = n - 1; i < j; i++, j--)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
}
}
