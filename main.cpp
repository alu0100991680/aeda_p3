#include <iostream>
#include "mylinkedlist.h"

using namespace std;

int main(int argc, char** argv) {
    
    TDATO a;
    a.cod = 1;
    a.name = "Ramón";  
    a.surname = "Negrillo Valdivia";
    
    TDATO b;
    b.cod = 2;
    b.name = "Yezer";  
    b.surname = "Gonzalez Mella";
    
    TDATO c;
    c.cod = 3;
    c.name = "Rayco";  
    c.surname = "Serpa Alemani";
    
    TDATO d;
    d.cod = 4;
    d.name = "Ana Maria";  
    d.surname = "Nesoya Marquez";
    
    mylinkedlist *v = new mylinkedlist();
    v->debug(false);
    
    cout << " ================= " << endl;
    cout << "|  MYLINKEDLIST   |" << endl;
    cout << " ================= " << endl << endl;
    
    //Introducimos 3 usuario
    cout << "Introducimos Rámon, Yezer, Rayco. Mostramos resultado de la lista" << endl;
    v->add(a);
    v->add(b);
    v->add(c);
    v->show();
    
    //Get
    cout << "Visualizamos con get el usuario 0 y 2" << endl;
    LINKEDLISTNODE u = v->get(0);
    cout << u.mynode.cod << endl;
    cout << u.mynode.name << endl;
    cout << u.mynode.surname << endl;
    cout << "-----" << endl;
    LINKEDLISTNODE f = v->get(2);
    cout << f.mynode.cod << endl;
    cout << f.mynode.name << endl;
    cout << f.mynode.surname << endl;

    //Removeat 1
    cout << "Eliminamos el usuario Yezer. Y verificamos como queda la lista y contabilizamos elementos" << endl; 
    v->removeat(1);
    v->show();
    cout << "Count: " << v->count() << endl;
    
    //Remove el ultimo en este caso Rayco
    cout << "Eliminamos el último en este caso Rayco. Y verificamos como queda la lista y contabilizamos elementos" << endl; 
    v->removeat(1);
    v->show();
    cout << "Count: " << v->count() << endl;
    
    //Add. Introducimos 1 usuario. Ana
    cout << "Añadimos a Ana. Y verificamos como queda la lista y contabilizamos elementos" << endl; 
    v->add(d);
    v->show();
    cout << "Count: " << v->count() << endl;

    //Eliminamos la posicion 0
    cout << "Eliminamos la posicion 0 y verificamos si Ana-Next apunta a 0x0" << endl; 
    v->removeat(0);
    v->show();
    cout << "Count: " << v->count() << endl;
    
    //Vaciamos la pila con clear
    cout << "Vaciamos la pila con clear y verificamos tamaño con count()" << endl;
    v->clear();
    cout << "Count: " << v->count() << endl;
    
    delete v;
    return 0;
}

