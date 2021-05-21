#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int comprimento_casa, altura_casa, porcentagem_contrucao, lado_lote, cont, area_casa, area_lote;
    while (true){
        cin >> comprimento_casa;
        if (comprimento_casa == 0){
            break;
        }
        cin >> altura_casa;
        area_casa = altura_casa * comprimento_casa;
        cin >> porcentagem_contrucao;
        area_lote = (area_casa * 100) / porcentagem_contrucao;
        cont = 0;
        lado_lote = 0;
        while (cont < area_lote){
            lado_lote++;
            cont = lado_lote * lado_lote;
        }
        if (cont != area_lote){
            lado_lote--;
        }
        cout << lado_lote <<endl;
    }
}
