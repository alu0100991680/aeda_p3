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
    v->add(a);
    v->add(b);
    v->add(c);
    v->add(d);
    v->show();
    NODE aux = v->get(2);
    /*v->remove();
    v->show();
    v->clear();
    v->show();*/
    return 0;
}

