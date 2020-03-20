#include <unistd.h>
void ft_putchar(char lakazzie)
{
	write(1, &lakazzie, 1);
}
int main(int argc, char **argv)
{
	if(argc == 4)
	{
		int i;
		i = 0;

		while (argv[1][i] != '\0')
		{
			if(argv[1][i] == argv[2][0])
			{
				argv[1][i] = argv[3][0];

				if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				{
					argv[1][i] = argv[1][i] - 32;
					i++;
				}
				ft_putchar(argv[1][i]);
			}
			else 
			{
				if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
				{
					ft_putchar(argv[1][i]);
				}
				else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z') 
				{
					argv[1][i] = argv[1][i] + 32;
					ft_putchar(argv[1][i]);
				} 
				else 
				{
					ft_putchar(argv[1][i]);
				}
				i++;
			}
		}	
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}