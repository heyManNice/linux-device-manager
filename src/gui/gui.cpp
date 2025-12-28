#include "gui.hpp"
#include "i18n/i18n.hpp"
#include "model/model.hpp"

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

            ldm::model::devices device_model;

            tree_view.set_model(device_model.liststore);

            tree_view.append_column("devices", device_model.columns.col_name);

            show_all_children();
        }
    }
}