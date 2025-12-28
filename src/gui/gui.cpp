#include "gui.hpp"
#include "i18n/i18n.hpp"

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

            liststore = Gtk::ListStore::create(columns);
            tree_view.set_model(liststore);

            tree_view.append_column("devices", columns.col_name);

            Gtk::TreeModel::Row row1 = *(liststore->append());
            row1[columns.col_name] = "disk sda";

            Gtk::TreeModel::Row row2 = *(liststore->append());
            row2[columns.col_name] = "network eth0";

            show_all_children();
        }
    }
}