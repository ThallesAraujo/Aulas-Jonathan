#include <iostream>
using namespace std;

int main (int argc, char** argv){

    char nome[30];
    char endereco[30];
    int idade;

    int contador = 0;
    char* lista[3] = {"Nome", "Endereço", "Idade"};

    // printf("Nome \n");
    // scanf("%s", &nome);

    // printf("Endereço \n");
    // scanf("%s", &endereco);

    // printf("Idade \n");
    // scanf("%d", &idade);

    // WHILE

    // while(contador < 3){
    //     cout << lista[contador] << ' ';
        
    //     if(contador == 2){
    //         scanf("%d", &idade);
    //     }else{
    //         if(contador == 0){
    //             scanf("%s", &nome);
    //         }else{
    //             scanf("%s", &endereco);
    //         }
    //     }

    //     contador = contador+1;
    // }


    //FOR 

    for(int i = 0; i < 3; i++){
        cout << lista[i] << ' ';
        
        if(i == 2){
            scanf("%d", &idade);
        }else{
            if(i == 0){
                scanf("%s", &nome);
            }else{
                scanf("%s", &endereco);
            }
        }
    }

    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Endereco: " << endereco << endl;

    return 0;

}