#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo {
private:
    
    int largura;
    int altura;

public:
    
    Retangulo(int l, int a);
    ~Retangulo(); 
    
    int obterLargura() const;
    int obterAltura() const;

    
    void definirLargura(int l);
    void definirAltura(int a);

    
    int calcularArea() const;
    int calcularPerimetro() const;

    
    void renderizar() const; 
};

#endif