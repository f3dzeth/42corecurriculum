#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_sd('-', fd);
		n = n - 1;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);	
	ft_putchar_fd(n % 10 + '0', fd);
}

#include <unistd.h>

// Your ft_putnbr_fd function implementation here...

int main(void)
{
	int num = 12345;
	int fd = 1; // STDOUT_FILENO

	ft_putnbr_fd(num, fd);
	ft_putchar_fd('\n', fd); // Add a newline for clarity

	return 0;
}
