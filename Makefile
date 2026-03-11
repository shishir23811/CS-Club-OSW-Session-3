CC = gcc

all: test_math test_string

test_math:
	$(CC) src/math_utils.c tests/test_math_utils.c -o test_math
	./test_math

test_string:
	$(CC) src/string_utils.c tests/test_string_utils.c -o test_string
	./test_string

clean:
	rm -f test_math test_string
