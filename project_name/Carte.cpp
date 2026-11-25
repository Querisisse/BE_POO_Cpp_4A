// #include "Carte.hpp"
//
// Ce code crée une classe virtuelle Carte pour ensuite hériter
// de 3 types de cartes différents, les Nombres, les Faces et les As.

class Carte {
  private :
    char Valeur;
  public :
    virtual int getValue()=0;
};
