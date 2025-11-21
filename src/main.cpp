#include "App.h"

int main() {
    App app;

    while(app.isRunning())
    {
        app.update();
        app.render();
    }

    return 0;
}