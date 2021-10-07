#include "mystring.h"

int mystrlen(const char* s)
{
	const char* e = s;
	while (*++e);
	return e - s;
}

char* mystrcpy(char *dest, const char *src)
{
	char* d = dest;
	while (*src) 
		*(dest++) = *(src++);
	return d;  
}

char* mystrncpy(char *dest, const char *src, unsigned n)
{
	const char* m = src + n;
	char* d = dest;
	
	while (*src && src < m) 
		*(dest++) = *(src++);
	
	return d;
}

char* mystrcat(char *dest, const char *src)
{
	char *d = dest;
	
	while (*(dest++));
	while (*src) 
		*(dest++) = *(src++);
	
	return d;
}

char* mystrncat(char *dest, const char *src, unsigned n)
{
	const char *m = src + n;
	char *d = dest;
	
	while (*(dest++));
	while (*src && src < m) *(dest++) = *(src++);
	
	return d;
}

int mystrcmp(const char *a, const char *b)
{
	int r;
	
	do {
		r = (int)*a - (int)*b;
		if (r) return r;
	} while (*(++a) | *(++b));
	
	return 0;
}

char* mystrchr(char *s, char c)
{
	do { 
		if (*s == c) return s;
	} while(*++s);
	
	return 0;
}
