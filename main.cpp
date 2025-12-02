// Mateus Campos souza de Paula 
// CJ3017281
// Prova 3 


#include "retangulo.h"
#include <iostream>

using namespace std;

int main() {
    
    cout << "Dados do retângulo original:" << endl;
    
    
    int largura_inicial;
    int altura_inicial;
    
    cout << "   Insira a Largura inicial: ";
    cin >> largura_inicial;
    cout << "   Insira a Altura inicial: ";
    cin >> altura_inicial;
    
    Retangulo ret_original(largura_inicial, altura_inicial); 
    
    cout << "Largura: " << ret_original.obterLargura() << endl;
    cout << "Altura: " << ret_original.obterAltura() << endl;
    cout << "Área: " << ret_original.calcularArea() << endl;
    cout << "Perímetro: " << ret_original.calcularPerimetro() << endl;

    
    cout << " Retângulo renderizado:" << endl;
    ret_original.renderizar(); 

    
    int nova_largura;
    int nova_altura; 
    
    cout << "informe as novas dimensões:" << endl; 
    
    cout << "Insira a nova Largura:";
    cin >> nova_largura; 

    cout << "Insira a nova altura:";
    cin >> nova_altura; 

    ret_original.definirLargura(nova_largura);
    ret_original.definirAltura(nova_altura);
    
    cout << "Dados do retângulo modificado:" << endl; 
    cout << "Largura: " << ret_original.obterLargura() << endl;
    cout << "Altura: " << ret_original.obterAltura() << endl;
    cout << "Área: " << ret_original.calcularArea() << endl;
    cout << "Perímetro: " << ret_original.calcularPerimetro() << endl;
    
    cout << "Retângulo renderizado:" << endl;
    ret_original.renderizar(); 
    
    

    return 0; 
}