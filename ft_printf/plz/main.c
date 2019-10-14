#include <ft_printf.h>
#include <stdio.h>

int main()
{
	int i;
	long a;
	double o;
	long long s;
	int p;

	i = 42;
	o = 132;
	p = 123456789;

	printf("value: d\n\n");
	ft_printf("value: %d\n", 122);
	printf("value: %d\n\n", 122);

	printf("value: d 0\n\n");
	ft_printf("value: %0d\n", 123);
	printf("value: %0d\n\n", 123);
									
	printf("value: d 0 avec -\n\n");
	ft_printf("value: %0-d\n", 124);
	printf("value: %0-d\n\n", 124);

	printf("value d 0 avec largeur\n\n");
	ft_printf("value: %015d\n", 125);
	printf("value: %015d\n\n", 125);

	printf("value d 0 avec largeur et precision\n\n");
	ft_printf("value: %015.4d\n", 126);
	printf("value: %015.4d\n\n", 126);

	printf("value d 0 avec largeur et precision et +\n\n");
	ft_printf("value : 0+15.2%d\n", 127);
	printf("value : 0+15.2%d\n\n", 127);

	printf("value d 0 avec largeur et precision et espace\n\n");
	ft_printf("value : %0 .4d\n", 128);
	printf("value : %0 .4d\n\n", 128);

	printf("value : %%\n");
	ft_printf("value : %%\n\n");

//	printf("value: %")

	return (0);
}
