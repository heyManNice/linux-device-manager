#include ".hpp"

#include <locale.h>
#include <libintl.h>

const char *operator"" _t(const char *str, std::size_t)
{
    return gettext(str);
}

namespace ldm::i18n
{
    void init()
    {
        setlocale(LC_ALL, "");
        bindtextdomain("ldm", "./dist/locale");
        textdomain("ldm");
    }
}
