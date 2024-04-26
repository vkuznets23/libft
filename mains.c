/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mains.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkuznets <vkuznets@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:54:12 by vkuznets          #+#    #+#             */
/*   Updated: 2024/04/26 12:23:46 by vkuznets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

//ft_atoi
int	main(void)
{
	printf("%i\n", ft_atoi("-123"));
	printf("%i\n", ft_atoi("123"));
}

//ft_bzero
int	main(void)
{
	char	buffer[20];

	ft_bzero(buffer, 10);
	printf("%s\n", buffer);
}

//ft_calloc
int	main(void)
{
	int	*array;
	int i;
	int j;

	i = 4;
	j = 1;
	array = ft_calloc(i, sizeof(int));
	while (++j < i)
		printf("%i\n", array[j]);
}

//ft_isalnum
int	main(void)
{
	printf("%i\n", ft_isalnum('4'));
	printf("%i\n", ft_isalnum('A'));
	printf("%i\n", ft_isalnum('a'));
	printf("%i\n", ft_isalnum(':'));
	printf("%i\n", ft_isalnum('	'));
}

//ft_isalpha
int	main(void)
{
	printf("%i\n", ft_isalpha('a'));
	printf("%i\n", ft_isalpha('w'));
	printf("%i\n", ft_isalpha('A'));
	printf("%i\n", ft_isalpha('6'));
	printf("%i\n", ft_isalpha(':'));
	printf("%i\n", ft_isalpha('	'));
}

//ft_ascii
int	main(void)
{
	printf("%i\n", ft_isascii('a'));
	printf("%i\n", ft_isascii(' '));
	printf("%i\n", ft_isascii('	'));
	printf("%i\n", ft_isascii('D'));
	printf("%i\n", ft_isascii('3'));
}

//ft_isdigit
int	main(void)
{
	printf("%i\n", ft_isdigit('1'));
	printf("%i\n", ft_isdigit('3'));
	printf("%i\n", ft_isdigit('k'));
	printf("%i\n", ft_isdigit(':'));
}

//ft_isprint
int	main(void)
{
	printf("%i\n", ft_isprint('!'));
	printf("%i\n", ft_isprint('7'));
	printf("%i\n", ft_isprint('G'));
	printf("%i\n", ft_isprint('t'));
	printf("%i\n", ft_isprint('|'));
	printf("%i\n", ft_isprint('	'));
}

//ft_itoa
int	main(int ac, char **av)
{
	char	*str;
	str = ft_itoa(atoi(av[1]));
	printf("%s", str);
	free(str);
}

//ft_memchr
int	main(void)
{
	printf("%s", ft_memchr("ehhllo", 'h', 7));
}

//ft_memcmp
int	main(void)
{
	printf("%i", ft_memcmp("", "", 7));
}

//ft_memcpy
int	main(void)
{
	char	*p;
	char	dest[20];

	p = ft_memcpy(dest, "Hello", 3);
	printf("%s", p);
}

//ft_memmove
int	main(void)
{
	char src[] = "123456789";
	char src2[] = "123456789";
	//char buffer [20];
	memmove(src, src + 2, 0);
	printf("Memmove: %s\n", src);

	ft_memmove(src2, src2 + 2, 0);
	printf("ft_memmove: %s\n", src2);
}

//ft_memset_fd
int	main(void)
{
	unsigned char buffer[20];
	unsigned char *str;
	str = ft_memset(buffer, 'x', 10);
	printf("%s\n", str);
}

//ft_putchar_fd
*int	main(void)
{
	ft_putchar_fd('a', 1);
}

//ft_putendl_fd
{
	ft_putendl_fd("Hello", 1);
}

//ft_putnbr_fd
*int	main(int ac, char **av)
{
	ft_putnbr_fd(atoi(av[1]), atoi(av[2]));
}

//ft_putstr_fd
*int	main(int ac, char **av)
{
	ft_putstr_fd(av[1], 1);
}

//ft_split
int	main(int ac, char **av)
{
	char	**str;
	int		i;

	i = 0;
	str = ft_split(av[1], av[2][0]);
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}

//ft_strchr
int	main(void)
{
	printf("%s", ft_strchr("Hello", 'e'));
}

//ft_strdup
int	main(void)
{
	printf("%s\n", ft_strdup("Hello"));
}


//ft_striteri
void	my_function(unsigned int i, char *str)
{
	printf("%i %c\n", i, *str);

	//if (*str >= 'a' && *str <= 'z')
	//	*str =  *str - 32;
	//printf("%i\n", ft_strlen(str));
}

int	main(int ac, char **av)
{
	char *str;

	str = "Hello";
	ft_striteri(str, &my_function);
	printf("%s\n", av[1]);
}

//ft_strjoin
int	main(void)
{
	printf("%s\n", ft_strjoin("Hello", "Hello"));
}

//ft_strlcat
int	main(void)
{
	char	dest[10] = "hello ";
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcat(dest, "world", 12));
	printf("%zu\n", strlcat(dest, "world", 12));
	//printf("%zu\n", ft_strlcat(dest, "world", 12));
	printf("%s\n", dest);
}

//ft_strlcpy
int	main(void)
{
	char dest[10];
	printf("%zu", ft_strlcpy(dest, "Hello", 3));
}

//ft_strlen
int	main(void)
{
	printf("%i", ft_strlen("Hello"));
}

//ft_strmapi
char name_function(unsigned int i, char c)
{
	printf("%i %c\n", i, c);
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(void)
{
	printf("%s\n", ft_strmapi("Hello Jere", &name_function));
}

//ft_strcmp
int	main(void)
{
	printf("%i\n", ft_strncmp("Hello", "Hello", 5));
	printf("%i\n", ft_strncmp("ab", "acb", 3));
	printf("%i\n", ft_strncmp("abd", "abc", 3));
}

//ft_strnstr
int	main(void)
{
	printf("%s\n", ft_strnstr("Hellooollp", "lol", 99));
	printf("%s\n", strnstr("Hellooollp", "lol", 99));
}

//ft_strrchr
int	main(void)
{
	printf("%s", ft_strrchr("abbablabkac", 'b'));
}

//ft_strtrim
int	main(void)
{
	const char	*h;

	h = "h";
	printf("%s\n", ft_strtrim("hhhellohh", h));
}

//ft_substr
int	main(void)
{
	printf("%s\n", ft_substr("Hello", 1, 2));
}

//ft_tolower
int	main(void)
{
	printf("%c\n", ft_tolower('G'));
	printf("%c\n", ft_tolower('y'));
	printf("%c\n", ft_tolower('0'));
	printf("%c\n", ft_tolower(';'));
}

//ft_toupper
int	main(void)
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('S'));
	printf("%c\n", ft_toupper(';'));
	printf("%c\n", ft_toupper('	'));
}

//ft_lstadd_back
int	main(void)
{
	t_list *lst = NULL;
	lst = ft_lstnew("first");
	lst->next = ft_lstnew("second");

	t_list *third = ft_lstnew("3");
	t_list *forth = ft_lstnew("4");
	ft_lstadd_back(&lst, third);
	ft_lstadd_back(&lst, forth);

	while (lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

//ft_lstadd_front
int	main(void)
{
	t_list *first = ft_lstnew("first");
	t_list *second = ft_lstnew("second");

	t_list *lst = NULL;
	ft_lstadd_front(&lst, first);
	ft_lstadd_front(&lst, second);

	while (lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}

// ft_lstclear
void	del(void *content)
{
	free(content);
}

#include <stdio.h>
int	main(void)
{
	t_list *lst = NULL;
	lst = ft_lstnew(ft_strdup("Hello"));
	printf("Original content: %s\n", (char *)lst->content);
	ft_lstclear(&lst, del);
}

//ft_lstdelone
void	del(void *content)
{
	free(content);
}

#include <stdio.h>
int	main(void)
{
	t_list	*lst = NULL;
	char *str = ft_strdup("hello");
	lst = ft_lstnew(str);
	printf("Original content: %s\n", (char *)lst->content);
	ft_lstdelone(lst, del);
	printf("Second content: %s\n", (char *)lst->content);
}

//ft_lstiter
void	f(void *content)
{
	
}
#include <stdio.h>
int	main(void)
{
	t_list	*lst = ft_strdup("Hello");
	printf("First print: %s\n", lst);
	ft_lstiter(lst, f);
	printf("Second print: %s\n", lst);
}

//ft_lstlast
#include <stdio.h>
int	main(void)
{
	t_list	*first = ft_lstnew("first");
	t_list	*second = ft_lstnew("second");
	t_list 	*lst = NULL;

	ft_lstadd_front(&lst, first);
	ft_lstadd_front(&lst, second);
	ft_lstlast(lst);
	while (lst != NULL)
	{
		printf("Result of lstnew: %s\n", (char *)lst->content);
		printf("Last node: %s\n", (char *)lst->content);
		lst = lst->next;
	}
}

//ft_lstnew
#include <stdio.h>
void ft_printf_lst(t_list * begin)
{
	while (begin)
	{
		printf("%i\n", *(int *)begin->content);
		begin = begin->next;
	}
}

int	main(void)
{
	t_list	*begin;
	int i = 1;
	int j = 2;

	begin = ft_lstnew(&i);
	begin->next = ft_lstnew(&j);
	ft_printf_lst(begin);
}

//ft_lstsize
#include <stdio.h>
int	main(void)
{
	t_list	*first = ft_lstnew("1");
	t_list	*second = ft_lstnew("2");
	t_list 	*lst = NULL;

	ft_lstadd_front(&lst, first);
	ft_lstadd_front(&lst, second);
	while (lst != NULL)
	{
		printf("Result of lstnew: %s\n", (char *)lst->content);
		printf("%i\n", ft_lstsize(lst));
		lst = lst->next;
	}
}

//ft_split
char	**ft_split(char const *s, char c)
{
	char	**d;
	int		i;
	int		j;
	int		n;

	i = 0;
	n = 0;
	d = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!d)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			while (s[i + j] != c && s[i + j])
				j++;
			d[n++] = ft_substr(s, i, j);
			if (!d[n - 1])
			{
				free_function(d, n - 1);
				return (0);
			}
			i += j;
		}
	}
	d[n] = 0;
	return (d);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	char	**str;
	int		i;

	i = 0;
	str = ft_split(av[1], av[2][0]);
	while (str[i])
	{
		printf("%s\n", str[i]);
		i++;
	}
}*/
