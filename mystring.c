#include "mystring.h"

int mystrlen(const char* s)
{
	const char* e = s;
	while (*e) e++;
	return e - s;
}

char* mystrcpy(char* dest, const char* src)
{
	char* t = dest;
	while (*(dest++) = *(src++));
	return t;  
}

char* mystrncpy(char* dest, const char* src, unsigned n)
{
	char* t = dest;
	while ((*(dest++) = *(src++)) && n--);
	return t;
}

char* mystrcat(char* dest, const char* src)
{
	char* t = dest;

	while (*dest) dest++;
	while (*(dest++) = *(src++));

	return t;
}

char* mystrncat(char* dest, const char* src, unsigned n)
{
	char* t = dest;

	while (*dest) dest++;
	while ((*(dest++) = *(src++)) && --n);
	if (!n) *dest = '\0';

	return t;
}

int mystrcmp(const char* a, const char* b)
{
	do {
		int r = (int)*a - (int)*b;
		if (r) return r;
	} while (*++a | *++b);
	
	return 0;
}

char* mystrchr(char* s, char c)
{
	do { if (*s == c) return s; } 
	while (*(s++));
	
	return 0;
}
