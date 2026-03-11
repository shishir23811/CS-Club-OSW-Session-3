#include <assert.h>
#include <stdio.h>
#include "../src/array_utils.h"

void test_find_max() {

    int arr1[] = {1,5,3,9,2};
    assert(find_max(arr1,5) == 9);

    int arr2[] = {-10,-3,-50};
    assert(find_max(arr2,3) == -3);
}


void test_sum_array() {

    int arr[] = {1,2,3,4};

    assert(sum_array(arr,4) == 10);
}


void test_count_even() {

    int arr[] = {1,2,3,4,6};

    assert(count_even(arr,5) == 3);
}


void test_reverse_number() {

    assert(reverse_number(123) == 321);
    assert(reverse_number(400) == 4);
}


void test_is_prime() {

    assert(is_prime(2) == 1);
    assert(is_prime(7) == 1);
    assert(is_prime(9) == 0);
    assert(is_prime(1) == 0);
}


int main() {

    test_find_max();
    test_sum_array();
    test_count_even();
    test_reverse_number();
    test_is_prime();

    printf("All array_utils tests passed\n");

    return 0;
}
