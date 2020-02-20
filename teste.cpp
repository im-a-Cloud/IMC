#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

bool is_valid(string numero)
{
	int tamanho = numero.length();
	bool erro = true;
	int ponto = 0;
	for (int contador = 0; contador < tamanho; contador++)
	{
		if (isdigit(numero[contador]) || numero[contador] == '.')
		{
			if (numero[contador] == '.')
				{
					ponto ++;
					if (ponto > 1)
					{
						break;
						return false;
					}
				}	
		}
		else
		{
			break;
			return false;
		}
	}
	return true;
}

int main()
{
	string peso;
	string altura;
	float altura_num = 0;
	float peso_num = 0;
	float IMC = 0;
	bool entrada_valida_1 = false;
	bool entrada_valida_2 = false;
	cout << "Digite seu peso:" << endl;
	while(!entrada_valida_1)
	{
		cin >> peso;
		entrada_valida_1 = is_valid(peso);
		if(!entrada_valida_1){
			cout << "Entrada inválida, tente de novo" << endl;
		}	
	}
	peso_num = stof(peso);	

	cout << "Digite sua altura:" << endl;

	while(!entrada_valida_2 || altura_num == 0)
	{
		cin >> altura;
		entrada_valida_2 = is_valid(altura);
		altura_num = stof(altura);
		if(!entrada_valida_2 || altura_num == 0){
			cout << "Entrada inválida, tente de novo" << endl;
		}
	}
	altura_num = stof(altura);

	IMC = peso_num / (altura_num*altura_num);

	cout << "Seu IMC é: "<< fixed << setprecision(2) << IMC;

	if (IMC <= 18.5)
	{
		cout << " Abaixo do peso" << endl;
	}
	if (IMC >= 18.6 && IMC < 25)
	{
		cout << " Peso ideal" << endl;
	}
	if (IMC >= 25 && IMC < 30 )
	{
		cout << " Levemente acima do peso" << endl;
	}
	if (IMC >= 30 &&  IMC < 35)
	{
		cout << " Obesidade Grau 1" << endl;
	}
	if (IMC >= 35 && IMC < 40)
	{
		cout << " Obesidade Grau 2 (severa)" <<endl;
	}
	if (IMC >= 40)
	{
		cout << " Obesidade Grau 3(Mórbida)"<<endl;
	}
	return 0;
}