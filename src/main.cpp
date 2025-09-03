#include <iostream>
#include <string>
#include <foo.h>
#include <bar.h>
#include <baz.h>

int main(int argc, char** argv) {
    std::cout << "Value of foo:" << std::to_string(foo()) << std::endl;
    std::cout << "Value of bar:" << std::to_string(bar) << std::endl;
    std::cout << "Value of baz:" << std::to_string(baz()) << std::endl;

    return 0;
}
