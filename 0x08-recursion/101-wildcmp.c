#include "main.h"

int comp(char *s1, char *s2, int n1, int n2);
int end(char *s, int n);

int wildcmp(char *s1, char *s2)
{
	return (comp(s1, s2, 0, 0));
}

int comp(char *s1, char *s2, int n1, int n2)
{
	if ((s1[n1] == '\0') && ((s2[n2] == '\0') || (s2[n2] == '*')))
	{
		return (1);
	}
	if (s1[n1] == s2[n2])
	{
		return (comp(s1, s2, n1 - 1, n2 - 1));
	}
	if ((s1[n1] != s2[n2]) && (s2[end(s2, n2)] == s1[n1]))
	{
		return (comp(s1, s2, n1, end(s2, n2)));
	}
	if ((s2[n2] == '*') || (s2[n2 -1] == '*'))
	{
		return (comp(s1, s2, n1 + 1, end(s2, n2)));
	}
	else
	{
		return (0);
	}
}

int end(char *s, int n)
{
	if (s[n] != '*')
	{
		return (n);
	}
	else
	{
		return (end(s, n + 1));
	}
}
