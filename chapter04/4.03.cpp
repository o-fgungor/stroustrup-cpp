#include "../std_lib_facilities.h"

int main() {
  try {
    vector<double> distances;
    double sum = 0.0;
    double smallest{0};
    double greatest{0};

    std::cout << "write the doubles" << '\n';

    for (double temp; std::cin >> temp;) {
      if (distances.size() == 0) {
        greatest = temp;
        smallest = temp;
      } else {
        if (temp < smallest)
          smallest = temp;
        if (temp > greatest)
          greatest = temp;
      }

      distances.push_back(temp);
      sum += temp;
    }

    std::cout << "total distance is: " << sum << "\n";
    std::cout << "greatest distance is: " << greatest << "\n";
    std::cout << "smallest distance is: " << smallest << "\n";
    std::cout << "mean distance is: " << sum / distances.size() << "\n";
    return 0;
  } catch (runtime_error e) {
    std::cout << e.what() << '\n';
  } catch (...) {
    std::cout << "exiting\n";
  }
}
