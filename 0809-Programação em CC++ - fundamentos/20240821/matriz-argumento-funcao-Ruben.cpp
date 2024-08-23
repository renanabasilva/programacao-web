#include<iostream>

using namespace std;

int soma(int arr[],int tamanho){

    int total=0;//acumulador inicializado a 0

    for(int i=0;i<tamanho;i++){

        total=total+arr[i];//acrescenta ao valor do acumulador o valor existente
        //no arr[i]

        cout << "posicao "<< i << " valor " << arr[i]<<endl;

    }

    return total;//devolve para o local onde foi chamada a função o valor
    //calculado na variavel total

}

int main(){

int tam;

cout << " tamanho? " << endl;

cin >> tam; //variavel que vai definir o tamanho do array

int num[tam];//array num com dimensão [tam]

for (int i=0; i<tam;i++){//for que percorre o array para o inicializar
        //pelos valores introduzidos pelo utilizador

cout << "valor posicao " << i << endl;//informa a posição ao utilizador

cin >> num [i];//utilizador insere valor que vai ser guardado no array na posição i

}

int resultado=soma(num,tam);//chama a função soma e recebe o valor
//calculado nesta e coloca na variavel resultado

cout <<"Resultado="<<resultado<<endl;

}

