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

                (*liststore->append())[col_devs] = "设备 /dev";
                (*liststore->append())[col_devs] = "系统 /sys";
                (*liststore->append())[col_devs] = "进程 /proc";
            }
        };
        static Init initializer;
    }
}