#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char **tes(char *str, int count, char **li)
{
	size_t size;

	while (*str && *str == ' ')
		str++;
	// change write for allocation and store of words
	size = 0;
	while (str[size] && str[size] != ' ')
		size++;
	write(1, str, size);
	printf(" - %i\n", count);
	if (*str)
		li = tes(str + size, count + 1, li);
	else
		li = malloc(sizeof(char) * (count + 1));
	// if (li)
	// 	li[count] = st;
	return (li);
}

int main()
{
	char a[29] = "        tasasas  dasd  adasd";

	tes(a, 0, NULL);
}
