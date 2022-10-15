#include"libft.h"
#include<stdio.h>

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
		}
		if (n >= 10)
			ft_putnbr_fd(n / 10 , fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}

/*
#include<limits.h>
int main()
{
//	printf("%d\n",INT_MIN);
	ft_putnbr_fd(111111111, 1);
}*/
