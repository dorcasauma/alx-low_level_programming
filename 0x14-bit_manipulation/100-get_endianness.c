/**
 * get_endianness - Determine the endianness of the system.
 *
 * Return: 0 if the system is big-endian, 1 if it's little-endian.
 */
int get_endianness(void)
{
unsigned int x = 1;
char *byte = (char *)&x;
return ((int)(*byte));
}

