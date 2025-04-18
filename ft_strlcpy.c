#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    unsigned long i;
    unsigned long j;

    i = 0;
    j = 0;
    while (src[i])
    {
        i++;
    }
    if (dstsize - 1 >= i)
    {
        while (src[j])
        {
            dst[j] = src[j];
            j++;
        }
        dst[j] = '\0';
    }
    else if (dstsize < i)
    {
        while (dstsize - 1 > 0)
        {
            dst[j] = src[j];
            dstsize--;
            j++;
        }
        dst[j] = '\0';
    }
    return (i);
}


int main(void)
{
    char *str;
    char *dst;
    int j;
    j = 0;
    str = "string";
    dst = 0;
    j = ft_strlcpy(str, dst, 3);
    printf("%d", j);
    printf("%s", dst);
    return (0);
}