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