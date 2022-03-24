#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _printf(const char *format, ...);

typedef struct original
{
    char *s;
    int (*f)(va_list);
} estructura;


#endif /*MAIN_H*/
