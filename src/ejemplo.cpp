#include  <iostream>
#include  <string>
#include  <chrono>
#include  <thread>
#include <ftxui/screen/screen.hpp>
using namespace std;
using namespace ftxui;

#include <Dibujo.hpp>

int main (int arg, char const *argv[])
{
    Screen pantalla = Screen :: Create(
        Dimension::Full(),
        Dimension::Fixed(30)
    );



    Dibujo pez1
    (Color::Red,
        {
            string("|\\   \\\\__     o"),
            string("| \\_/    o \\    o"),
            string("> _   (( <_  oo  "),
            string("| / \\__+___/     "),
            string("|/     |/        ")
        }
    );
    Dibujo pez2 = pez1;
    Dibujo pez3 = pez1;
    Dibujo pecesito
    (Color::Blue, 
        {
            string ("          /`·..    "),    
            string ("     /.....`:·     "),
            string (" ..·´  .   `·...·´)"),
            string (": © ): ;      .  { "),
            string (" `·.. `·  ..·´\\`·¸)"),
            string ("     `\\\\..·´     ")        
        }
    );
    Dibujo pecesito2 = pecesito;
    Dibujo pecesito3 = pecesito;
    Dibujo delfin
    (Color::BlueViolet,
        {
            string ("                (`.             "),
            string ("                 \\ `.           "),
            string ("                  )  `._..---._ "),
            string ("\\`.       __...---`         o  )"),
            string (" \\ `._,--'           ,    ___,' "),
            string ("  ) ,-._          \\  )   _,-'   "),
            string (" /,'    ``--.._____\\/--''       ")
        }
    );
    Dibujo delfin2 = delfin;

    Dibujo medusa
    (Color::Blue3,
        {
            string ("      _______    "), 
            string (" ,-~~~       ~~~-,   "),  
            string ("(                 )  "), 
            string (" \\_-, , , , , ,-_/   "), 
            string ("    / / | | \\ \\      "), 
            string ("    | | | | | |      "), 
            string ("    | | | | | |      "),
            string ("   / / /   \\ \\ \\     "), 
            string ("   | | |   | | |     ")   
        }
    );
    Dibujo medusa2 = medusa;
    Dibujo medusa3 = medusa;
    Dibujo medusa4 = medusa;

    Dibujo pezpar
    (Color::Aquamarine1Bis,
        {
            string("          ,--...,      "),
            string("         .''-..'     _ "),
            string("        /@    `.-:  _/`"),
            string("        > )<  ,-.: (_) "),
            string("         `..-',:-      "),
            string("   ,--..   `-'         "),
            string("  .''-.,'     _        "),
            string(" /@    `.-:  (_)       "),
            string(" > )<  ,-.:   +        "),
            string("  `..-',`              "),
            string("    `-'                ")
        }
    );
    Dibujo pezpar2 = pezpar;
    Dibujo pezpar3 = pezpar;
    Dibujo pezpar4 = pezpar;
    Dibujo pezpar5 = pezpar;
    Dibujo pezpar6 = pezpar;
    Dibujo pezpar7 = pezpar;
    Dibujo pezpar8 = pezpar;
    Dibujo pezpar9 = pezpar;

    Dibujo mamalon
    (Color::Green, 
        {
            string("                                          ────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────    "),
            string("                                ──────────                                                                                                                                                                                        "),
            string("                        ────────                                                                                                                                                                                                  "),
            string("                  ──────                                                                                                                                                                                                          "),
            string("              ────                                                                                                                                                                                                                "),
            string("          ────                                                                                                                                                                                                                    "),
            string("       ───                                                                                                                                                                                                                        "),
            string("     ──                                                                                                                                                                                                                           "),
            string("  ───                                                                                                                                                                                                                             "),
            string("──                                                                                                                                                                                                                                "),
            string(" ▼────                                                                                                                                                                                                                            "),
            string(" ▼   ─────                                                                                                                                                                                                                        "),
            string(" ▼▼     ▼▼────                                                                                                                                                                                                                    "),
            string("  ▼   ▼▼▼    ─▼──                                                                                                                                                                                                                 "),
            string("  ▼  ▼▼       ▼  ────                                                                                                                                                                                                             "),
            string("  ▼ ▼▼        ▼    ▼▼▼───                                                                                                                                                                                                         "),
            string("  ▼▼▼         ▼  ▼▼▼    ▲─────                                                                                                                                                                                                    "),
            string("   ▼    ▲     ▼ ▼▼     ▲▲    ──────                                                                                                                                                                                               "),
            string("       ▲▲     ▼▼▼     ▲▲▲     ─────                                                                                                                                                                                               "),
            string("      ▲▲▲      ▼     ▲▲ ▲▲────                                                                                                                                                                                                    "),
            string("     ▲▲ ▲▲         ──▲────                                                                                                                                                                                                        "),
            string("     ▲   ▲     ─────                                                                                                                                                                                                              "),
            string("    ▲▲   ▲▲ ────                                                                                                                                                                                                                  "),
            string("   ▲▲    ─▲──                                                                                                                                                                                                                     "),
            string("  ▲▲  ────                                                                                                                                                                                                                        "),
            string("  ▲────                                                                                                                                                                                                                           "),
            string(" ───                                                                                                                                                                                                                              "),
            string(" ────                                                                                                                                                                                                                             "),
            string("     ── ─────                                                                                                                                                                                                                     "),
            string("            ───────                                                                                                                                                                                                               "),
            string("                  ────────────                       ─────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────"),
            string("                              ───────────────────────             ")
        }
    );

    pez1.Mover(pantalla, -100, 2);  // offsets para ajustar (izq/abajo)
    pez2.Mover(pantalla, -50, 6);  // offsets para ajustar (izq/abajo)
    pez3.Mover(pantalla, -10, 10);  // offsets para ajustar (izq/abajo)
    delfin.Mover(pantalla, -200, 2);  // offsets para ajustar (izq/abajo)
    delfin2.Mover(pantalla, -200, 10);  // offsets para ajustar (izq/abajo)
    pecesito.Mover(pantalla, 100, 10); // empieza más a la izquierda y arriba
    pecesito2.Mover(pantalla, 50, 0); // empieza más a la izquierda y arriba
    pecesito3.Mover(pantalla, 10, 10); // empieza más a la izquierda y arriba
    medusa.Mover(pantalla, 130, -10); // empieza más a la izquierda y arriba
    medusa2.Mover(pantalla, 150, 0); // empieza más a la izquierda y arriba
    medusa3.Mover(pantalla, 350, 10); // empieza más a la izquierda y arriba
    medusa4.Mover(pantalla, 350, 0); // empieza más a la izquierda y arriba

    pezpar.Mover(pantalla, 100, 2);  // offsets para ajustar (izq/abajo)
    pezpar2.Mover(pantalla, 50, -10);  // offsets para ajustar (izq/abajo)
    pezpar3.Mover(pantalla, 10, 10);  // offsets para ajustar (izq/abajo)
    pezpar4.Mover(pantalla, 250, -10);  // offsets para ajustar (izq/abajo)
    pezpar5.Mover(pantalla, 300, 6);  // offsets para ajustar (izq/abajo)
    pezpar6.Mover(pantalla, 400, 10);  // offsets para ajustar (izq/abajo)
    pezpar7.Mover(pantalla, 200, 2);  // offsets para ajustar (izq/abajo)
    pezpar8.Mover(pantalla, 220, 0);  // offsets para ajustar (izq/abajo)
    pezpar9.Mover(pantalla, 180, -10);  // offsets para ajustar (izq/abajo)


    mamalon.Mover(pantalla, 700, 0); // empieza más a la izquierda y arriba

    while(true){
        pecesito.MoverIzquierda();
        pecesito2.MoverIzquierda();
        pecesito3.MoverIzquierda();
        medusa.MoverIzquierda();
        medusa2.MoverIzquierda();
        medusa3.MoverIzquierda();
        medusa4.MoverIzquierda();
        mamalon.MoverIzquierda();
        pez1.MoverDerecha();
        pez2.MoverDerecha();
        pez3.MoverDerecha();
        delfin.MoverDerecha();
        delfin2.MoverDerecha();
        pezpar.MoverIzquierda();
        pezpar2.MoverIzquierda();
        pezpar3.MoverIzquierda();
        pezpar4.MoverIzquierda();
        pezpar5.MoverIzquierda();
        pezpar6.MoverIzquierda();
        pezpar7.MoverIzquierda();
        pezpar8.MoverIzquierda();
        pezpar9.MoverIzquierda();



        pez1.Imprimir(pantalla);
        pez2.Imprimir(pantalla);
        pez3.Imprimir(pantalla);
        pecesito.Imprimir(pantalla);
        pecesito2.Imprimir(pantalla);
        pecesito3.Imprimir(pantalla);
        medusa.Imprimir(pantalla);
        medusa2.Imprimir(pantalla);
        medusa3.Imprimir(pantalla);
        medusa4.Imprimir(pantalla);
        delfin.Imprimir(pantalla);
        delfin2.Imprimir(pantalla);
        mamalon.Imprimir(pantalla);
        pezpar.Imprimir(pantalla);
        pezpar2.Imprimir(pantalla);
        pezpar3.Imprimir(pantalla);
        pezpar4.Imprimir(pantalla);
        pezpar5.Imprimir(pantalla);
        pezpar6.Imprimir(pantalla);
        pezpar7.Imprimir(pantalla);
        pezpar8.Imprimir(pantalla);
        pezpar9.Imprimir(pantalla);

        pantalla.Print();
        this_thread::sleep_for(chrono::milliseconds(50));
        pantalla.Clear();
        cout << pantalla.ResetPosition(true);

    }

    return 0;
}