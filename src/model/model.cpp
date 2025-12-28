#include "model.hpp"

namespace ldm::model
{
    namespace devices
    {
        Glib::RefPtr<Gtk::ListStore> liststore;
        Gtk::TreeModelColumn<Glib::ustring> col_devs;
        Gtk::TreeModel::ColumnRecord columns;

        struct Init
        {
            Init()
            {
                columns.add(col_devs);
                liststore = Gtk::ListStore::create(columns);

                Gtk::TreeModel::Row row1 = *(liststore->append());
                row1[col_devs] = "disk sda";
                Gtk::TreeModel::Row row2 = *(liststore->append());
                row2[col_devs] = "network eth0";
            }
        };
        static Init initializer;
    }
}