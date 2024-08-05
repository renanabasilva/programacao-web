/*
leia o nome do utilizador e ano de nascimento, apos o cumprimente e apresente sua idade aproximada
*/

#include<iostream>
using namespace std;

int main(){
  string nome;
  int ano_nasc;
  int ano_atual;
  int idade;

  cout<<"Qual o seu nome? ";
  cin>>nome;
  cout<<"Qual o ano de seu nascimento? ";
  cin>>ano_nasc;
  cout<<"Qual o ano atual? ";
  cin>>ano_atual;

  idade = ano_atual - ano_nasc;

  cout<<"Ola "<<nome<<", sua idade e "<<idade<<" anos.";
}
