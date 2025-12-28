#pragma once
#include <gtkmm.h>
namespace ldm::model
{

    namespace devices
    {
        extern Glib::RefPtr<Gtk::ListStore> liststore;
        extern Gtk::TreeModelColumn<Glib::ustring> col_devs;
    }
}