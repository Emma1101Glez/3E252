#pragma once
#include<string>
#include<list>
using namespace std;

#include<ftxui/screen/screen.hpp>
using namespace ftxui;

class Dibujo
{
    private: 
    list<string> dibujo;
    int x=0,y=0;
    Color fondo;
    Color color;

    public:
    Dibujo(list<string> dibujo){
        this->dibujo = dibujo;
    }
    Dibujo(Color color, Color fondo, list<string> dibujo)
    {
        this->dibujo = dibujo;
        this->color = color;
        this->fondo = fondo;
    }
    Dibujo(Color color, list<string> dibujo)
    {
        this->dibujo = dibujo;
        this->color = color;
    }

    
    Dibujo()
    {
        dibujo = 
        {
            string("   emma                     "),
            string("    \\|/          (__)       "),
            string("         `\\------(oo)       "),
            string("          ||     (__)       "),
            string("           ||w--||     \\|/  "),
            string("       \\|/                  ")
        };
    }
    ~Dibujo(){}













        // --- NUEVO: fijar posición ---
    void Posicionar(int nx, int ny){ x = nx; y = ny; }

    // --- NUEVO: obtener ancho/alto del dibujo ---
    pair<int,int> Size() const {
        int w = 0;
        for (auto &s : dibujo) w = max(w, (int)s.size());
        return { w, (int)dibujo.size() };
    }

    // --- NUEVO: centrar en la pantalla (con offsets opcionales) ---
    void Mover(Screen& scr, int offx=0, int offy=0){
        auto [w,h] = Size();
        int cx = max(0, (scr.dimx() - w)/2 + offx);
        int cy = max(0, (scr.dimy() - h)/2 + offy);
        Posicionar(cx, cy);
    }

    void Imprimir(Screen& pantalla)
    {
        int fila = 0;
        for (auto &&linea : dibujo)
        {
            int columna =0;
            for (auto &&letra : linea)
            {
                if (x+columna>=0 && x+columna<pantalla.dimx()
                 && y+fila>=0 && y+fila<pantalla.dimy())
                {
                    Pixel &pixel = pantalla.PixelAt(x + columna, y + fila);
                    pixel.character = letra;
                    pixel.background_color = fondo;
                    pixel.foreground_color = color;
                }
                columna ++;
            }
            fila ++;
        }
    }

    void MoverDerecha(){
        x++;
    }
    void MoverIzquierda(){
        x--;
    }
    void MoverAbajo(){
        y++;
    }
    void MoverArriba(){
        y--;
    }
};