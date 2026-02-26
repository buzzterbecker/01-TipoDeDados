// TiposDeDados.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Estrutura de Dados - Fatec (2026/1)" << endl;
	
	cout << "Tipos Numericos\n";
	cout << "===============\n";
	
	int i = 10;
	short s = 18;
	long l = 200000;
	float f = 1.97F;
	double  d = 4.73;
	cout << "Inteiros\n";
	cout << "  int i = " << i << " ocupa " << sizeof(i) << " bytes\n";
	cout << "short s = " << s << " ocupa " << sizeof(s) << " bytes\n";
	cout << "long  l = " << l << " ocupa " << sizeof(l) << " bytes\n\n";
	cout << "Ponto Flutuante (Reais)\n";
	cout << " float f = " << f << " ocupa " << sizeof(f) << " bytes\n";
	cout << "double d = " << d << " ocupa " << sizeof(d) << " bytes\n";

	cout << "\nTipo logico (boolean)\n";
	cout << "====================\n";
	bool flFacil = false;
	cout << "bool flFacil = " << flFacil << " ocupa " << sizeof(flFacil) << " bytes\n";

	cout << "\nTipo caracter\n";
	cout << "=============\n";
	char letra = 'Z';
	cout << "char letra = " << letra << " ocupa " << sizeof(letra) << " bytes\n";

	cout << "\nTipo string\n";
	cout << "===========\n";
	string texto = "Estrutura de Dados vai ser moleza!";
	cout << "string texto = \"" << texto << "\" ocupa " << sizeof(texto) << " bytes\n";

	cout << "\nPonteiros\n";
	cout << "===========\n";
	string* ponteiro = &texto;
	cout << "Para a variavel 'texto' do exemplo acima: string* ponteiro = &texto\nO endereco da memoria onde o valor foi armazenado (ponteiro)  = " << ponteiro << endl;
	cout << "O valor armazenado no local indicado pelo ponteiro e *ponteiro = \"" << *ponteiro << "\"";

	cout << endl << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");

	cout << "Entrada de Dados" << endl;
	cout << "================" << endl;
	string nome = "";
	int idade = 0;
	int dias = 0;
	int horas = 0;
	int minutos = 0;
	int segundos = 0;

	cout << "Digite seu nome: ";
	cin >> nome;
	cout << "Digite sua idade: ";
	cin >> idade;
	dias = idade * 365;
	horas = dias * 24;
	minutos = horas  * 60;
	segundos = minutos * 60;
	cout << "Sua idade em dias e: " << dias << endl;
	cout << "Sua idade em horas e: " << horas << endl;
	cout << "Sua idade em minutos e: " << minutos << endl;
	cout << "Sua idade em segundos e:" << segundos << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");

	//exercicio temperatura

	double temperatura, fahrenheit, kelvin = 0;
	cout << "Digite a temperatura: ";
	cin >> temperatura; 
	fahrenheit = temperatura * 1.8 + 32;
	kelvin = temperatura + 273.15;
	cout << "temperatura em fahrenheit: " << fahrenheit << endl;
	cout << "temperatura em kelvin:  " << kelvin << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");

	//exercicio segundos

	long segs, segrest = 0;
	double mins, hrs, ds = 0;

	cout << "Digite um numero em segundos";
	cin >> segs;

	mins = segs / 60;
	hrs = mins / 3600;
	ds = hrs / 86400;
	segrest = 60%segs;
	
	cout << "Os segundos em minutos e:" << mins << endl;
	cout << "Os segundos em horas e:" << hrs << endl;
	cout << "Os segundos em dias e:" << ds << endl;
	cout << "Os segundos restantes sao:" << segrest << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");




}

