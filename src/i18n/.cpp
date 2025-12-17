#include ".hpp"

#include <locale.h>
#include <libintl.h>

namespace ldm::i18n
{
    void init()
    {
        setlocale(LC_ALL, "");
        bindtextdomain("ldm", "./dist/locale");
        textdomain("ldm");
    }
}
