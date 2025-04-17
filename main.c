#include <stdio.h>
int main(void)
{
    int i;
    int j;
    i = 'j';
    j = 0;
    j = ft_isprint(i);
    printf("%d", j);
    return (0);
}

//cc -Wall -Wextra -Werror ft_is.c -o a