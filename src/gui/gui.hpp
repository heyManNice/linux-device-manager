#pragma once
#include <gtkmm.h>

namespace ldm::gui
{
    namespace window
    {
        class Main : public Gtk::Window
        {
        private:
            Gtk::Paned paned;
            Gtk::Label label;

            Gtk::TreeView tree_view;

        public:
            Main();
        };
    }
}