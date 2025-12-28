#include <gtkmm.h>
#include <iostream>
#include "i18n/.hpp"

class HelloWorld : public Gtk::Window
{
public:
    HelloWorld()
    {
        set_title("Hello World");
        set_default_size(800, 600);

        button.set_label("Click Me");
        button.signal_clicked().connect(sigc::mem_fun(*this, &HelloWorld::on_button_clicked));

        add(button);

        show_all_children();
    }

protected:
    void on_button_clicked()
    {
        button.set_label("Hello GTKmm!");
    }

private:
    Gtk::Button button;
};

int main()
{
    std::cout << "Hello World!"_t << std::endl;
    auto app = Gtk::Application::create("com.ldm.test");
    HelloWorld window;
    return app->run(window);
}
