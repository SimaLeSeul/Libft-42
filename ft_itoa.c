#include "libft.h"
static int	count_digits(long long n)
{
	int	d;

	d = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		d++;
	}
	return (d);
}
char	*ft_itoa(int n)
{
	long long	num;
	int			sign;
	int			digits;
	int			len;
	char		*res;

	sign = (n < 0);
	num = (long long)n;
	if (num < 0)
		num = -num;
	digits = count_digits(num);
	len = digits + sign + 1;
	res = malloc(len);
	if (!res)
		return (NULL);
	res[len - 1] = '\0';
	while (digits > 0)
	{
		res[--digits + sign] = '0' + (num % 10);
		num /= 10;
	}
	if (sign)
		res[0] = '-';
	return (res);
}
int main()
{
    printf("%s", ft_itoa(-2147483648));
}