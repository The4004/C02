#include "unistd.h"
//#include "stdio.h"

void ft_putchar (char c)
{
    write(1, &c, 1);
}
void ft_putstr_non_printable(char *str)
{
    
    char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    int i;
    unsigned int a;
    unsigned int b;

    i = 0;
    while (str[i])
    {
        if (str[i] < 32 || str[i] == 127)
        {
            ft_putchar('\\');
            a = (str[i] / 16);
            b = (str[i] % 16);

        ft_putchar(hex[a]);
        ft_putchar(hex[b]);
        }
        else 
        {
            ft_putchar(str[i]);
        }
    i++;
    }
}
/*int main ()
{
    char str[] = "Coucou\ntu vas bien ?";
        ft_putstr_non_printable(str);
}*/