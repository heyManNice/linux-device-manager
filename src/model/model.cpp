#include "model.hpp"

namespace ldm::model
{
    devices::devices()
    {
        liststore = Gtk::ListStore::create(columns);

        Gtk::TreeModel::Row row1 = *(liststore->append());
        row1[columns.col_name] = "disk sda";

        Gtk::TreeModel::Row row2 = *(liststore->append());
        row2[columns.col_name] = "network eth0";
    }
}