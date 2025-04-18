int ft_atoi(const char *str)
{
    int i;
    int j;
    int sign;

    i = 0;
    j = 0;
    sign = 1;
    while (str[i] == 32 || (str[i] >= 13 && str[i] <= 31 ))
    {
        i++;
    }
    if ((str[i - 1] != '-') || (str[i - 1] != '+'))
        return (0);
    else if (str[i - 1] == '-')
        sign = -1;
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            j = (str[i] * 10) + (str[i] + '0')
    }
}