
#include "includes/ft_printf.h"
#include <stdlib.h>
#include <stdio.h>

int main()
{
	char	c;
	char	*s;
	char	*s1;
	short int n1;
	long n2;
	long long n3;
	int  n;
	double f1;
	long double f2;

	n = 1015;
	n1 = 12;
	n2 = 1000000000000000000;
	n3 = 454654;
	f1 = 10.12;
	f2 = 12.0;
	c = 'c';
	s = "123456789";
	s1 = "987654321";

	dprintf(1, "-----------------------------------------------\n");

	dprintf(1, " %d\n", ft_printf("  %s\t", s));
	dprintf(1, " %d\n\n", dprintf(1, "  %s\t", s));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  \n%p\t", &s));
	dprintf(1, " %d\n\n", dprintf(1, "  \n%p\t", &s));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %d\t", n));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %%\t"));
	dprintf(1, " %d\n\n", dprintf(1, "  %%\t"));
	dprintf(1, "-----------------------------------------------\n");

	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %s %s %s\t", s, s1, s));
	dprintf(1, " %d\n\n", dprintf(1, "  %s %s %s\t", s, s1, s));
	dprintf(1, "-----------------------------------------------\n");

	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %i\t", n));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %o\t", n));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %u\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %u\t", n));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %x\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %x\t", n));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %X\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %X\t", n));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %c\t", c));
	dprintf(1, " %d\n\n", dprintf(1, "  %c\t", c));
	dprintf(1, "-----------------------------------------------\n");

	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %s %d %d %s\t", s, n, n, s1));
	dprintf(1, " %d\n\n", dprintf(1, "  %s %d %d %s\t", s, n, n, s1));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %o %u %d %c\t", n, n, n, c));
	dprintf(1, " %d\n\n", dprintf(1, "  %o %u %d %c\t", n, n, n, c));
	dprintf(1, "-----------------------------------------------\n");

	dprintf(1, "Test plus compliqués---------------------------\n");
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %hd\t", n1));
	dprintf(1, " %d\n\n", dprintf(1, "  %hd\t", n1));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %hi\t", n1));
	dprintf(1, " %d\n\n", dprintf(1, "  %hi\t", n1));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %ho\t", n1));
	dprintf(1, " %d\n\n", dprintf(1, "  %ho\t", n1));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %hu\t", n1));
	dprintf(1, " %d\n\n", dprintf(1, "  %hu\t", n1));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %hx\t", n1));
	dprintf(1, " %d\n\n", dprintf(1, "  %hx\t", n1));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %hX\t", n1));
	dprintf(1, " %d\n\n", dprintf(1, "  %hX\t", n1));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %hhd\t", c));
	dprintf(1, " %d\n\n", dprintf(1, "  %hhd\t", c));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %hhi\t", c));
	dprintf(1, " %d\n\n", dprintf(1, "  %hhi\t", c));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %hho\t", c));
	dprintf(1, " %d\n\n", dprintf(1, "  %hho\t", c));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %hhu\t", c));
	dprintf(1, " %d\n\n", dprintf(1, "  %hhu\t", c));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %hhx\t", c));
	dprintf(1, " %d\n\n", dprintf(1, "  %hhx\t", c));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %hhX\t", c));
	dprintf(1, " %d\n\n", dprintf(1, "  %hhX\t", c));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %ld\t", n2));
	dprintf(1, " %d\n\n", dprintf(1, "  %ld\t", n2));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %li\t", n2));
	dprintf(1, " %d\n\n", dprintf(1, "  %li\t", n2));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %lo\t", n2));
	dprintf(1, " %d\n\n", dprintf(1, "  %lo\t", n2));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %lu\t", n2));
	dprintf(1, " %d\n\n", dprintf(1, "  %lu\t", n2));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %lx\t", n2));
	dprintf(1, " %d\n\n", dprintf(1, "  %lx\t", n2));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %lX\t", n2));
	dprintf(1, " %d\n\n", dprintf(1, "  %lX\t", n2));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %lld\t", n3));
	dprintf(1, " %d\n\n", dprintf(1, "  %lld\t", n3));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %lli\t", n3));
	dprintf(1, " %d\n\n", dprintf(1, "  %lli\t", n3));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %llo\t", n3));
	dprintf(1, " %d\n\n", dprintf(1, "  %llo\t", n3));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %llu\t", n3));
	dprintf(1, " %d\n\n", dprintf(1, "  %llu\t", n3));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %llx\t", n3));
	dprintf(1, " %d\n\n", dprintf(1, "  %llx\t", n3));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %llX\t", n3));
	dprintf(1, " %d\n\n", dprintf(1, "  %llX\t", n3));
//	dprintf(1, "-----------------------------------------------\n");
//	dprintf(1, " %d\n", ft_printf("  %lf\t", f1));
//	dprintf(1, " %d\n\n", dprintf(1, "  %lf\t", f1));
//	dprintf(1, "-----------------------------------------------\n");
//	dprintf(1, " %d\n", ft_printf("  %Lf\t", f2));
//	dprintf(1, " %d\n\n", dprintf(1, "  %Lf\t", f2));
	dprintf(1, "-----------------------------------------------\n");

	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %+09d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %+09d\t", n));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %-s\t", s));
	dprintf(1, " %d\n\n", dprintf(1, "  %-s\t", s));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  % d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  % d\t", n));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %0d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %0d\t", n));
//	dprintf(1, "-----------------------------------------------\n");
//	dprintf(1, " %d\n", ft_printf("  %#f\t", f1));
//	dprintf(1, " %d\n\n", dprintf(1, "  %#f\t", f1));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %10d\t", n));
	dprintf(1, "-----------------------------------------------\n");

	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %.10d\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.10d\t", n));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %.4i\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.3i\t", n));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %2u\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.2u\t", n));
	dprintf(1, "-----------------------------------------------\n");
//	dprintf(1, " %d\n", ft_printf("  %.0f\t", f1));
//	dprintf(1, " %d\n\n", dprintf(1, "  %.0f\t", f1));
	dprintf(1, "-----------------------------------------------\n");
//	dprintf(1, " %d\n", ft_printf("  %.1o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %.1o\t", n));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %.10s\t", s));
	dprintf(1, " %d\n\n", dprintf(1, "  %.10s\t", s));
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %lld\t", n3));
	dprintf(1, " %d\n\n", dprintf(1, "  %lld\t", n3));
	dprintf(1, "-----------------------------------------------\n");
/*
	dprintf(1, "Bonus------------------------------------------\n");
	dprintf(1, "-----------------------------------------------\n");
	dprintf(1, " %d\n", ft_printf("  %#o\t", n));
	dprintf(1, " %d\n\n", dprintf(1, "  %#o\t", n));
	dprintf(1, "-----------------------------------------------\n");
*/	

	dprintf(1, " %d\n", ft_printf("  %X\t", -37));
	dprintf(1, " %d\n\n", dprintf(1, "  %X\t", -37));
	printf("\n\n");
	dprintf(1, " %d\n", ft_printf("%-5o", 12));
	dprintf(1, " %d\n\n", dprintf(1, "%-5o", 12));
	
	dprintf(1, " %d\n", ft_printf("%-10x", 42));
	dprintf(1, " %d\n\n", dprintf(1, "%-10x", 42));
	
	dprintf(1, " %d\n", ft_printf("%-10x", 42));
	dprintf(1, " %d\n\n", dprintf(1, "%-10x", 42));
	dprintf(1, " %d\n\n", dprintf(1, "%.0d", 12345));
	dprintf(1, " %d\n", ft_printf("%.0d", 12345));
//	dprintf(1, "Et enfin---------------------------------------\n");
//	dprintf(1, "Et enfin---------------------------------------\n");
//	dprintf(1, "Et enfin---------------------------------------\n");

return (0);
}
