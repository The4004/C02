unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    int len;
    int j;

        if (size == 0)
         return 0;

    len = 0;
    j = size - 1;
           
            while (src[len] && len < j)
            {
                dest[len] = src[len];
                len++;
            }

       while (src[len] != '\0')
           len++;

    dest[len] = '\0';
    return len;
}