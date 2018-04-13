#ifndef IMAGEM_HPP
#define IMAGEM_HPP

#include <string>
#include <fstream>
#include <stdlib.h>
#include <bits/stdc++.h>



using namespace std;

class Imagem{
protected:
  int altura;
  int largura;
  string tipo;
  string comentario;
  char nomeArquivo[100];
  string conteudoFinal;
  vector<string> conteudos;
  int localSMS;
  int tamanhoSMS;

public:
  //Construtor e destrutor
  Imagem();
  ~Imagem();

  //Métodos acessores
  void setAltura(int altura);
  int getAltura();
  void setLargura(int largura);
  int getLargura();
  void setTipo(string tipo);
  string getTipo();
  void setComentario(string comentario);
  string getComentario();

  //Outros métodos
  void lerImagem();
  ifstream imagem;
  void imprimeDadosImagem();
  void pegarDados();



};
#endif