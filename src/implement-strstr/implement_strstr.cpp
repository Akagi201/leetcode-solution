/*
 * @file implement_strstr.cpp
 * @author Akagi201
 * @date 2015/02/06
 *
 * https://oj.leetcode.com/problems/implement-strstr/
 */

#include <iostream>

using namespace std;

#if 0
// brute force Time Limit Exceeded
/*
 * First scan quickly through the two strings looking for a
 * single-character match. When it's found, then compare the rest of the
 * substring.
 */
int strStr(char *haystack, char *needle) {
    char *a = NULL;
    char *b = NULL;
    int index = 0;
    if ((NULL == haystack) || (NULL == needle)) {
        return -1;
    }

    b = needle;

    if (0 == *b) {
        return 0;
    }

    for (; *haystack != 0; haystack += 1, index += 1) {
        if (*haystack != *b) {
            continue;
        }

        a = haystack;

        while (1) {
            if (0 == *b) {
                return index;
            }

            if (*a++ != *b++) {
                break;
            }
        }

        b = needle;
    }

    return -1;

}
#endif

#if 0
// brute force accepted
int strStr(char *haystack, char *needle) {

    int index = 0;
    if (!haystack || !needle) {
        return -1;
    }
    if (!*needle) {
        return 0;
    }

    char *ph = haystack;
    char *pn = needle;
    for (; *ph && *pn; ph++, pn++);

    //len(haystack) < len(needle)
    if (!*ph && *pn) {
        return -1;
    }
    ph--;

    for (; *ph; haystack++, ph++, index++) {
        char *q = needle;
        char *p = haystack;
        while (*q && *p && *p == *q) {
            p++;
            q++;
        }
        if (!*q) {
            return index;
        }
    }

    return -1;
}
#endif

// naive Accepted
int strStr(char *haystack, char *needle)
{
    int index = 0;

    if (!haystack || !needle) {
        return -1;
    }
    if (!*needle) {
        return 0;
    }

    size_t needle_len = strlen(needle);

    while (*haystack != '\0') {
        if (strncmp(haystack, needle, needle_len) == 0) {
            return index;
        } else {
            haystack++;
            index++;
        }
    }

    return -1;
}