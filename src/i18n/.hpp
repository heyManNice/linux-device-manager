#pragma once
#include <cstddef>

const char *operator"" _t(const char *str, std::size_t);

namespace ldm::i18n
{
    void init();
}
