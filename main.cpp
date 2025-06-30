#include <iostream>
#include <fmt/format.h>
#include "person.hpp"

int main() {
    Person p("John", 42);
    std::cout << fmt::format("{} is {} years old !", p.getName(), p.getAge()) << std::endl;
    p.setName("Jane");
    p.setAge(43);
    std::cout << fmt::format("{} is {} years old !", p.getName(), p.getAge()) << std::endl;
    fmt::println("Hello World !!");
    return EXIT_SUCCESS;
}