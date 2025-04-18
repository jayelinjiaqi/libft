char *ft_strchr(const char *s, int c)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] == c)
            return (&s[i]);
        i++;
    }
    if (c == '\0')
    {
        if (s[j] == c)
            return (&s[j]);
        j++;
    }
}

#include <stdio.h>
int main(void)
{
    char *i;
    char *j;
    i = "string";
    j = 0;
    j = ft_strchr(i, j);
    printf("%s", j);
    return (0);
}
