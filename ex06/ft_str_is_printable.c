int ft_str_is_printable(char *str)
{
    //  sp! "#$%&'()*+,-./:;<=>? @[\]^_`{|}~
      int i = 0;
    if (str[0] == '\0')
        return 1;
    while (str[i])
    {
        if (str[i] < 32 || str[i] > 126)
            return 0;
        i++;
    }
    return 1;
}