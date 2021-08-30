/*
* Checks whether c is a 7-bit unsigned
* char value that fits into the ASCII table
*/
int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
