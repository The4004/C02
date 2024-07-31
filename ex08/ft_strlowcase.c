char *ft_strlowcase(char *str)
{
      int i = 0;
    if (str[0] == '\0')
        return str;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
       
        i++;
    }
    return str;
}