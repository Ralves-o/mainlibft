#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>
#include <bsd/string.h>

void to_upper(unsigned int i, char *c) 
{
	(void)i;
	*c = ft_toupper((int)(*c));
}

char to_upp(unsigned int i, char c) 
{
	(void)i;
	return (ft_toupper((int)c));
}

int main(void) {
    printf("ATOI:\noriginal:%d\nnova:%d\n\n", atoi("42"), ft_atoi("42"));

    char str1[6] = "Hello";
    bzero(str1, 4);
    char str2[6] = "Hello";
    ft_bzero(str2, 4);
    printf("BZERO:\noriginal:%s\nnova:%s\n\n", str1, str2);

    char *arr1 = calloc(5, 1);
    char *arr2 = ft_calloc(5, 1);
    printf("CALLOC:\noriginal:%s\nnova:%s\n\n", arr1, arr2);
    free(arr1);
    free(arr2);

    printf("ISALNUM:\noriginal:%d\nnova:%d\n\n", isalnum('$'), ft_isalnum('$'));

    printf("ISALPHA:\noriginal:%d\nnova:%d\n\n", isalpha('a'), ft_isalpha('a'));

    printf("ISASCII:\noriginal:%d\nnova:%d\n\n", isascii(128), ft_isascii(128));

    printf("ISDIGIT:\noriginal:%d\nnova:%d\n\n", isdigit('9'), ft_isdigit('9'));

    printf("ISPRINT:\noriginal:%d\nnova:%d\n\n", isprint('\n'), ft_isprint('\n'));

    printf("ITOA:\noriginal:%s\n\n", ft_itoa(-1942));
    printf("MEMCHR:\noriginal:%s\nnova:%s\n\n", (char *)memchr("Hello", 'e', 5), (char
	*)ft_memchr("Hello", 'e', 5));

    printf("MEMCMP:\noriginal:%d\nnova:%d\n\n", memcmp("cmp", "cml", 2), ft_memcmp("cmp", "cml", 2));

    char dest1[6] = "";
    char dest2[6] = "";
    memcpy(dest1, "Hello", 5);
    ft_memcpy(dest2, "Hello", 5);
    printf("MEMCPY:\noriginal:%s\nnova:%s\n\n", dest1, dest2);

    char dest3[6] = "World";
    char dest4[6] = "World";
    memmove(dest3, "Hello", 5);
    ft_memmove(dest4, "Hello", 5);
    printf("MEMMOVE:\noriginal:%s\nnova:%s\n\n", dest3, dest4);

    char dest5[6] = "Hello";
    char dest6[6] = "Hello";
    memset(dest5, 'x', 5);
    ft_memset(dest6, 'x', 5);
    printf("MEMSET:\noriginal:%s\nnova:%s\n\n", dest5, dest6);

    printf("PUTCHAR:\n");
    ft_putchar_fd('x', 1);
    printf("\n\n");

    printf("PUTENDL:\n");
    ft_putendl_fd("Hello, World!", 1);
    printf("\n\n");

    printf("PUTNBR:\n");
    ft_putnbr_fd(42, 1);
    printf("\n\n");

    printf("PUTSTR:\n");
    ft_putstr_fd("Hello, World!", 1);
    printf("\n\n");

    char **result = ft_split("split is right!", ' ');
    printf("SPLIT:\n");
    for (int i = 0; result[i] != NULL; i++) {
        printf("%s\n", result[i]);
        free(result[i]);
    }
    free(result);

    printf("STRCHR:\noriginal:%s\nnova:%s\n\n", strchr("Hello, World!", 'W'), ft_strchr("Hello, World!", 'W'));

    printf("STRDUP:\noriginal:%s\nnova:%s\n\n", strdup("strdup is right!"), ft_strdup("strdup is right!"));

    //printf("STRITERI:\noriginal:%s\n\n", ft_striteri("striteri is right!", to_upper));

    printf("STRJOIN:\noriginal:%s\n\n", ft_strjoin("strjoin ", "is right!"));

    char strlcat_dest1[20] = "strlcat ";
    char strlcat_dest2[20] = "strlcat ";
    printf("STRLCAT:\noriginal:%zu\nnova:%zu\n\n", strlcat(strlcat_dest1, "is right!", 18), ft_strlcat(strlcat_dest2, "is right!", 18));

    char strlcpy_dest1[20] = "";
    char strlcpy_dest2[20] = "";
    printf("STRLCPY:\noriginal:%zu\nnova:%zu\n\n", strlcpy(strlcpy_dest1, "strlcpy is right!", 18), ft_strlcpy(strlcpy_dest2, "strlcpy is right!", 18));

    printf("STRLEN:\noriginal:%zu\nnova:%zu\n\n", strlen("strlen is right!"), ft_strlen("strlen is right!"));

    printf("STRMAPI:\noriginal:%s\n\n", ft_strmapi("strmapi is right!", to_upp));

    printf("STRNCMP:\noriginal:%d\nnova:%d\n\n", strncmp("test\200", "test\0", 6),
	ft_strncmp("test\200", "test\0", 6));

    printf("STRNSTR:\noriginal:%s\nnova:%s\n\n", strnstr("Hello, World!", "World", 13), ft_strnstr("Hello, World!", "World", 13));

    printf("STRRCHR:\noriginal:%s\nnova:%s\n\n", strrchr("Hello, World!", 'o'), ft_strrchr("Hello, World!", 'o'));

    printf("STRTRIM:\noriginal:%s\nnova:%s\n\n", ft_strtrim("  Hello World  ", " "), ft_strtrim("  Hello World  ", " "));

    printf("SUBSTR:\noriginal:%s\nnova:%s\n\n", ft_substr("Hello, World!", 0, 5), ft_substr("Hello, World!", 0, 5));

    printf("TOLOWER:\noriginal:%c\nnova:%c\n\n", tolower('A'), ft_tolower('A'));

    printf("TOUPPER:\noriginal:%c\nnova:%c\n\n", toupper('a'), ft_toupper('a'));

    return 0;
}

