CC = gcc

all: test_math test_string test_array

test_math:
	$(CC) src/math_utils.c tests/test_math_utils.c -o test_math
	./test_math

test_string:
	$(CC) src/string_utils.c tests/test_string_utils.c -o test_string
	./test_string

test_array:
	gcc src/array_utils.c tests/test_array_utils.c -o test_array
	./test_array

clean:
	rm -f test_math test_string
