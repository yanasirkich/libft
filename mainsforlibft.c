/***************** atoi *****************/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char *s = "-21474836481111111111111111111111111111111111";
    char *str;

    int i = 2;
    while (i < 40)
    {
        str = malloc(i + 1);
        memcpy(str, s, i);
        str[i] = 0;
        printf("%s\n", str);
        printf("%i\n", atoi(str));
        printf("%i\n\n", ft_atoi(str));
        free(str);
        i++;
    }
}

/***************** bzero *****************/
#include <stdio.h>
#include <string.h>
int	main (void)
{
	size_t n = 2;
	char *str = malloc(9 * sizeof(char));
	if (!str)
		return (1);
	strcpy(str, "abcdcdee");
	printf("String before applying ft_bzero to the first %zu characters:\n", n);
    printf("'%s'\n", str);

	 ft_bzero(str, n);

	printf("String after applying ft_bzero to the first %zu characters:\n", n);
    printf("'%s'\n", str);

	free(str);
	return (0);
}

/***************** calloc *****************/

/***************** isalnum *****************/
#include <stdio.h>
int	main(void)
{
	int	i;
	int	ascii;
	int	result;
	i = 0;
	 char *test_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@#$%^&*()_+{}:\"<>?|=[];',./~";
	 while(test_chars[i] != '\0')
	 {
		ascii = test_chars[i];
		result = ft_isalnum(ascii);
		i++;
		 printf("'%c' is alphanumeric: %s\n", test_chars[i], result? "true" : "false");
	 }
	 return (0);
}

/***************** isalpha *****************/
#include <stdio.h>
int	main(void)
{
	int	i;
	int	ascii;
	int	result;
	i = 0;
	 char *test_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789@#$%^&*()_+{}:\"<>?|=[];',./~";
	 while(test_chars[i] != '\0')
	 {
		ascii = test_chars[i];
		result = ft_isalpha(ascii);
		i++;
		printf("'%c' is alphabetic: %s\n", test_chars[i], result? "true" : "false");

	 }
	 return (0);
}

/***************** isascii *****************/
#include <stdio.h>
int	main(void)
{
	int	i;
	int	ascii;
	int	result;
	char *test = "def23456789\"#$%&'()*+,-./0123456789:;<=>?@UVWXYZ[\\]^_`abcstuvwxyz{|}~";
	i = 0;
	while(test[i] != '\0')
	 {
		ascii = test[i];
		result = ft_isascii(ascii);
		i++;
		printf("'%c' is within the ASCII range: %s\n", test[i], result? "true" : "false");
	 }
	 return (0);
}

/***************** isdigit *****************/
#include <stdio.h>
int	main(void)
{
	int	i;
	int	result;
	int	ascii;
	char *test = "sdfyj3445&&8-9//.'\\;df5";
	
	i = 0;
	while (test[i] != '\0')
	{
		ascii = test[i];
		result = ft_isdigit(ascii);
		printf ("%c is a digit: %s\n", test[i], result ? "true" : "false");
		i++;
	}
	return (0);
}

/***************** isprint *****************/
#include <stdio.h>
int	main(void)
{
	int	i;
	char *str;

	i = 0;
	str = "Hello0\t9837  2948''";
	while (str[i] != '\0')
	{
		if (ft_isprint(str[i]) != 0)
			printf("%c is a printable\n", str[i]);
		else
			printf("%c is not a printable\n", str[i]);
		i++;
	}
	return (0);
}

/***************** itoa *****************/
#include <stdio.h>
int	main(void)
{
	int	i;
	int	numtests;
	char *str;

	int	test[] = {-2147483648, -123456789, 0, 123456789, 2147483647};
	numtests = 5;
	i = 0;
	while (i < numtests)
	{
		str = ft_itoa(test[i]);
		printf("integer %d to a string %s\n", test[i], str);
		i++;
		free(str);
	}
	return (0);
}

/***************** memchr *****************/
#include <stdio.h>
int	main (void)
{
	char	*s;
	int		c;
	size_t	n;
	char *result;

	s = "whiskey is my pupply";
	c = 'l';
	n = 20;
	result = ft_memchr(s, c, n);
	if (result != NULL)
		printf("character %c is at position %zu\n", c, result - s);
	else
		printf ("character %c is not found\n", c);
	return (0);

}
/***************** memcmp *****************/
#include <stdio.h>
int	main (void)
{
	const char	*s1;
	const char	*s2;
	size_t		n;
	int			result;

	s1 = "yana";
	s2 = "yana";
	n = 5;
	result = ft_memcmp(s1, s2, n);
	printf ("s1 |%s| and s2 |%s| are %s\n", s1, s2, result == 0? "same" : "different");
	return (0);
}

/***************** memcpy *****************/
