#include<iostream>
#include<windows.h>

int main(){
    std::string NomeHeroi, NivelHeroi;
    int QntXP;

    std::cout << "Insira o Nome do seu Heroi: ";
    std::cin >> NomeHeroi;
    std::cin.ignore(80, '\n');
    std::cout << std::endl;

    system("cls");


    std::cout << "Insira a quantidade de experiencia (XP) do(a) " << NomeHeroi << ": ";
    std::cin >> QntXP;
    std::cin.ignore(80, '\n');
    std::cout << std::endl;



    if(QntXP < 1000){
        NivelHeroi = "Ferro";
        std::cout << "O Heroi de nome " << NomeHeroi << ", esta no nivel: " << NivelHeroi << "!" << std::endl;
    }else if(QntXP > 1001 && QntXP < 2001){
        NivelHeroi = "Bronze";
        std::cout << "O Heroi de nome " << NomeHeroi << ", esta no nivel: " << NivelHeroi << "!" << std::endl;
    }else if(QntXP > 2001 && QntXP < 5001){
        NivelHeroi = "Prata";
        std::cout << "O Heroi de nome " << NomeHeroi << ", esta no nivel: " << NivelHeroi << "!" << std::endl;
    }else if(QntXP > 5001 && QntXP < 7001){
        NivelHeroi = "Ouro";
        std::cout << "O Heroi de nome " << NomeHeroi << " esta no nivel: " << NivelHeroi << "!" << std::endl;
    }else if(QntXP > 7001 && QntXP < 8001){
        NivelHeroi = "Platina";
        std::cout << "O Heroi de nome " << NomeHeroi << " esta no nivel: " << NivelHeroi << "!" << std::endl;
    }else if(QntXP > 8001 && QntXP < 9001){
        NivelHeroi = "Ascendente";
        std::cout << "O Heroi de nome " << NomeHeroi << " esta no nivel: " << NivelHeroi << "!" << std::endl;
    }else if(QntXP > 9001 && QntXP < 10000){
        NivelHeroi = "Imortal";
        std::cout << "O Heroi de nome " << NomeHeroi << " esta no nivel: " << NivelHeroi << "!" << std::endl;
    }else if(QntXP >= 10001){
        NivelHeroi = "Radiante";
        std::cout << "O Heroi de nome " << NomeHeroi << " esta no nivel: " << NivelHeroi << "!" << std::endl;
    }

}
