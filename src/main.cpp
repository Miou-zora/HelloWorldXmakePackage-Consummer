#include <iostream>
#include <string>
#include <foo.h>

int main(int argc, char** argv) {
    std::cout << "Value of foo:" << std::to_string(foo()) << std::endl;
    return 0;
}
