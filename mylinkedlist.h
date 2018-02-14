#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

struct TDATO{
    int cod;
    std::string name;
    std::string surname;
};

class NODE{
public:
  TDATO mynode;
  NODE *next;
private:
};	

class mylinkedlist {
public:
    //Estandar
    mylinkedlist();
    mylinkedlist(const mylinkedlist& orig);
    virtual ~mylinkedlist();
    //Práctica
    void show();
    void add(TDATO &d);
    void remove();
    void removeat(int at);
    void clear();
    NODE& get(int i);
    void insert(TDATO &d, int at);
    int count();
    //Aux
    void debug(bool is_active);
    void dmsg(std::string message);
private:
    int length = 0;
    bool debug_flag = true;
    NODE* head_reference;
    NODE* find(int i);
};

#endif /* MYLINKEDLIST_H */

