#include <iostream>
#include <string>
#include <foo.h>
#include <bar.h>

int main(int argc, char** argv) {
    std::cout << "Value of foo:" << std::to_string(foo()) << std::endl;
    std::cout << "Value of bar:" << std::to_string(bar) << std::endl;
    return 0;
}
