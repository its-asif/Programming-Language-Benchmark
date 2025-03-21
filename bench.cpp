#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    auto start = high_resolution_clock::now();
    cout << "Fibonacci(40) = " << fibonacci(40) << endl;
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "C++ Execution Time: " << duration.count() / 1000.0 << " seconds" << endl;
    return 0;
}
