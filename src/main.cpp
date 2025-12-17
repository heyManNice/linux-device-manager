#include <iostream>
#include "i18n/.hpp"

int main()
{
    ldm::i18n::init();
    std::cout << "Hello World!"_t << std::endl;
    return 0;
}
