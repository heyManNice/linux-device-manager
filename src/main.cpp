#include "gui/gui.hpp"
#include <gtkmm.h>

int main(int argc, char *argv[])
{
    auto app = Gtk::Application::create(argc, argv, "com.ldm.test");
    ldm::gui::window::Main window;
    return app->run(window);
}