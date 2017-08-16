#include <iostream>
#include <math.h>

int fact(int m)
{ 
	int acum = 1;
	for (int i =1; i <= m; i++)
	{
		acum=acum*i;
	}
		return acum;
}

///////////////////////////////////////	

double exponencial(double x,int N)
{
	double acumulado=0,a;
	for (int i =1; i <= N; i++)
	{
	
		a =  (-1)*x*
		acumulado = acumulado +a ;
	}
	return acumulado;
	
}

/////////////////////////////////////


int main(void)
{
	double x,a=0;
	std::cout<<"Ingrese el punto "<< std::endl;
	std::cin>>x;
	int N ;
	std::cin>>N;
	for (int i =0; i<= N; i++)
	
	{
		a = a + exponencial(x,i);
		std::cout<<i<<" \t "<<a<<std::endl;
	}
	return 0;
}
