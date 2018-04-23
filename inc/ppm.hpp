#ifndef PPM_HPP
#define PPM_HPP

#include "imagem.hpp"
#include <string>
#include <fstream>
#include <stdlib.h>

using namespace std;

class Ppm : public Imagem {

private:
  string keyword;
public:
  Ppm();
  ~Ppm();

  void setKeyword(string keyword);
  string getKeyword();

  
  void pegarDadosCriptografia();
  void pegarMensagem();
  void transformarImagemEmMatriz();
  void cifraDeCesar();


};

#endif
