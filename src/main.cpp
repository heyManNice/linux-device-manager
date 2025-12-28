#include <gtkmm.h>
#include "i18n/.hpp"

class HelloWorld : public Gtk::Window
{
private:
    Gtk::Paned paned;
    Gtk::TreeView tree_view;
    Gtk::Label label;

public:
    HelloWorld()
    {
        set_title("linux device manager"_t);
        set_default_size(800, 600);

        paned.set_position(200);
        paned.add1(tree_view);

        add(paned);

        label.set_text("Test"_t);
        paned.add2(label);

        show_all_children();
    }
};

int main()
{
    auto app = Gtk::Application::create("com.ldm.test");
    HelloWorld window;
    return app->run(window);
}