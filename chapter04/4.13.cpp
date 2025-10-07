/*
The method stated in
"https://www.wikiwand.com/en/articles/Sieve_of_Eratosthenes"
*/
#include "../std_lib_facilities.h"

int main() {
  try {

    std::cout << "Up to which number do you want to calculate prime numbers ?"
              << '\n';
    int limit{0};
    std::cin >> limit;

    vector<int> primes(limit + 1);

    // the ones that not set as 1 are the prime numbers
    for (int i = 2; i <= (limit / 2); ++i) {
      if (primes[i] == 0) {
        int count = i + i;
        while (count <= limit) {
          primes[count] = 1;
          count += i;
        }
      }
    }

    for (int i = 2; i < limit; ++i) {
      if (primes[i] == 0) {
        std::cout << "*" << i << '\n';
      }
    }

    return 0;

  } catch (runtime_error e) {
    std::cout << e.what() << '\n';
  } catch (...) {
    std::cout << "exiting\n";
  }
}
