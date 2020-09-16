#include <bits/stdc++.h>

/* function prototype */
size_t sum_of_digits(const size_t& number);

int main(int argc, char* argv[]) {

    /* fast input-output */
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    /* get the test_case */
    size_t test_case;
    std::cin >> test_case;

    /* navigate through each test_case */
    while(test_case--) {
        /* get the number */
        size_t number;
        std::cin >> number;

        /* find out the sum of first and last digit */
        size_t sum_of_first_last = sum_of_digits(number);

        /* print the sum of first and last digit */
        std::cout << sum_of_first_last << std::endl;
    }
    return 0;
}

/* a function to calculate the sum of first and last digit */
size_t sum_of_digits(const size_t& number) {
    /* define temp_number so that actual
     * value of number don't get altered */
    size_t temp_number {number};

    /* define first_digit and last_digit */
    size_t first_digit {temp_number % 10}, last_digit{0};

    /* obtained the last_digit */
    while (temp_number != 0) {
        /* store the current digit as last_digit */
        last_digit = temp_number % 10;

        /* reduce the number by eliminating the
         * last_digit i.e. the processed digit */
        temp_number /= 10;
    }

    /* return the sum of first_digit and last_digit */
    return (first_digit + last_digit);
}