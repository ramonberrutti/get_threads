#include <iostream>
#include <thread>

int main() {
    auto iCpus = std::thread::hardware_concurrency();
    std::cout << "Numbers of Threads: " << std::to_string(iCpus) << "." << std::endl;
    return 0;
}
