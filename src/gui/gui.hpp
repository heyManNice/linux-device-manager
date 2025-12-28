#pragma once
#include <gtkmm.h>

namespace ldm::gui
{
    namespace window
    {
        class main : public Gtk::Window
        {
        private:
            Gtk::Paned paned;
            Gtk::Label label;

            Gtk::TreeView tree_view;

            class ModelColumns : public Gtk::TreeModel::ColumnRecord
            {
            public:
                ModelColumns() { add(col_name); }
                Gtk::TreeModelColumn<Glib::ustring> col_name;
            };

            ModelColumns columns;
            Glib::RefPtr<Gtk::ListStore> liststore;

        public:
            main();
        };
    }
}