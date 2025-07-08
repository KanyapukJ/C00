#include "ex00/ft_putchar.c"
#include "ex01/ft_print_alphabet.c"
#include "ex02/ft_print_reverse_alphabet.c"
#include "ex03/ft_print_numbers.c"
#include "ex04/ft_is_negative.c"
#include "ex05/ft_print_comb.c"
#include <stdio.h>
#include <unistd.h>

void	ft_ex06_helper(char a, char b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
	if (!(a == 98 && b == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_ex06_helper(a, b);
			b++;
		}
		a++;
	}
}

// Functions from ex07 (without ft_putchar to avoid redefinition)
void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + '0');
}

int    main(void)
{
    printf("\n----------ex00----------\nExpected:\npass\n");
    printf("output:\n");
    ft_putchar('p');
    ft_putchar('a');
    ft_putchar('s');
    ft_putchar('s');
    printf("\n\n");

    printf("\n----------ex01----------\nExpected:\nabcdefghijklmnopqrstuvwxyz\n");
    printf("output:\n");
    ft_print_alphabet();
    printf("\n\n");
    
    printf("\n----------ex02----------\nExpected:\nzyxwvutsrqponmlkjihgfedcba\n");
    printf("output:\n");
    ft_print_reverse_alphabet();
    printf("\n\n");
    
    printf("\n----------ex03----------\nExpected:\n0123456789\n");
    printf("output:\n");
    ft_print_numbers();
    printf("\n\n");
    
    printf("\n----------ex04----------\nExpected:\nPPNPN\n");
    printf("output:\n");
    ft_is_negative(1);
    ft_is_negative(' ');
    ft_is_negative(-1);
    ft_is_negative(2147483647);
    ft_is_negative(-2147483648);
    printf("\n\n");

    printf("\n----------ex05----------\nExpected:\n012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789\n");
    printf("output:\n");
    ft_print_comb();
    printf("\n\n");

    printf("\n----------ex06----------\nExpected:\n00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99\n");
    printf("output:\n");
    ft_print_comb2();
    printf("\n\n");
    
    printf("\n----------ex07----------\nExpected:\n-2147483648\n2147483647\n-42\n42\n0\n");
    printf("output:\n");
    ft_putnbr(-2147483648);
    printf("\n");
    ft_putnbr(2147483647);
    printf("\n");
    ft_putnbr(-42);
    printf("\n");
    ft_putnbr(42);
    printf("\n");
    ft_putnbr(0);
    printf("\n\n");

    return (0);
}

