#include <iostream>
//Check number is prime number.
bool isPrime(int n) {
    if (n <= 1)
        return false;
    // i*i  <= n is an optimization technique for checking if a number is prime.
    //Checking divisors up to the square root is sufficient.
    for (int i{2}; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    
    return true;
}

int main() {
    int N{2};

    while (N < 10) {
        N *= N+1;
        int p = N + 1;

        if (isPrime(p))
            std::cout << p << " is a prime number\n";
        else
            std::cout << p << " is not a prime number\n";

        N++;
    }
    
    return 0;
}
