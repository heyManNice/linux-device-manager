#include <iostream>
#include "i18n/.hpp"

int main()
{
    ldm::i18n::init();
    std::cout << _("Hello World!") << std::endl;
    return 0;
}
