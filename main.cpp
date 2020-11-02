#include <iostream>
using namespace std;
class nave {
    
    int posicion_x;
    int posicion_y;
    int vidas;
    
public:
    nave ();
    nave (int x, int y);
    void posicionar (int x, int y);
    void subir (void);
    void bajar (void);
    void derecha (void);
    void izquierda (void);
    void destruir (void);
    void mostrar_estado (void);
    
};

nave::nave()
{
    
    posicion_x = 0;
    posicion_y = 0;
    vidas = 3 ;
}

nave::nave (int x, int y)
{
    posicion_x = x;
    posicion_y = y;
    vidas = 3;
}

void nave::posicionar (int x, int y)

{
    posicion_x = x;
    posicion_y = y;
}

void nave::subir (void)
{
    posicion_y = posicion_y + 1;
}

void nave::bajar (void)
{
    posicion_y = posicion_y -1;
}

void nave::derecha (void)
{

    posicion_x = posicion_x +1;
}

void nave::izquierda (void)
{
    posicion_x = posicion_x -1;

}

void nave::destruir (void)
{
    if (vidas>0)
    {
        
    vidas = vidas -1;
    }
}

void nave::mostrar_estado (void)
{
    cout << "posicion_x " << posicion_x << "\n";
    cout << "posicion_y " << posicion_y << "\n";
    cout << "vidas  : " << vidas << "\n";
}

int main (void)
{
    nave enterprise;
    
    nave x_wing;
    
    nave tie_fighter(100,200) ;
    
    cout << "---Enterprise--- (Estado inicial) \n" ;
    enterprise.mostrar_estado();
    
    cout << "---X_Wing--- (Estado inicial) \n" ;
    x_wing.mostrar_estado();
    
    cout << "---Tie Fighter--- (Estado inicial) \n" ;
    tie_fighter.mostrar_estado();
    
    enterprise.posicionar(30, 50);
    
    x_wing.subir ();
    x_wing.derecha ();
    
    tie_fighter.destruir();
    
        cout << "---Enterprise--- (Estado final) \n" ;
    enterprise.mostrar_estado();
    
    cout << "---X_Wing--- (Estado final) \n" ;
    x_wing.mostrar_estado();
    
    cout << "---Tie Fighter--- (Estado final) \n" ;
    tie_fighter.mostrar_estado();
    
    cout << "\nPulse Intro para finalizar..." ;
    cin.get ();
    
    return 0;
}
arreglalo o habra consecuencias
