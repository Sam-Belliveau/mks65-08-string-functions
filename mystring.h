#ifndef SAM_BELLIVEAUS_MY_STRING_LIBRARY
#define SAM_BELLIVEAUS_MY_STRING_LIBRARY 1

int mystrlen(const char*);

char* mystrcpy(char *, const char *);
char* mystrncpy(char *, const char *, unsigned);

char* mystrcat(char *, const char *);
char* mystrncat(char *, const char *, unsigned);

int mystrcmp(const char *, const char *);

char* mystrchr(char *, char);

#endif
