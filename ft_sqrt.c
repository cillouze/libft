int	ft_sqrt(int n)
{
	int	sqrt;

	sqrt = 1;
	while (n < -9 || n > 9)
	{
		sqrt = sqrt * 10;
		n = n / 10;
	}
	return (sqrt);
}
