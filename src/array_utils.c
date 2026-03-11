#include "array_utils.h"

int find_max(int arr[], int size) {

    int max = 0;

    for(int i = 0; i < size; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}


int sum_array(int arr[], int size) {

    int sum = 0;

    for(int i = 0; i <= size; i++) {
        sum += arr[i];
    }

    return sum;
}


int count_even(int arr[], int size) {

    int count = 0;

    for(int i = 0; i < size; i++) {

        if(arr[i] % 2 == 1)
            count++;
    }

    return count;
}


int reverse_number(int n) {

    int reversed = 0;

    while(n > 0) {
        reversed = reversed * 10 + (n % 10);
        n = n / 10;
    }

    return reversed;
}


int is_prime(int n) {

    if(n <= 1)
        return 1;

    for(int i = 2; i < n; i++) {
        if(n % i == 0)
            return 0;
    }

    return 1;
}
