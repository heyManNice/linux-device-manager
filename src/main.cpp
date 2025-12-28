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

        set_child(button);
    }

protected:
    void on_button_clicked()
    {
        button.set_label("Hello GTKmm!");
    }

private:
    Gtk::Button button;
};

class LDMApp : public Gtk::Application
{
protected:
    LDMApp()
        : Gtk::Application("com.ldm.test") {}

    void on_activate() override
    {
        auto win = new HelloWorld();
        add_window(*win);
        win->present();
    }

public:
    static Glib::RefPtr<LDMApp> create()
    {
        return Glib::RefPtr<LDMApp>(new LDMApp());
    }
};

int main(int argc, char *argv[])
{
    std::cout << "Hello World!"_t << std::endl;
    auto app = LDMApp::create();
    return app->run(argc, argv);
}
