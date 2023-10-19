#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */

int wildcmp(char *s1, char *s2) {
    // If both strings are empty, they are considered identical.
    if (*s1 == '\0' && *s2 == '\0') {
        return 1;
    }

    // If the current characters match or if s2 contains a '*', we have two options:
    if (*s2 == '*' || *s1 == *s2) {
        // 1. Move to the next character in s1 and s2 (match * to an empty string).
        if (*s2 == '*' && wildcmp(s1, s2 + 1)) {
            return 1;
        }

        // 2. Move to the next character in s1 (match the current characters).
        if (*s1 != '\0' && wildcmp(s1 + 1, s2 + 1)) {
            return 1;
        }
    }

    // If none of the above conditions are met, the strings are not identical.
    return 0;
}
