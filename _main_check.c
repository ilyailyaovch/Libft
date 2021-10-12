#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"


int	ft_isalpha(int symb)
{
	if ((symb >= 'A') && (symb <= 'Z'))
		return (1);
	else if ((symb >= 'a') && (symb <= 'z'))
		return (1);
	else
		return (0);
}

int	ft_isdigit(int symb)
{	
	if ((symb >= '0') && (symb <= '9'))
		return (1);
	return (0);
}

int	ft_isalnum(int symb)
{
	if ((ft_isalpha(symb) != 0) && (ft_isdigit(symb) != 0))
		return (0);
	return (1);
}

int	ft_isascii(int symb)
{
	if ((symb >= 0) && (symb <= 127))
		return (1);
	return (0);
}

int	ft_isprint(int symb)
{
	if ((symb >= 20) && (symb <= 126))
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	coun;

	coun = 0;
	while (str[coun] != '\0')
	{
		coun++;
	}
	return (coun);
}

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t	coun;
	char	*pointer;

	coun = 0;
	pointer = (char *)dest;
	while (coun < n)
	{
		pointer[coun] = c;
		coun++;
	}
	return (dest);
}

void	ft_bzero(void *dest, size_t n)
{
	size_t	coun;
	char	*pointer;

	coun = 0;
	pointer = (char *)dest;
	while (coun < n)
	{
		pointer[coun] = '\0';
		coun++;
	}
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t coun_d;
	size_t coun_all;

	coun_d = 0;
	coun_all = 0;
	while ((dst[coun_all] != '\0') && (coun_all < size - 1))
		coun_all++;
	coun_d = coun_all;
	while((src[coun_all - coun_d] != '\0') && (coun_all < size - 1))
	{
		dst[coun_all] = src[coun_all - coun_d];
		coun_all++;
	}
	while (coun_all < size)
	{
		dst[coun_all] = '\0';
		coun_all++;
	}
	return (ft_strlen(dst));
}

int	ft_toupper(int character)
{
	if ((character >= 'a') && (character <= 'z'))
		character -= 32;
	return (character);
}

char 	*ft_strchr(const char *str, int ch)
{	
	while (*str != '\0')
	{
		if (*str == ch)
			return ((char *)str);
		else
			str++;
	}
	return (NULL);
}

int 	ft_strncmp( const char * str1, const char * str2, size_t num )
{
	size_t 	coun;
	int 	flag;

	coun = 0;
	while (coun < num)
	{
		if (str1[coun] == str2[coun])
			flag = 0;
		else
			return (str1[coun] - str2[coun]);
		coun++;
	}
	return (flag);
}

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			coun;
	unsigned char	*pointer;

	coun = 0;
	pointer = (unsigned char *)str;
	while (coun < n)
	{
		if (*pointer == c)
			return (pointer);
		pointer++;
		coun++;
	}
	return (NULL);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	coun;

	coun = 0;
	while ((src[coun] != '\0') && (coun < size - 1))
	{
		dst[coun] = src[coun];
		coun++;
	}
	while (coun < size)
	{
		dst[coun] = '\0';
		coun++;
	}
	return (ft_strlen((char *)src));
}

static int	ft_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int	ft_sign(int	n)
{
	int	sign;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	return (sign);
}

static unsigned int	ft_abs(int n)
{
	unsigned int	abs;

	if (n < 0)
		abs = -n;
	else
		abs = n;
	return (abs);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				len;
	int				sign;
	unsigned int	abs;

	sign = ft_sign(n);
	abs = ft_abs(n);
	len = ft_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len = len - 1;
	if (sign < 0)
		str[0] = '-';
	while (abs >= 10)
	{
		str[len] = abs % 10 + '0';
		abs /= 10;
		len--;
	}
	str[len] = abs % 10 + '0';
	return (str);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	coun;

	coun = 0;
	if ((dest == NULL) && (src == NULL))
		return (NULL);
	while (coun < n)
	{
		((unsigned char *)dest)[coun] = ((unsigned char *)src)[coun];
		coun++;
	}
	return (dest);
}


char	*ft_strdup(const char *str)
{
	int		len;
	char	*dst;

	len = ft_strlen((char *)str);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	dst = ft_memcpy(dst, str, len + 1);
	return (dst);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	coun;
	char			*dst;
	unsigned int	len_s;
	unsigned int	len_s_need;
	
	len_s = (unsigned int)ft_strlen((char *)s);
	len_s_need = (unsigned int)ft_strlen((char *)s + start);
	coun = 0;
	if (s == NULL)
		return (NULL);
	if (len_s < start)
		return (ft_strdup(""));
	if (len_s_need < len)
		len = len_s_need;
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	ft_strlcpy(dst, s + start, len + 1);
	return (dst);
}

static char	**ft_free_elem(char **str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		free (str[i++]);
	free (str);
	return (NULL);
}

static unsigned int	ft_nb_wd(char const *s, char c)
{
	unsigned int	coun;
	unsigned int	nb;

	coun = 0;
	nb = 0;
	while (s[coun] && s[coun] == c)
		coun++;
	while (s[coun])
	{
		if (s[coun] == c)
		{
			nb++;
			while (s[coun] == c)
				coun++;
			continue ;
		}
		coun++;
	}
	if (s[coun - 1] != c)
		nb++;
	return (nb);
}

static void	ft_str_small(char **s, unsigned int *len, char c)
{
	unsigned int	coun;

	coun = 0;
	*s += *len;
	*len = 0;
	while (**s && **s == c)
		(*s)++;
	while ((*s)[coun])
	{
		if ((*s)[coun] == c)
			return ;
		(*len)++;
		coun++;
	}
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	unsigned int	nb_wd;
	unsigned int	coun;
	unsigned int	len_new;
	char			*str_new_start;
	
	printf("1 \n");
	if (!s || *s == '\0' || c == '\0')
		return (NULL);
	coun = 0;
	str_new_start = (char *)s;
	len_new = 0;
	nb_wd = ft_nb_wd(s, c);
	printf("nb wd; %d \n",nb_wd);
	str = (char **)malloc(sizeof(char *) * (nb_wd + 1));
	if (!str)
		return (NULL);
	while (coun < nb_wd)
	{
		ft_str_small(&str_new_start, &len_new, c);
		str[coun] = (char *)malloc(sizeof(char) * (len_new + 1));
		if (!str[coun])
			return (ft_free_elem(str));
		ft_strlcpy(str[coun], (const char *)str_new_start, len_new + 1);
		coun++;
	}
	str[coun] = NULL;
	return (str);
}

static int	ft_is_char_in_set(char char_in_str, char *set)
{
	unsigned int	coun;

	coun = 0;
	while (set[coun])
	{
		if (set[coun] == char_in_str)
			return (1);
		coun++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	coun;
	unsigned int	start;
	unsigned int	end;

	if (!s1)
		return (NULL);
	if (set == 0)
		return (ft_strdup(s1));
	start = 0;
	coun = 0;
	end = ft_strlen((char *)s1) - 1;
	while ((s1[start]) && (ft_is_char_in_set(s1[start], (char *)set) == 1))
		start++;
	while ((end > start) && (ft_is_char_in_set(s1[end], (char *)set) == 1))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1 + 1));
	if (!str)
		return (NULL);
	while (start <= end)
		str[coun++] = s1[start++];
	str[coun] = '\0';
	return (str);
}

int main(void)
{
	int test = 66;
	const char *test_str = "hello";
	int rez;
	
	rez = ft_isalpha(test);
	printf("--------------------------------\n");
	printf("-1 / 10 = %d\n", (-1 / 10));
	printf("--------------------------------\n");
	printf("ft_isalpha: %d\n", rez);
	rez = ft_isdigit(test);
	printf("ft_isdigit: %d\n", rez);
	rez = ft_isalnum(test);
	printf("ft_isalnum: %d\n", rez);
	rez = ft_isascii(test);
	printf("ft_isascii: %d\n", rez);
	rez = ft_isprint(test);	
	printf("ft_isprint: %d\n", rez);
	rez = ft_strlen((char *)test_str);
	printf("ft_strlen: %d\n", rez);
	printf("--------------------------------\n");
	int itoa = -1;
	printf("ft_itoa: %s\n", ft_itoa(itoa));
	printf("--------------------------------\n");
	char *split = "\0aa\0bbb";
	char sep = '\0';
	char **ans_spl;
	printf("string %s\n",split);
	printf("ft_nb_wd: %d\n", ft_nb_wd((char const *)split, sep));
	ans_spl = ft_split((char const *)split, sep);
	printf("ft_split: %s\n", ans_spl[0]);
	//printf("ft_split: %s\n", (ft_split((char const *)" as\0sd ", '\0'))[1]);
	printf("--------------------------------\n");
	
	printf("--------------------------------\n");
	


	//char test_str_r[] = "helloworld";
	//test_str_r[11] = ft_memset(test_str_r, '&', 2 * sizeof(char));
	//printf("ft_memset: %s\n", test_str_r);
	
	//ft_bzero(test_str_r, 3 * sizeof(char));
	//printf("ft_bzero: %c\n", test_str_r[2]);

	//char d[20] = "ass";
  	//char *s = "LARGER";
  	//int r = ft_strlcpy(d,s, sizeof(d));

	//int test2 = 100;
	//printf("%c", ft_toupper(test2));
	
	//char d[6] = "ass";
  	//char *s = "LARGER";
	//int r = ft_strlcat(d, s, 6);
	//printf("ft_strlcat:%d",r);

	//char d = 'R';
  	//char *s = "LARGER";
	//printf("%s", ft_strchr(s, d));

	//char *d = "LQR";
  	//char *s = "LARGER";
	//printf("ft_strncmp: %d", ft_strncmp(s, d, 2 * sizeof(char)));

	//char *d = "LQR";
  	//char *s = "LARGER";
	//char *r = ft_memchr(s, 'R',  5 * sizeof(char));
	//printf("ft_memchr: %s", r);

	
	
	return (0);
}