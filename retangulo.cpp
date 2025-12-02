#include "Retangulo.h"
#include <iostream>

using namespace std;


Retangulo::Retangulo(int l, int a) : largura(l), altura(a) {}





int Retangulo::obterLargura() const {
    return largura;
}

int Retangulo::obterAltura() const {
    return altura;
}


void Retangulo::definirLargura(int l) {
    if (l > 0) {
        largura = l;
    }
}

void Retangulo::definirAltura(int a) {
    if (a > 0) {
        altura = a;
    }
}


int Retangulo::calcularArea() const {
    return largura * altura;
}

int Retangulo::calcularPerimetro() const {
    return 2 * (largura + altura);
}


void Retangulo::renderizar() const {

  for (int i = 0; i < altura; ++i) {

    for (int j = 0; j < largura; ++j) {

      // borda superior | inferior | esquerda | direita
      if (i == 0 || i == altura - 1 || j == 0 || j == largura - 1) {

        cout << "* ";
      } else {
        cout << "  ";
      }
    }
    cout << endl;
  }
}