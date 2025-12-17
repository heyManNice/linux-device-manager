#include <iostream>
#include <locale.h>
#include <libintl.h>

#define _(String) gettext(String)

int main()
{
    setlocale(LC_ALL, "");

    bindtextdomain("ldm", "./dist/locale");
    textdomain("ldm");

    std::cout << _("Hello World!") << std::endl;
    return 0;
}
