#include "i18n.hpp"

#include <locale.h>
#include <libintl.h>

const char *operator"" _t(const char *str, std::size_t)
{
    return gettext(str);
}

namespace ldm::i18n
{
    struct Init
    {
        Init()
        {
            setlocale(LC_ALL, "");
            bindtextdomain("ldm", "./dist/locale");
            textdomain("ldm");
        }
    };

    static Init initializer;
}
