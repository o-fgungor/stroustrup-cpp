#include "../std_lib_facilities.h"

int main() {
  try {
    std::cout << "it is a numbers guessing game" << '\n';
    std::cout << "please pick a number between 1-100" << '\n';
    std::cout << "answer the questions as 'y' or 'n'" << '\n';

    int upper = 100;
    int lower = 1;
    int mid = 0;

    while (lower != upper) {
      mid = (upper + lower) / 2;

      std::cout << "Is the number you are thinking less then or equal to: "
                << mid << "? (y/n)" << '\n';
      char response = 'f';
      std::cin >> response;

      switch (response) {
      case 'y':
        upper = mid;
        break;
      case 'n':
        lower = mid + 1;
        break;
      default:
        std::cout << "please only answer as 'y' or 'n'" << '\n';
        break;
      }

      if (lower == upper) {
        std::cout << "Your number is " << lower << '\n';
      }
    }

    if (lower > upper) {
      std::cout << "Your number is " << mid << '\n';
    }

    return 0;

  } catch (runtime_error e) {
    std::cout << e.what() << '\n';
  } catch (...) {
    std::cout << "exiting\n";
  }
}
