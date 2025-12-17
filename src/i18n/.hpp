#pragma once
#include <libintl.h>

#define _(str) gettext(str)

namespace ldm::i18n
{
    void init();
}
