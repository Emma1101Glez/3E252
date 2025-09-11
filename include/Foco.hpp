#pragma once
#include <Estado.hpp>

class Foco
{
private:
    Estado estado;
public:
    Foco() {                            //constructor
        estado = false;
    } 
    ~Foco() {                        //destructor
    }


    void Encender (){ 
        //codigo en paradigma estructurado se controla el estado interno pero lo manupula la clase foco
        estado = true;
    }
    void Apagar (){
        estado = false;
    }

    Estado MostrarEstado (){
        return estado;
    }

};