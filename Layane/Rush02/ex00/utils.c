// // ft_strlen — conta os caracteres até o '\0'

int  ft_strlen(const char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int  ft_strcmp(const char *s1, const char *s2)
{
    int i;

    i = 0;
    while (s1[i] == s2[i] && s2[i] != '\0')
	{
    i++;
	}
return (s1[i] - s2[i]);
}
