# libft

my own library of self-written useful C functions

## compiling
At the root of the repository, run `make`. You can add the repository to your library search path or link the compiled library *libft.a* directly to your executable. Let me know if you run into any problems.

## included functions
- *int `ft_printf`(const char \*format, ...)*
- *int `ft_dprintf`(const int fd, const char \*format, ...)*

***

- *int `get_next_line`(const int fd, char \*\*line)*

***

- *long long int `ft_atoi`(const char \*s)*
- *char \*`ft_itoa`(long long int n)*
- *char \*`ft_itoa_base_unsgnd`(unsigned long long int n, int base, int is_cap, unsigned int len)*

***

- *unsigned int `ft_nbrlen_unsigned`(long long int nbr, int base)*
- *long long int `ft_absolute`(long long int nbr)*
- *unsigned int `ft_absolute_doublelen`(long double ld, unsigned int prcs)*
- *unsigned int `ft_absolute_nbrlen`(long long int nbr, int base)*
- *int `ft_power`(int base, unsigned int exp)*
- *double `ft_double_power`(double base, int exp)*
- *long double `ft_ldouble_power`(long double base, int exp)*

***

- *void `ft_bzero`(void \*s, size_t n)*

***

- *void `ft_swap_ptr`(void \*\*ptr1, void \*\*ptr2)*

***

- *void `ft_lstadd`(t_list \*\*alst, t_list \*item)*
- *void `ft_lstdel`(t_list \*\*alst, void (\*del)(void \*, size_t))*
- *void `ft_lstdelone`(t_list \*\*alst, void (\*del)(void \*, size_t))*
- *void `ft_lstiter`(t_list \*lst, void (\*f)(t_list \*elem))*
- *t_list \*`ft_lstmap`(t_list \*lst, t_list \*(\*f)(t_list \*elem))*
- *t_list \*`ft_lstnew`(void const \*content, size_t content_size)*
- *void `ft_lstadd_back`(t_list \*\*alst, t_list \*item)*
- *void `ft_lstfold`(t_list \*\*alst, t_list \*start, t_list \*end)*
- *void `ft_lstadd_behind`(t_list \*\*alst, t_list \*node, t_list \*new_nd)*
- *void `ft_lstadd_before`(t_list \*\*alst, t_list \*node, t_list \*new_nd)*
- *size_t `ft_lstcount`(t_list \*lst)*
- *t_list \*`ft_lstdequeue`(t_list \*\*alst)*
- *void `ft_delete`(void \*ptr, size_t size)*

***

- *void \*`ft_memalloc`(size_t size)*
- *void \*`ft_memccpy`(void \*dst, const void \*src, int c, size_t n)*
- *void \*`ft_memchr`(const void \*s, int c, size_t n)*
- *int `ft_memcmp`(const void \*s1, const void \*s2, size_t n)*
- *void \*`ft_memcpy`(void \*dst, const void \*src, size_t n)*
- *void `ft_memdel`(void \*\*ap)*
- *void \*`ft_memmove`(void \*dst, const void \*src, size_t len)*
- *void \*`ft_memset`(void \*b, int c, size_t len)*
- *void \*`ft_memdup`(void \*ptr, size_t size)*

***

- *char \*`ft_strcat`(char \*s1, const char \*s2)*
- *char \*`ft_strchr`(const char \*s, int c)*
- *void `ft_strclr`(char \*s)*
- *int `ft_strcmp`(const char \*s1, const char \*s2)*
- *char \*`ft_strcpy`(char \*dst, const char \*src)*
- *void `ft_strdel`(char \*\*as)*
- *void `ft_strarrdel`(char \*\*\*arr)*
- *char \*`ft_strdup`(const char \*s)*
- *int `ft_strequ`(const char \*s1, const char \*s2)*
- *void `ft_striter`(char \*s, void(\*f)(char\*))*
- *void `ft_striteri`(char \*s, void(\*f)(unsigned int, char\*))*
- *char \*`ft_strjoin`(const char \*s1, const char \*s2)*
- *size_t `ft_strlcat`(char \*s1, const char \*s2, size_t size)*
- *size_t `ft_strlen`(const char \*s)*
- *char \*`ft_strmap`(const char \*s, char(\*f)(char))*
- *char \*`ft_strmapi`(const char \*s, char (\*f)(unsigned int, char))*
- *char \*`ft_strncat`(char \*s1, const char \*s2, size_t n)*
- *int `ft_strncmp`(const char \*s1, const char \*s2, size_t n)*
- *char \*`ft_strncpy`(char \*dst, const char \*src, size_t len)*
- *int `ft_strnequ`(const char \*s1, const char \*s2, size_t n)*
- *char \*`ft_strnew`(size_t size)*
- *char \*`ft_strnstr`(const char \*hay, const char \*needle, size_t n)*
- *char \*`ft_strrchr`(const char \*s, int c)*
- *char \*\*`ft_strsplit`(const char \*s, char c)*
- *char \*`ft_strstr`(const char \*hay, const char \*needle)*
- *char \*`ft_strsub`(const char \*s, unsigned int start, size_t len)*
- *char \*`ft_strtrim`(const char \*s)*
- *char \*`ft_strrev`(char \*s)*

***

- *void `ft_putchar`(char c)*
- *void `ft_putchar_fd`(char c, int fd)*
- *void `ft_putnbr`(int n)*
- *void `ft_putnbr_fd`(int n, int fd)*
- *void `ft_putendl`(const char \*s)*
- *void `ft_putendl_fd`(const char \*s, int fd)*
- *void `ft_putstr`(const char \*s)*
- *void `ft_putstr_fd`(const char \*s, int fd)*
- *ssize_t `ft_putnstr_fd`(const char \*str, size_t len, int fd)*

***

- *int `ft_isint`(char \*str)*
- *int `ft_isalnum`(int c)*
- *int `ft_isalpha`(int c)*
- *int `ft_isascii`(int c)*
- *int `ft_isdigit`(int c)*
- *int `ft_isprint`(int c)*
- *int `ft_islower`(int c)*
- *int `ft_isupper`(int c)*

***

- *int `ft_tolower`(int c)*
- *int `ft_toupper`(int c)*

## contributors
 - Wendell
 - Flavio
