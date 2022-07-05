#include <stdio.h>


void troca(int v[], int i, int j)
{
	int aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}

void permuta(int v[], int inf, int sup)
{
	if(inf == sup)
	{
		for(int i = 0; i <= sup; i++)
			printf("%d", v[i]);
		printf("\n");
	}
	else
	{
		for(int i = inf; i <= sup; i++)
		{
			troca(v, inf,i);
			permuta(v, inf + 1, sup);
			troca(v, inf, i); //backtracking
		}
	}
}

int main(int argc, char** argv)
{
	int v[] = {1,2,3,4,5};
	int tam_v = sizeof(v) / sizeof(int);
	
	
	permuta(v, 0 , tam_v -1 );

	
	return 0;

}