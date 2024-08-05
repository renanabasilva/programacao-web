/* 

pretendo um programa que leia o nome do utilizador

o ano de nascimento

A localidade

a cidade

o pais

o cumprimente  e apresente a sua idade aproximada

*/

#include<iostream>
using namespace std;

int main(){
  string nome, localidade, cidade, pais;
  int ano_nasc, ano_atual, idade;

  cout<<"Qual o seu nome? ";
  cin>>nome;
  cout<<"Qual o ano de seu nascimento? ";
  cin>>ano_nasc;
  cout<<"Qual o ano atual? ";
  cin>>ano_atual;
  cout<<"Qual a sua localidade? ";
  cin>>localidade;
  cout<<"Qual a cidade em que mora? ";
  cin>>cidade;
  cout<<"Qual o pais? ";
  cin>>pais;

  idade = ano_atual - ano_nasc;

  cout<<"Ola "<<nome<<", sua idade e "<<idade<<" anos, e reside em "<<localidade<<", "<<cidade<<", "<<pais<<endl;
}
