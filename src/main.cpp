#include <io/Window.hpp>

int main(void) {
    vq::io::Window window({"Filtering After Shading"});
    window.make_current();
    while (!window.should_close()) {
        window.update();
    }
    window.close();
}
