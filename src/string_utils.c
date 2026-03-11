#include "string_utils.h"

int string_length(char *str) {
    int count = 0;

    while(str[count] != '\0') {
        count++;
    }

    return count;
}

int count_vowels(char *str) {
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++) {

        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
            count++;
    }

    return count;
}

int is_uppercase(char c) {
    if(c >= 'A' && c <= 'Z')
        return 0; // BUG: should return 1
    else
        return 1; // BUG
}
