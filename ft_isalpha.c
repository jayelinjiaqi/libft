int ft_isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'Z' && c <= 'Z'))
        return (1);
    return (0);
}