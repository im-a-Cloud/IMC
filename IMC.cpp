#include <iostream>
#include <string>

//using namespace std;

int verifica(std::string numero)
{
	int tamanho = numero.length();
	int erro = 0;
	int ponto = 0;
	for (int contador = 0; contador < tamanho; contador++)
	{
		std::cout << numero[contador] << std::endl;
		if (std::isdigit(numero[contador]) || numero[contador] == '.')
		{
			if (numero[contador] == '.')
				{
					ponto ++;
					std::cout << "mais um ponto" << std::endl;
					std::cout << ponto << std::endl;
					if (ponto > 1)
					{
						erro = 1;
						break;
						return erro;
					}
				}	
		}
		else
		{
			erro = 1;
			break;
			return erro;
		}
	}
	return 0;
}

int main()
{

	std::string peso;
	std::string altura;
	float IMC = 0;
	int aux_1 = 1;
	int aux_2 = 1;
	std::string::size_type sz;	
	   
	std::cout << "Digite seu peso:" << std::endl;
	std::cin >> peso;
	while(aux_1 == 1)
	{
		aux_1 = verifica(peso);
	}
	float peso_num = std::stof(peso,&sz);	
	std::cout << peso_num << std::endl;

	std::cout << "Digite sua altura:" << std::endl;

	std::cin >> altura;
	while(aux_2 == 0)
	{
		aux_2 = verifica(altura);
	}
	float altura_num = std::stof(altura,&sz);

	std::cout << altura_num << std::endl;
	IMC = peso_num / (altura_num*altura_num);
	std::cout << IMC << std::endl;

	return 0;
}