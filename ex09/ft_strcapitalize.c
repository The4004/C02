char *ft_strlowcase(char *str)
{
      int i = 0;
    if (str[0] == '\0')
        return str;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
            }       
    i++;
    }
    return str;
}
char    *ft_strcapitalize(char *str)
{
    int    i;

    i = 0;
    ft_strlowcase(str);
    while (str[i])
    {
        if ((i == 0 || (str[i - 1] >= 32 && str[i - 1] <= 47)
                    || (str[i - 1] >= 58 && str[i - 1] <= 64)
                    || (str[i - 1] >= 91 && str[i - 1] <= 96)
                    || (str[i - 1] >= 123 && str[i - 1] <= 126))
                            && (str[i] >= 'a' && str[i] <= 'z'))
            {
                str[i] = str[i] - 32;
            }
    i++;
    }
    return str;
} 
