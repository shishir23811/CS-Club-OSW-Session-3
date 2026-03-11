#include <assert.h>
#include <stdio.h>
#include "../src/math_utils.h"

void test_add() {
    assert(add(2,3) == 5);
    assert(add(-1,1) == 0);
}

void test_subtract() {
    assert(subtract(5,3) == 2);
    assert(subtract(10,5) == 5);
}

void test_multiply() {
    assert(multiply(3,4) == 12);
    assert(multiply(5,0) == 0);
}

int main() {

    test_add();
    test_subtract();
    test_multiply();

    printf("All math tests passed\n");
    return 0;
}
