# Tests

## isalpha
```c
int     main(void)
{
        printf("%d\n", isalpha('a'));
        printf("%d\n", ft_isalpha('A'));
        return (0);
}
```
## isdigit
```c
int     main(void)
{
        printf("%d\n", isdigit('7'));
        printf("%d\n", ft_isdigit('7'));
        printf("%d\n", isdigit('a'));
        printf("%d\n", ft_isdigit('a'));
        return (0);
}
```
## isalnum
```c
int     main(void)
{
        printf("%d\n", isalnum('7'));
        printf("%d\n", ft_isalnum('7'));
        printf("%d\n", isalnum('a'));
        printf("%d\n", ft_isalnum('a'));
        return (0);
}
```
## isascii
```c
int     main(void)
{
        printf("%d\n", isascii(1));
        printf("%d\n", ft_isascii(1));
        printf("%d\n", isascii(127));
        printf("%d\n", ft_isascii(127));
        return (0);
}
```
## toupper/tolower
```c
int	main(void)
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", ft_toupper('X'));
	printf("%c\n", ft_toupper('9'));
	return (0);
}
```
## strnstr
```c
int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char	*ptr;

	ptr = ft_strnstr(largestring, smallstring, 7);

	printf("%s", ptr);
	return (0);
}
```
## strlcpy
```c
size_t	ft_strlen(const char *s);

int	main(void)
{
	char *dst;
	const char *src;

	//dst = "";
	src = "Teste";

	printf("%zu, %s", ft_strlcpy(dst, src, sizeof(src)), dst);
	return (0);
}
```
## strlcat
```c
size_t	ft_strlen(const char *s);

int	main(void)
{
	const char	*src;
	char	dst[1] = "-";

	src = "Bar";

	printf("Size: %zu, Dest: %s", ft_strlcat(dst, src, 16), dst);
	return (0);
}
```
## strdup
```c
size_t	ft_strlen(const char *s);

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "star";
	s2 = ft_strdup(s1);
	printf("%s", s2);
	return (0);
}
```
## atoi
```c
int	ft_isdigit(int c);
int	ft_isalpha(int c);

int     main(void)
{
	//const char *str = "   01234564890ahe522";
	//const char *str = "  a-1234";
	int	num;

	num = ft_atoi(str);
	printf("%d", num);
        return (0);
}
```
## memset
```c
int main()
{
    int arr[10];

    ft_memset(arr, 0, sizeof(arr));

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
```
## strtrim
```c
int main()
{
	printf("%s\n",ft_strtrim("abqbc","abc"));
	printf("%s\n",ft_strtrim("xavocadoyz","xyz"));

}                
```