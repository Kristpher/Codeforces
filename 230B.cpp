#include <iostream>
#include <cmath>
#include <vector>

#define MAX 1000000

void sieveOfEratosthenes(std::vector<bool>& prime, std::vector<int>& primes, int& numPrimes) {
    for (int i = 2; i <= MAX; i++) {
        prime[i] = true;
    }

    for (int p = 2; p * p <= MAX; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= MAX; i += p) {
                prime[i] = false;
            }
        }
    }

    numPrimes = 0;
    for (int p = 2; p <= MAX; p++) {
        if (prime[p]) {
            primes[numPrimes++] = p;
        }
    }
}

void binary(long long a, std::vector<int>& prime, int ind) {
    int u = 0;
    int k = ind;
    int mid = (u + k) / 2;
    while (u <= k) {
        mid = (u + k) / 2;
        if (prime[mid] == a) {
            std::cout << "YES\n";
            return;
        } else if (prime[mid] > a) {
            k = mid - 1;
        } else if (prime[mid] < a) {
            u = mid + 1;
        }
    }
    std::cout << "NO\n";
}

void check(long long a, std::vector<int>& prime, int ind) {
    long long k = std::sqrt(a);
    if (k * k == a && k != 1) {
        binary(k, prime, ind);
    } else {
        std::cout << "NO\n";
        return;
    }
}

int main() {
    std::vector<bool> prime(MAX + 1);
    std::vector<int> primes(MAX);
    int numPrimes;

    sieveOfEratosthenes(prime, primes, numPrimes);

    int a;
    std::cin >> a;
    std::vector<long long> arr(a);

    for (int i = 0; i < a; i++) {
        std::cin >> arr[i];
        check(arr[i], primes, numPrimes);
    }

    return 0;
}
