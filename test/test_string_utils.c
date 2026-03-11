#include <assert.h>
#include <stdio.h>
#include "../src/string_utils.h"

void test_length() {
    assert(string_length("hello") == 5);
    assert(string_length("") == 0);
}

void test_vowels() {
    assert(count_vowels("hello") == 2);
    assert(count_vowels("xyz") == 0);
}

void test_uppercase() {
    assert(is_uppercase('A') == 1);
    assert(is_uppercase('a') == 0);
}

int main() {

    test_length();
    test_vowels();
    test_uppercase();

    printf("All string tests passed\n");
    return 0;
}
