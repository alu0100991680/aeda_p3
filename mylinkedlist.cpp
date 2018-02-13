#include <iostream>
#include <string>
#include "mylinkedlist.h"

using namespace std;

mylinkedlist::mylinkedlist() {
}

mylinkedlist::mylinkedlist(const mylinkedlist& orig) {
}

mylinkedlist::~mylinkedlist() {
}


NODE * mylinkedlist::find(int at){
    NODE *n = this->head_reference;
    for(int i=0;i<at;i++){
        n = n->next;
    }
    return n;
}

void mylinkedlist::add(TDATO &d) {
    this->dmsg("F:ADD");

    NODE *n = new NODE();
    if (0<this->length){
        n->mynode.cod = d.cod;
        n->mynode.name = d.name;
        n->mynode.surname = d.surname;

        
        NODE *d = this->find(this->length-1);
        
        d->next = n;
        
    }else{
        //first
        n->mynode.cod = d.cod;
        n->mynode.name = d.name;
        n->mynode.surname = d.surname;
        n->next = nullptr;
        
        // Puntero head
        this->head_reference = n;
    }
    
    //Ampliamos el indicador de contenido
    this->length++;

}

void mylinkedlist::remove() {
    this->dmsg("F:REMOVE");
    if (0<this->length){
        //Creamos un vector y puntero asociado para volcar la nueva información
        //this->resize(-1);
            //Añadimos el nuevo dato a la cola

        //Ampliamos el indicador de contenido
        if(1<this->length){
            NODE *d = this->find(this->length-1);
            delete d->next;
            this->length--;
        }else{
            delete this->head_reference;
        }
    }
}

NODE& mylinkedlist::get(int i){
    this->dmsg("F:GET->" + std::to_string(i));
    NODE *d = this->find(i);
    return *d;
}

int mylinkedlist::count() {
    this->dmsg("F:COUNT");
    return this->length;
}


void mylinkedlist::show() {
    this->dmsg("F:SHOW");
    this->dmsg("F:SHOW:Lista de objectos");
    if (length==0){ this->dmsg("F:SHOW:Vacia"); }
    
    for (int i=0; i<this->length; i++){
        NODE *current_ = this->find(i);
        this->dmsg("F:SHOW:Objecto->" + std::to_string(i));
        cout << "Next->" << current_->next << endl;
        cout << current_->mynode.cod << endl;
        cout << current_->mynode.name << endl;
        cout << current_->mynode.surname << endl << endl;
    }
}

void mylinkedlist::debug(bool is_active){
    this->debug_flag = is_active;
}

void mylinkedlist::dmsg(std::string message){
    if (this->debug_flag==true){
        cout << message << endl;
    }
}

void mylinkedlist::clear(){
    this->dmsg("F:CLEAR");
    int fullcontent = this->length;
    for (int i=0;i<fullcontent;i++){
        this->remove();
    }
    this->length = 0;
}
