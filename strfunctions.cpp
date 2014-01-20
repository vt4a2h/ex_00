#include "strfunctions.h"

namespace str_f {

    size_t strlen(const char *str)
    {
        if (!*str) return 0;

        const char *end(str);
        while (*++end);
        return end - str;
    }

    char *strcpy(char *dst, const char *src)
    {
        while ((*dst++ = *src++));
        return dst;
    }

    int strcmp(const char *str1, const char *str2)
    {
        if (!*str1 || !*str2) return 0;
        for (;*str1 && *str2; ++str1, ++str2) {
            if (*str1 == *str2) continue;
            return *str1++ > *str2++ ? 1 : -1;
        }

        return 0;
    }

    char *strrev(char *str)
    {
        if (!*str || !*(str+1)) return str;

        char *f(str);
        char *l(str);
        while (*++l);

        char t;
        char k((l - f) % 2 == 0 ? 1 : 0);
        while ( --l + k != f ) {
            t = *l;
            *l = *f;
            *f = t;
            ++f;
        }

        return str;
    }

    char *strcat(char *dst, const char *src)
    {
        char *e(dst);
        while (*++e);
        while((*e++ = *src++));

        return dst;
    }

}
