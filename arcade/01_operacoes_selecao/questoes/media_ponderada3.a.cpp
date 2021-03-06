/////////////////////////////////////////////
// Fundamentos de Programação - UFC Quixada
// Baixe o motor.h ou comente o include
// motor.h: https://github.com/senapk/arcade
/////////////////////////////////////////////

#include <motor.h>
#include <iostream>
using namespace std;
//@begin

//Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a
//média ponderada dessas notas.
//@return: retorna um float.
float media_ponderada( float nota1, float nota2, float nota3, float peso1, float peso2, float peso3 ){
    return 0.0;
}

//@end

//@tests
auto feq = [](float A, float B)->bool{return ((max(A,B)-min(A,B)) < 0.01);};
void tests() {
    cerr << ("#open media_ponderada_3") << endl;
    cerr << ("#set BRONZE") << endl;
    cerr << (feq(media_ponderada(7, 6, 8, 1, 2, 3), 7.16));
    cerr << (feq(media_ponderada(8.9, 6.7, 8.1, 1.2, 2.4, 3.5), 7.76));
}

int main(){
    tests();
    cerr << endl << "#end";
    return(0);
}
//A formula da media ponderada pode ser encontrada no seguinte site:
//http://www.brasilescola.com/matematica/media-ponderada.htm
//Cuidado no posicionamento dos parênteses.
