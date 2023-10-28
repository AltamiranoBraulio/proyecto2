#pragma once
#include <Ventana.hpp>
#include <Dibujo.hpp>
#include <curses.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{

    Ventana v;

    Dibujo d1(1, 100, "fondo");
    Dibujo d2(1, 12, "hillclimber");
    bool ejecucion = true;
    while (ejecucion)
    {

        v.Actualizar();
        if (getch() == 'q')
        {
            ejecucion = false;
        }
        if (getch() == 'd')
        {
            d2.AvanzarX(1);
        }
        if (getch() == 'a')
        {
            d2.RetrocederX(1);
        }
        clear();
        d1.Dibujar();
        d2.Dibujar();
        v.Dibujar();
        refresh();
        usleep(41000);
    }

        return 0;
}
