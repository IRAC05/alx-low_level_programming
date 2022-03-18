/**
 * main - check the code for digits 0 to 9
 * @c: The character to be checked
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
