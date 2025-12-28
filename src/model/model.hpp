#pragma once
#include <gtkmm.h>
namespace ldm::model
{
    class devices
    {
    public:
        Glib::RefPtr<Gtk::ListStore> liststore;

        class ModelColumns : public Gtk::TreeModel::ColumnRecord
        {
        public:
            ModelColumns() { add(col_name); }
            Gtk::TreeModelColumn<Glib::ustring> col_name;
        };

        ModelColumns columns;
        devices();
    };
}