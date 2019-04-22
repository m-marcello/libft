/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   testthisshit.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 19:05:54 by mmarcell       #+#    #+#                */
/*   Updated: 2019/02/23 16:57:45 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

static void		uf_striteri_callback(unsigned int i, char *s)
{
	*s = *s + i;
}

static void		uf_striter_callback(char *s)
{
	*s = *s + 1;
}

int     main(void)
{
/* 	//test ft_get_decimals
	ft_putchar('\n');
	ft_putendl("ft_get_decimals");
	if (ft_get_decimals(345) == 3)
		ft_putstr("check ");
	else
		ft_putnbr(ft_get_decimals(345));
	if (ft_get_decimals(-2) == 1)
		ft_putstr(" check ");
	else
		ft_putstr("error with ft_get_decimal(-2) ");
	if (ft_get_decimals(0) == 1)
		ft_putendl("check");
	else
		ft_putendl("error with ft_get_decimal(0)");
	//test ft_power
	ft_putchar('\n');
	ft_putendl("ft_power");
	if (ft_power(2, 0) == 1)
		ft_putstr("check ");
	else 
		ft_putstr("error with 2^0 ");
	if (ft_power(-21, 7) == -1801088541)
		ft_putstr("check ");
	else 
		ft_putstr("error with (-21)^7 ");
	if (ft_power(1, 50) == 1)
		ft_putstr("check ");
	else 
		ft_putstr("error with 1^50 ");
	if (ft_power(0, 7) == 0)
		ft_putendl("check");
	else 
		ft_putendl("error with 0^7");
 */
/* 		//test ft_itoa_base
	ft_putchar('\n');
	ft_putendl("ft_itoa_base");
	if (ft_strcmp(ft_itoa_base(-2147483648, 10), "-2147483648") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with -2147483648 ");
	if (ft_strcmp(ft_itoa_base(-21, 8), "-25") == 0)
		ft_putstr("check ");
	else
		ft_putstr("eror with -21 ");
 	if (ft_strcmp(ft_itoa_base(0, 7), "0") == 0)
		ft_putendl("check ");
	else
		ft_putendl("error with 0 ");
 */
	//test ft_atoi using ft_put...-class
	ft_putchar('\n');
	ft_putendl("ft_atoi");
	if (ft_atoi("+42") == atoi("+42"))
		ft_putstr("check ");
	else
		ft_putstr("ft_atoi('+42')is incorrect. ");
	if (ft_atoi("+-32") == atoi("+-32"))
		ft_putstr("check ");
	else
		ft_putstr("ft_atoi('+-32')is incorrect. ");
	if (ft_atoi("\n \t\r\v\f-32") == atoi("\n \t\r\v\f-32"))
		ft_putstr("check ");
	else
		ft_putstr("ft_atoi('\n \t\r\v\f-32')is incorrect. ");
	if (ft_atoi("-32") == atoi("-32"))
		ft_putstr("check ");
	else
		ft_putstr("ft_atoi('-32')is incorrect. ");
	if (ft_atoi("-2147483648") == atoi("-2147483648"))
		ft_putstr("check ");
	else
	{
		ft_putstr("ft_atoi('-2147483648')is : ");
		ft_putnbr(ft_atoi("-2147483648"));
	}
	if (ft_atoi("21.47483647") == atoi("21.47483647"))
		ft_putstr("check ");
	else
	{
		ft_putstr("ft_atoi('21.47483647')is : ");
		ft_putnbr(ft_atoi("21.47483647"));
	}
	if (ft_atoi("gfjsksu") == atoi("gfjsksu"))
		ft_putstr("check ");
	else
		ft_putstr("ft_atoi('gfjsksu')is incorrect. ");
	if (ft_atoi("-0") == atoi("-0"))
		ft_putstr("check ");
	else
		ft_putstr("ft_atoi('-0')is incorrect. ");
	if (ft_atoi("--56") == atoi("--56"))
		ft_putendl("check");
	else
		ft_putendl("ft_atoi('--56')is incorrect.");
	// test ft_putnbr using ft_put(...)-class
	ft_putchar('\n');
	ft_putendl("ft_putnbr");
	ft_putnbr(12);
	ft_putstr(" is equal 12\n");
	ft_putnbr(-42);
	ft_putendl(" is equal -42");
	ft_putnbr(2147483647);
	ft_putstr_fd(" is equal 2147483647", 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr(-2147483648);
	ft_putendl_fd(" is equal -2147483648", 1);
	ft_putnbr(0);
	ft_putstr(" is equal 0");
	ft_putchar('\n');
	//test ft_putnbr_fd using ft_put(...)-class
	ft_putchar('\n');
	ft_putendl("ft_putnbr_fd");
	ft_putnbr_fd(12, 1);
	ft_putstr(" is equal 12\n");
	ft_putnbr_fd(-42, 2);
	ft_putendl(" is equal -42");
	ft_putnbr_fd(2147483647, 0);
	ft_putstr_fd(" is equal 2147483647", 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(-2147483648, 2);
	ft_putendl_fd(" is equal -2147483648", 1);
	ft_putnbr_fd(0, 2);
	ft_putstr(" is equal 0");
	ft_putchar('\n');
	//test ft_strcmp
	ft_putchar('\n');
	ft_putendl("ft_strcmp");
	if (ft_strcmp("hallo", "hallo") == strcmp("hallo", "hallo"))
		ft_putstr("check ");
	else
		ft_putstr("error in comparing ('hallo', 'hallo'). ");
	if (ft_strcmp("ㅣ겨ㅗ여자ㅓㄹ록", "ㅣ겨ㅗ여자ㅓ록") ==
			strcmp("ㅣ겨ㅗ여자ㅓㄹ록", "ㅣ겨ㅗ여자ㅓ록"))
		ft_putstr("check ");
	else
		ft_putstr("error in comparing ㅣ겨ㅗ여자ㅓㄹ록 and ㅣ겨ㅗ여자ㅓ록. ");
	if (ft_strcmp("", "test") == strcmp("", "test"))
		ft_putstr("check ");
	else
		ft_putstr("error in comparing empty string with 'test'. ");
	if (ft_strcmp("ོམ྅ ྅འནི ཕའད྅ེ མུ྅", "ོམ྅ ྅འནི ཕའད྅ེ མུ྅") ==
			strcmp("ོམ྅ ྅འནི ཕའད྅ེ མུ྅", "ོམ྅ ྅འནི ཕའད྅ེ མུ྅"))
		ft_putendl("check");
	else
		ft_putendl("error in comparing 'ོམ྅ ྅འནི ཕའད྅ེ མུ྅' with itself");
	//test ft_strncmp
	ft_putchar('\n');
	ft_putendl("ft_strncmp");
	if (ft_strncmp("hallo", "hallo", 7) == strncmp("hallo", "hallo", 7))
		ft_putstr("check ");
	else
		ft_putstr("error in comparing ('hallo', 'hallo'). ");
	if (ft_strncmp("ㅣ겨ㅗ여자ㅓㄹ록", "ㅣ겨ㅗ여자ㅓ록", 4) ==
			strncmp("ㅣ겨ㅗ여자ㅓㄹ록", "ㅣ겨ㅗ여자ㅓ록", 4))
		ft_putstr("check ");
	else
		ft_putstr("error in comparing ㅣ겨ㅗ여자ㅓㄹ록 and ㅣ겨ㅗ여자ㅓ록. ");
	if (ft_strncmp("", "test", 0) == strncmp("", "test", 0))
		ft_putstr("check ");
	else
		ft_putstr("error in comparing empty string with 'test'. ");
	if (ft_strncmp("ོམ྅ ྅འནི ཕའད྅ེ མུ྅", "ོམ྅ ྅འནི ཕའད྅ེ མུ྅", 8) ==
			strncmp("ོམ྅ ྅འནི ཕའད྅ེ མུ྅", "ོམ྅ ྅འནི ཕའད྅ེ མུ྅", 8))
		ft_putendl("check");
	else
		ft_putendl("error in comparing 'ོམ྅ ྅འནི ཕའད྅ེ མུ྅' with itself");
	//test ft_tolower
	ft_putchar('\n');
	ft_putendl("ft_tolower");
	if (ft_tolower(-2147483648) == tolower(-2147483648))
		ft_putstr("check ");
	else
		ft_putstr("error with 'a'. ");
	if (ft_tolower('K') == tolower('k'))
		ft_putstr("check ");
	else
		ft_putstr("error with 'K'. ");
	if (ft_tolower(42) == tolower('*'))
		ft_putendl("check");
	else
		ft_putendl("error with '*'.");
	//test ft_toupper
	ft_putchar('\n');
	ft_putendl("ft_toupper");
	if (ft_toupper(-2147483648) == toupper(-2147483648))
		ft_putstr("check ");
	else
		ft_putstr("error with 'a'. ");
	if (ft_toupper('K') == toupper('K'))
		ft_putstr("check ");
	else
		ft_putstr("error with 'K'. ");
	if (ft_toupper('*') == toupper(42))
		ft_putendl("check");
	else
		ft_putendl("error with '*'.");
	//test ft_itoa
	ft_putchar('\n');
	ft_putendl("ft_itoa");
	if (ft_strcmp(ft_itoa(-2147483648), "-2147483648") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with -2147483648 ");
	if (ft_strcmp(ft_itoa(-21), "-21") == 0)
		ft_putstr("check ");
	else
		ft_putstr("eror with -21 ");
	if (ft_strcmp(ft_itoa(2147483647), "2147483647") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with 2147483647 ");
	if (ft_strcmp(ft_itoa(0), "0") == 0)
		ft_putendl("check ");
	else
		ft_putendl("error with 0 ");
	//test ft_isdigit
	ft_putchar('\n');
	ft_putendl("ft_isdigit");
	if (ft_isdigit('0') == isdigit('0'))
		ft_putstr("check ");
	else
		ft_putstr("error with '0' ");
	if (ft_isdigit(42) == isdigit(42))
		ft_putstr("check ");
	else
		ft_putstr("error with 42");
	if (ft_isdigit(500) == isdigit(500))
		ft_putendl("check");
	else
		ft_putendl("error with 500");
	//test ft_isalpha, ft_islower, ft_isupper
	ft_putchar('\n');
	ft_putendl("ft_isalpha");
	if (ft_isalpha('0') == isalpha('0'))
		ft_putstr("check ");
	else
		ft_putstr("error with '0' ");
	if (ft_isalpha('g') == isalpha('g'))
		ft_putstr("check ");
	else
		ft_putstr("error with 'g' ");
	if (ft_isalpha('Y') == isalpha('Y'))
		ft_putstr("check ");
	else
		ft_putstr("error with 'Y' ");
	if (ft_isalpha(-2147483648) == isalpha(-2147483648))
		ft_putendl("check");
	else
		ft_putendl("error with -2147483648");
	//test ft_isalnum
	ft_putchar('\n');
	ft_putendl("ft_isalnum");
	if (ft_isalnum(68) == isalnum(68))
		ft_putstr("check ");
	else
		ft_putstr("error with 68. ");
	if (ft_isalnum('5') == isalnum('5'))
		ft_putstr("check ");
	else
		ft_putstr("error with '5'. ");
	if (ft_isalnum('z') == isalnum('z'))
		ft_putstr("check ");
	else
		ft_putstr("error with 'z'. ");
	if (ft_isalnum('W') == isalnum('W'))
		ft_putstr("check ");
	else
		ft_putstr("error with 'W'. ");
	if (ft_isalnum(-2147483648) == isalnum(-2147483648))
		ft_putendl("check");
	else
		ft_putendl("error with -2147483648. ");
	//test ft_bzero
	ft_putchar('\n');
	ft_putendl("ft_bzero");
	int		*int_arr;
	int_arr = (int*)malloc(6);
	int_arr[1] = 99999;
	int_arr[0] = 10000;
	ft_bzero(int_arr, 8);
	if (int_arr[1] == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with int-array.");
	free(int_arr);
	char	*char_arr;
	char_arr = (char*)malloc(20);
	char_arr[16] = 42;
	ft_bzero(char_arr, 20);
	if (char_arr[16] == 0)
		ft_putendl("check");
	else
		ft_putendl("error with char-array.");
	//test ft_memset
	ft_putchar('\n');
	ft_putendl("ft_memset");
	char_arr = ft_memset(char_arr, '*', 16);
	if (strcmp(char_arr, "****************") == 0)
		ft_putstr("check ");
	else
		ft_putstr("problem with ft_memset ");
	char_arr = ft_memset(char_arr, '5', 5);
	if (strcmp(char_arr, "55555***********") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with ft_memset ");
	char_arr = ft_memset(char_arr, 0, 16);
	if (strcmp(char_arr, "") == 0)
		ft_putendl("check ");
	else
		ft_putendl("error with ft_memset ");
	//test ft_memcpy
	ft_putchar('\n');
	ft_putendl("ft_memcpy");
	int k;
	char buffer[256];
	char buffer2[256];
	char	*ret_ft_memcpy;
	ft_memset(buffer, 'X', 255);
	buffer[255] = '\0';
	for (k=0; k<10; k++)
		buffer[k] = '0' + k;
	for (k=0; k<26; k++)
		buffer[10 + k] = 'a' + k;
	ret_ft_memcpy = ft_memcpy(buffer2, buffer, 255);
	if (ft_strcmp(ret_ft_memcpy, buffer) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error ");
	k = 0;
	char buffer3[256];
	char buffer4[256];
	char	*ret2_ft_memcpy;
	ft_memset(buffer3, 'X', 255);
	buffer3[255] = '\0';
	for (k=0; k<10; k++)
		buffer3[k] = '0' + k;
	for (k=0; k<26; k++)
		buffer3[10 + k] = 'a' + k;
	ret2_ft_memcpy = ft_memcpy(buffer4 + 5, buffer3 + 10, 10);
	if (ft_strcmp(ret2_ft_memcpy, buffer3) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error ");
	
	int_arr[0] = 42;
	if (ft_strcmp(ft_memcpy(char_arr, int_arr, 1), "*") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error ");
	if (ft_strcmp(ft_memcpy(char_arr, "Halli hallo", 12), "Halli hallo") == 0)
		ft_putendl("check");
	else
		ft_putendl("error");
	free(char_arr);
	//test ft_strlen
	ft_putchar('\n');
	ft_putendl("ft_strlen");
	if (ft_strlen("Moana") == strlen("Hallo"))
		ft_putstr("check ");
	else
		ft_putstr("len of Moana not ok. ");
	if (ft_strlen("") == strlen(""))
		ft_putendl("check");
	else
		ft_putendl("error with empty string.");
	//test ft_memchr
	ft_putchar('\n');
	ft_putendl("ft_memchr");
	if (ft_strcmp("Moana", ft_memchr("Moana", 'n', 5)) != 0)
		ft_putstr("check ");
	else
		ft_putstr("error ");
	if (ft_strcmp("Hase", ft_memchr("Mein Name ist Hase", 'H', 16)) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error ");
	if (ft_memchr("und ich weiss von nichts.", 'h', 5) == 0)
		ft_putendl("check");
	else
		ft_putendl("error");
	//test ft_memccpy
	ft_putchar('\n');
	ft_putendl("ft_memccpy");
	char	char_arr2[27] = "09876543210";
	char	char_arr3[22] = "12345678901";
	if (ft_strcmp(ft_memccpy(char_arr2, char_arr3, '4', 9),
			memccpy(char_arr2, char_arr3, '4', 9)) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error ");
	char	char_arr4[27] = "09876543210987654321098765";
	char	char_arr5[22] = "123456789012345678901";
	if (ft_memccpy(char_arr3, char_arr4, '3', 0)
			== memccpy(char_arr4, char_arr5, '3', 0))
		ft_putstr("check ");
	else
		ft_putstr("error ");
	int		int_arr2[5] = {1, 2, 3, 4, 5};
	int		int_arr3[6] = {-1, -2, -3, -4, -5, -6};
	if (ft_memccpy(int_arr2, int_arr3, -3, 5) == 0)
		ft_putendl("check");
	else
		ft_putendl("error with int arr");
	//test ft_memcmp
	ft_putchar('\n');
	ft_putendl("ft_memcmp");
	if (ft_memcmp(char_arr4, char_arr5, 20)
			== memcmp(char_arr4, char_arr5, 20))
		ft_putstr("check ");
	else
		ft_putstr("error with comparing char to char");
	if (ft_memcmp(int_arr3, char_arr4, 20)
			== memcmp(int_arr3, char_arr4, 20))
		ft_putstr("check ");
	else
		ft_putstr("error with comparing char to int ");
	if (ft_memcmp(int_arr3, char_arr4, 20)
			== memcmp(int_arr3, char_arr4, 20))
		ft_putstr("check ");
	else
		ft_putstr("error with comparing char to int ");
	if (ft_memcmp("1234567890", char_arr5, 9)
			== memcmp("1234567890", char_arr5, 9))
		ft_putendl("check ");
	else
		ft_putendl("error with comparing wehn equal ");
	//test ft_memmove
	ft_putchar('\n');
	ft_putendl("ft_memmove");
	if (ft_strcmp(ft_memmove(char_arr2, char_arr3, 11),
			memmove(char_arr2, char_arr3, 11)) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with char_arr, non overlapping ");
	if(ft_strcmp(ft_memmove(char_arr3, char_arr3 + 2, 4),
			memmove(char_arr3, char_arr3 + 2, 4)) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with char_arr, overlapping ");
	if(ft_strcmp(ft_memmove(char_arr3, char_arr3 + 2, 0),
			memmove(char_arr3, char_arr3 + 2, 0)) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with 0 bytes move ");
	if(ft_strcmp(ft_memmove(char_arr3 + 2, char_arr3, 4),
			memmove(char_arr3 + 2, char_arr3, 4)) == 0)
		ft_putendl("check ");
	else
		ft_putendl("error with char_arr, overlapping ");
	//test ft_memalloc
	ft_putchar('\n');
	ft_putendl("ft_memalloc");
	char	*ptr = ft_memalloc(4);
	if (ptr[3] == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with memalloc(4), char ");
	int		*ptr2 = ft_memalloc(4);
	if (ptr2[0] == 0)
		ft_putendl("check ");
	else
		ft_putendl("error with memalloc(4) int ");
	//test ft_memdel
	ft_putchar('\n');
	ft_putendl("ft_memdel");
	ft_memdel((void**)&ptr);
	if (ptr)
		ft_putstr("error with memdel(char_arr) ");
	else
		ft_putstr("check ");
	ft_memdel((void**)&ptr2);
	if (ptr2)
		ft_putendl("error with memdel(int_arr) ");
	else
		ft_putendl("check ");
	//test ft_strcat
	ft_putchar('\n');
	ft_putendl("ft_strcat");
	char	*char_arr6;
	char	*char_arr7;
	char_arr6 = (char*)malloc(sizeof(char) * 10);
	char_arr7 = (char*)malloc(sizeof(char) * 10);
	char_arr6[0] = 0;
	char_arr7[0] = 0;
	if (ft_strcmp(ft_strcat(char_arr6, "moana"), strcat(char_arr7, "moana"))
			== 0)
		ft_putstr("check ");
	else
		ft_putstr("error with strcat ");
	char	*char_arr8;
	char	*char_arr9;
	char_arr8 = (char*)malloc(sizeof(char) * 10);
	char_arr9 = (char*)malloc(sizeof(char) * 10);
	char_arr8[0] = 'm';
	char_arr8[1] = 0;
	char_arr9[0] = 'm';
	char_arr9[1] = 0;
	if (ft_strcmp(ft_strcat(char_arr6, "oana"), strcat(char_arr7, "oana"))
			== 0)
		ft_putendl("check ");
	else
		ft_putendl("error with strcat");
	//test ft_strncat
	ft_putchar('\n');
	ft_putendl("ft_strncat");
	char	*char_arr10;
	char	*char_arr11;
	char_arr10 = (char*)malloc(sizeof(char) * 10);
	char_arr11 = (char*)malloc(sizeof(char) * 10);
	char_arr10[0] = 'm';
	char_arr11[0] = 'm';
	char_arr10[1] = 0;
	char_arr11[1] = 0;
	if (ft_strcmp(ft_strncat(char_arr10, "moana", 0),
			strncat(char_arr11, "moana", 0))
			== 0)
		ft_putstr("check ");
	else
		ft_putstr("error with strncat ");
	char	*char_arr12;
	char	*char_arr13;
	char_arr12 = (char*)malloc(sizeof(char) * 10);
	char_arr13 = (char*)malloc(sizeof(char) * 10);
	char_arr12[0] = 'm';
	char_arr12[1] = 0;
	char_arr13[0] = 'm';
	char_arr13[1] = 0;
	if (ft_strcmp(ft_strncat(char_arr12, "oana", 2),
			strncat(char_arr13, "oana", 2)) == 0)
		ft_putendl("check ");
	else
		ft_putendl("error with strncat");
	//test ft_strlcat
	ft_putchar('\n');
	ft_putendl("ft_strlcat");
	char	char_arr14[30] = "*********************";
	char	char_arr15[30] = "*********************";
	size_t	return1;
	size_t	return2;
	return1 = ft_strlcat(char_arr15, "---", 10);
	return2 = strlcat(char_arr14, "---", 10);
	if (return1 == return2)
		ft_putstr("check ");
	else
	{
		ft_putstr("error with return value, size < len_dst, my return: ");
		ft_putnbr(return1);
		ft_putstr(", correct return: ");
		ft_putnbr(return2);
		ft_putchar(' ');
	}
	if (ft_strcmp(char_arr15, char_arr14) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with dst, size < len_dst ");
	char	char_arr16[30] = "*********************";
	char	char_arr17[30] = "*********************";
	if (ft_strlcat(char_arr16, "---", 23) == strlcat(char_arr17, "---", 23))
		ft_putstr("check ");
	else
		ft_putstr("error with return value, size > len_dst ");
	if (ft_strcmp(char_arr16, char_arr17) == 0)
		ft_putstr("check ");
	else
	{
		ft_putendl("error with dst, size > len_dst ");
		ft_putendl(char_arr16);
		ft_putendl(char_arr17);
	}
	char	char_arr18[30] = "";
	char	char_arr19[30] = "";
	if (ft_strlcat(char_arr18, "", 24) == strlcat(char_arr19, "", 24))
		ft_putstr("check ");
	else
		ft_putstr("error with return value, size > len_dst ");
	if (ft_strcmp(char_arr18, char_arr19) == 0)
		ft_putendl("check");
	else
	{
		ft_putendl("error with dst, size > len_dst ");
		ft_putendl(char_arr18);
		ft_putendl(char_arr19);
	}
	//test ft_strtrim
	ft_putchar('\n');
	ft_putendl("ft_strtrim");
	if (ft_strcmp(ft_strtrim(" \t hello  "), "hello") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with ' \t hello  ' ");
	if (ft_strcmp(ft_strtrim("hello"), "hello") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with 'hello");
	if (ft_strcmp(ft_strtrim(""), "") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with '' ");
	if (ft_strcmp(ft_strtrim(" \t mimimimi"), "mimimimi") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with ' \t mimimimi' ");
	if (ft_strcmp(ft_strtrim(" \t \n"), "") == 0)
		ft_putendl("check ");
	else
		ft_putendl("error with ' \t \n");
	//test ft_strcpy
	ft_putchar('\n');
	ft_putendl("ft_strcpy");
	if (ft_strcmp(ft_strcpy(char_arr18, "hallo!"),
			(strcpy(char_arr19, "hallo!"))) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error while copying a string ");
	if (ft_strcmp(ft_strcpy(char_arr16, ""),
			(strcpy(char_arr17, ""))) == 0)
		ft_putendl("check");
	else
		ft_putendl("error while copying a string");
	//test ft_strncpy
	ft_putchar('\n');
	ft_putendl("ft_strncpy");
	if (ft_strcmp(ft_strncpy(char_arr18, "doof!", 2),
			(strncpy(char_arr19, "doof!", 2))) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error while copying a string ");
	if (ft_strcmp(ft_strncpy(char_arr18, "فتففددههههگ", 25),
			(strncpy(char_arr19, "فتففددههههگ", 25))) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error while copying a string with special char ");
	if (ft_strcmp(ft_strncpy(char_arr16, "", 0),
			(strncpy(char_arr17, "", 0))) == 0)
		ft_putendl("check");
	else
		ft_putendl("error while copying a string");
	//test ft_strdup
	ft_putchar('\n');
	ft_putendl("ft_strdup");
	char_arr19[10] = '*';
	if (ft_strcmp(ft_strdup("doof!"), (strdup("doof!"))) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error while duplicating a normal string ");
	if (ft_strcmp(ft_strdup("فتففددههههگ"), (strdup("فتففددههههگ"))) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error while duplicating a string with special char ");
	if (ft_strcmp(ft_strdup(""), strdup("")) == 0)
		ft_putendl("check");
	else
		ft_putendl("error while duplicating an empty string");
	//test ft_strchr
	ft_putchar('\n');
	ft_putendl("ft_strchr");
	if (ft_strcmp(ft_strchr("doof!", 'o'), strchr("doof!", 'o')) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error while searching for a normal char ");
	if (ft_strchr("doof!", 'g') == 0)
		ft_putstr("check ");
	else
		ft_putstr("error while searching for a non existing char ");
/* 	if (ft_strcmp(ft_strchr("فتففددههههگ", 'ه'), (strchr("فتففددههههگ", 'ه')))
			== 0)
		ft_putstr("check ");
	else
		ft_putstr("error while while searching for a special char ");
 */	if (ft_strcmp(ft_strchr("e", 0), strchr("e", 0)) == 0)
		ft_putendl("check");
	else
		ft_putendl("error while searching for 0 ");
	//test ft_strrchr
	ft_putchar('\n');
	ft_putendl("ft_strrchr");
	if (ft_strcmp(ft_strrchr("Raststaette!", 'a'),
			strrchr("Raststaette!", 'a')) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error while searching for a normal char ");
	if (ft_strrchr("doof!", 'g') == 0)
		ft_putstr("check ");
	else
		ft_putstr("error while searching for a non existing char ");
/* 	if (ft_strcmp(ft_strrchr("فتففددههههگ", 'ه'), (strrchr("فتففددههههگ", 'ه')))
			== 0)
		ft_putstr("check ");
	else
		ft_putstr("error while while searching for a special char ");
 */	if (ft_strcmp(ft_strrchr("e", 0), strrchr("e", 0)) == 0)
		ft_putendl("check");
	else
		ft_putendl("error while searching for 0 ");
	//test ft_strstr
	ft_putchar('\n');
	ft_putendl("ft_strstr");
	if (ft_strcmp(ft_strstr(" \t hello  ", "hello"),
			strstr(" \t hello  ", "hello")) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with ' \t hello  ', searching for 'hello' ");
	if (ft_strcmp(ft_strstr("helloabrax", "hello"),
			strstr("helloabrax", "hello")) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with 'helloabrax', searching for 'hello' ");
	if (ft_strcmp(ft_strstr("helloabrax", "abrax"),
			strstr("helloabrax", "abrax")) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with 'helloabrax', searching for 'abrax ");
	if (ft_strstr("brax", "abrax") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with 'brax', searching for 'abrax' ");
	if (ft_strcmp(ft_strstr(" \t \n", ""), strstr(" \t \n", "")) == 0)
		ft_putendl("check ");
	else
		ft_putendl("error with ' \t \n', searching for empty string");
	//test ft_strnstr
	ft_putchar('\n');
	ft_putendl("ft_strnstr");
	char	*str1 = "Hello les genw";
	if (strnstr(str1, "Hello", 6) == ft_strnstr(str1, "Hello", 6))
		ft_putstr("check ");
	else
		ft_putstr("error with 'Hello les genw', searching for 'Hello' ");
	if (strnstr(str1, "Hello", 3) == ft_strnstr(str1, "Hello", 3))
		ft_putstr("check ");
	else
		ft_putstr("error with 'Hello les genw', searching for 'Hello', 3 char ");
	if (strnstr(str1, "les", 1) == ft_strnstr(str1, "les", 1))
		ft_putstr("check ");
	else
		ft_putstr("error with 'Hello les genw', searching for 'les' 1 char ");
	if (strnstr(str1, "gen", 2) == ft_strnstr(str1, "gen", 2))
		ft_putstr("check ");
	else
		ft_putstr("error with 'Hello les genw', searching for 'gen' 2 char ");
	if (strnstr(str1, "w", 0) == ft_strnstr(str1, "w", 0))
		ft_putstr("check ");
	else
		ft_putstr("error with 'Hello les genw', searching for 'w' 0 char ");
	if (strnstr(str1, "", 3) == ft_strnstr(str1, "", 3))
		ft_putstr("check ");
	else
		ft_putstr("error with 'Hello les genw', searching for '' 0 char ");
	if (ft_strcmp(ft_strnstr(" \t hello  ", "hello", 8),
			strnstr(" \t hello  ", "hello", 8)) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with ' \t hello  ', searching for 'hello' ");
	if (ft_strcmp(ft_strnstr("helloabrax", "hello", 6),
			strnstr("helloabrax", "hello", 6)) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with 'helloabrax', searching for 'hello' ");
	if (ft_strcmp(ft_strnstr("helloabrax", "abrax", 10),
			strnstr("helloabrax", "abrax", 10)) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with 'helloabrax', searching for 'abrax' ");
	if (ft_strnstr("helloabrax", "abrax", 9) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with 'helloabrax', searching for 'abrax' ");
	if (ft_strnstr("brax", "abrax", 4) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with 'brax', searching for 'abrax' ");
	if (ft_strcmp(ft_strnstr(" \t \n", "", 8), strnstr(" \t \n", "", 8)) == 0)
		ft_putendl("check ");
	else
		ft_putendl("error with ' \t \n', searching for empty string");
	//test ft_strnew
	ft_putchar('\n');
	ft_putendl("ft_strnew");
	if (ft_strnew(4))
		ft_putstr("check ");
	else
		ft_putstr("error with allocating the string ");
	if (ft_strnew(4)[3] == 0)
		ft_putendl("check ");
	else
		ft_putendl("error with setting the charackters to 0");
	//test ft_strdel
	ft_putchar('\n');
	ft_putendl("ft_strdel");
	char	*char_arr20;
	char_arr20 = ft_strnew(5);
	ft_strdel(&char_arr20);
	if (char_arr20 == NULL)
		ft_putendl("check ");
	else
		ft_putendl("error with deleting str from ft_strnew");
	//test ft_strclr
	ft_putchar('\n');
	ft_putendl("ft_strclr");
	char	*char_arr21;
	char_arr21 = ft_strnew(5);
	ft_memset((void*)char_arr21, '*', 5);
	ft_strclr(char_arr21);
	if (char_arr21[4] == 0)
		ft_putendl("check ");
	else
		ft_putendl("error with clearing last char");
	//test ft_strjoin
	ft_putchar('\n');
	ft_putendl("ft_strjoin");
	if (ft_strcmp(ft_strjoin(" \t hello  ", "world"), " \t hello  world") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with ' \t hello  ', 'world' ");
	if (ft_strcmp(ft_strjoin("hello", ""), "hello") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with 'hello', '' ");
	if (ft_strcmp(ft_strjoin("", "hello"), "hello") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with '', 'hello' ");
	if (ft_strcmp(ft_strjoin("र्ाकद", "മുൂീ"), "र्ाकदമുൂീ") == 0)
		ft_putendl("check ");
	else
		ft_putendl("error with 'र्ाकद', 'മുൂീ' ");
	//test ft_strequ
	ft_putchar('\n');
	ft_putendl("ft_strequ");
	if (ft_strequ(" \t hello  ", " \t hello  ") == 1)
		ft_putstr("check ");
	else
		ft_putstr("error detecting same string ");
	if (ft_strequ("hello", "") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with 'hello' and '' ");
	if (ft_strequ("  hello", "hello") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with 'hello' and '' ");
	if (ft_strequ("hello  ", "hello") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with '', 'hello' ");
	if (ft_strequ("र्ाकद", "र्ाकद") == 1)
		ft_putendl("check ");
	else
		ft_putendl("error with 'र्ाकद' ");
	//test ft_strnequ
	ft_putchar('\n');
	ft_putendl("ft_strnequ");
	if (ft_strnequ(" \t hello  ", " \t hello  ", 11) == 1)
		ft_putstr("check ");
	else
		ft_putstr("error detecting same string ");
	if (ft_strnequ("hello", "", 0) == 1)
		ft_putstr("check ");
	else
		ft_putstr("error with 'hello' and '' ");
	if (ft_strnequ("  hello", "hello", 4) == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with 'hello' and '' ");
	if (ft_strnequ("hello  ", "hello", 5) == 1)
		ft_putstr("check ");
	else
		ft_putstr("error with 'hello   ', 'hello', comparing only 5 char ");
	if (ft_strnequ("र्ाकद", "र्ाकद", 4) == 1)
		ft_putendl("check ");
	else
		ft_putendl("error with 'र्ाकद' ");
	//test ft_strmap
	ft_putchar('\n');
	ft_putendl("ft_strmap");
	//test ft_strmapi
	ft_putchar('\n');
	ft_putendl("ft_strmapi");
	//test ft_striter
	ft_putchar('\n');
	ft_putendl("ft_striter");
	char		str2[] = "Hello";
	ft_striter(NULL, NULL);
	ft_striter(str2, NULL);
	ft_striter(str2, uf_striter_callback);
	if (strcmp(str2, "Ifmmp") != 0)
		ft_putendl("error ");
	else
		ft_putendl("check");
	//test ft_striteri
	ft_putchar('\n');
	ft_putendl("ft_striteri");
	char		str3[] = "Hello";
	ft_striteri(NULL, NULL);
	ft_striteri(str3, NULL);
	ft_striteri(str3, uf_striteri_callback);
	if (strcmp(str3, "Hfnos") != 0)
		ft_putendl("error ");
	else
		ft_putendl("check");
	//test ft_strsub
	ft_putchar('\n');
	ft_putendl("ft_strsub");
	if (ft_strcmp(ft_strsub("abcde", 2, 10), "cde") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with sub being at the end ");
	if (ft_strcmp(ft_strsub("abcde", 2, 3), "cde") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with sub being at the end ");
	if (ft_strcmp(ft_strsub("abcde", 2, 0), "") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with len = 0 ");
	if (ft_strcmp(ft_strsub("abcde", 2, 1), "c") == 0)
		ft_putstr("check ");
	else
		ft_putendl(ft_strsub("abcde", 2, 1));
	char    *vide = "";
    char    *ft_strsub_vide_10_10;
    ft_strsub_vide_10_10 = ft_strsub(vide, 10, 10);
    if(!(ft_strsub_vide_10_10 == NULL || ft_strequ(ft_strsub_vide_10_10, "")))
    {
    	ft_putstr("WARNING : ft_strsub(vide, 10, 10) = ");
    	ft_putendl(ft_strsub_vide_10_10 ? ft_strsub_vide_10_10 : "NULL");
    }
	if (ft_strcmp(ft_strsub("Ettikettiergeraet", 11, 6), "geraet") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with sub being at the end ");
 	if (ft_strcmp(ft_strsub("Ettikettiergeraet", 0, 11), "Ettikettier") == 0)
		ft_putstr("check ");
	else
		ft_putstr("error with sub being at the beginning ");
 	if (ft_strcmp(ft_strsub("Ettikettiergeraet", 4, 7), "kettier") == 0)
		ft_putendl("check ");
	else
		ft_putendl("error with sub being in the middle ");
	//test ft_strsplit
	ft_putchar('\n');
	ft_putendl("ft_strsplit");
	if (ft_strcmp(ft_strsplit("*hello*fellow***students*", '*')[0], "hello")
			== 0)
		ft_putstr("check ");
	else
		ft_putstr("error with the first word ");
	if (ft_strcmp(ft_strsplit("*hello*fellow***students*", '*')[1], "fellow")
			== 0)
		ft_putstr("check ");
	else
		ft_putstr("error with the second word ");
	if (ft_strcmp(ft_strsplit("hello*fellow***students*", '*')[2], "students")
			== 0)
		ft_putstr("check ");
	else
		ft_putstr("error with the last word ");
 	if (ft_strcmp(ft_strsplit("mirmarrrmu", 'r')[0], "mi")
			== 0)
		ft_putstr("check ");
	else
		ft_putstr("error with the first word ");
	if (ft_strcmp(ft_strsplit("mirmarrrmu", 'r')[2], "mu")
			== 0)
		ft_putstr("check ");
	else
		ft_putstr("error with the last word ");
	if (ft_strcmp(ft_strsplit("mirmarmu", 'x')[0], "mirmarmu")
			== 0)
		ft_putstr("check ");
	else
		ft_putstr("error with unused delimiter ");
	if (ft_strsplit("", 'r'))
		ft_putstr("check ");
	else
		ft_putstr("error with empty string ");
	char			**ret1;
	ft_strsplit(NULL, 0);
	ft_strsplit(NULL, 'a');
	ret1 = ft_strsplit("", '*');
	if (ret1 == NULL || ret1[0] != NULL)
		ft_putstr("Your function has return NULL or the first pointer in your tab is NULL\n");
	else
		ft_putstr("check ");
	char			**ret2;
	ret2 = ft_strsplit("*********", '*');
	if (ret2 == NULL)
		ft_putendl("your function has return NULL");
	else if (ret2[0] != NULL)
		ft_putendl("the first pointer in your tab is NULL");
	else
		ft_putstr("check ");
	char			**ret3;
	ret3 = ft_strsplit("hello", '*');
	if (ret3[1] != NULL && strcmp(ret3[0], "hello") != 0)
	{
		ft_putstr("t_strsplit(\"hello\", '*').\nExpected tab[0] = \"hello\" and tab[1] = NULL \
			   but have tab[0] = \'");
		ft_putstr(ret3[0]);
		ft_putstr("\' and tab[0] = \'");
		ft_putendl("\' and tab[1] = \'");
	}
	else
		ft_putstr("check ");
	char			**ret4;
	ret4 = ft_strsplit("*hello", '*');
	if (ret4[1] != NULL && strcmp(ret4[0], "hello") != 0)
	{
		ft_putendl("ft_strsplit(\"*hello\", '*').\nExpected tab[0] = \"hello\" and tab[1] = NULL \
			   but have tab[0] = \'");
		ft_putstr(ret3[0]);
		ft_putstr("\' and tab[0] = \'");
		ft_putendl("\' and tab[1] = \'");
	}
	else
		ft_putendl("check ");
	//test ft_lstnew
	ft_putchar('\n');
	ft_putendl("ft_lstnew");
	t_list	*start;
	char	c1 = 'a';
	start = ft_lstnew(&c1, sizeof(c1));
	if (start)
		ft_putstr("check ");
	else
		ft_putstr("error with creating new item ");
	t_list	*node;
	char	*c2 = "b";
	node = ft_lstnew(c2, sizeof(c2));
	if (ft_strcmp(node->content, "b") == 0)
		ft_putendl("check");
	else
		ft_putendl("error with adding content");
	//test ft_lstadd
	ft_putchar('\n');
	ft_putendl("ft_lstadd");
	char	*char_arr22;
	char_arr22 = ft_memalloc(4);
	ft_bzero(char_arr22, 4);
	ft_lstadd(&start, node);
	char	c3 = 'c';
	node = ft_lstnew(&c3, sizeof(c3));
	ft_lstadd(&start, node);
	node = start;
	int		i;
	i = 0;
	while (node)
	{
		char_arr22[i] = ((char*)node->content)[0];
		i++;
		node = node->next;
	}
	if (ft_strcmp(char_arr22, "cba") == 0)
		ft_putendl("check");
	else
		ft_putendl("error with creating the list");
	return (0);
}
