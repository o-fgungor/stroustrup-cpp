#/*
 * a ⋅x2 + b ⋅x + c = 0
*/

#include "../std_lib_facilities.h"
#include <exception>
#include <stdexcept>

struct quadratic_roots {
  double first_root;
  double second_root;
};

quadratic_roots solve_quadratic(double a, double b, double c) {
  quadratic_roots roots;

  if (((b * b) - (4 * a * c)) < 0) {
    throw std::runtime_error("equation has two complex roots!");
  } else {
    roots.first_root = ((-b) + sqrt((b * b) - (4 * a * c))) / (2 * a);
    roots.second_root = ((-b) - sqrt((b * b) - (4 * a * c))) / (2 * a);
  }
  return roots;
}

int main() {
  try {
    double a{0};
    double b{0};
    double c{0};

    std::cout << "To get roots of quadratic equations \" ax^2 + bx + c = 0 \" "
              << '\n';
    std::cout << "give a, b and c." << '\n';
    std::cin >> a >> b >> c;

    quadratic_roots roots = solve_quadratic(a, b, c);

    if (roots.first_root == roots.second_root) {
      std::cout << "there is one real root and its: " << roots.first_root
                << '\n';
    } else {
      std::cout << "first root: " << roots.first_root << '\n';
      std::cout << "second_root: " << roots.second_root << '\n';
    }

  } catch (const exception &e) {
    cerr << "Error: " << e.what() << '\n';
  } catch (...) {
    cerr << "Unknown Error!" << '\n';
  }
}
