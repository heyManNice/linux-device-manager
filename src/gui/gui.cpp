#include "gui.hpp"
#include "i18n/i18n.hpp"
#include "model/model.hpp"
#include "backend/backend.hpp"

namespace ldm::gui
{
    namespace window
    {
        main::main()
        {
            set_title("linux device manager"_t);
            set_default_size(800, 600);

            paned.set_position(200);
            paned.add1(tree_view);
            add(paned);

            label.set_text("Test"_t);
            paned.add2(label);

            tree_view.set_model(model::devices::liststore);

            tree_view.append_column(backend::kernel::get_kernel_version(), model::devices::col_devs);

            show_all_children();
        }
    }
}