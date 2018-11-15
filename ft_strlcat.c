#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (n == 0)
		return (0);
	while (dst[i] && i < n)
		i++;
	j = i;
	while (src[i - j] && i < n - 1)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < n)
		dst[i] = '\0';
	return (j + ft_strlen_const(src));
}
