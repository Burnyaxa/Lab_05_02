/*
2. U chisli 222** dopisati zamist' zirochok dvi cifri tak, shhob dane chislo dililosja na 15
*/

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	for (int i = 22200; i < 22300; i += 10){
		for (int j = 0; j < 10; j++){
			if ((i + j) % 15 == 0){
				cout << i + j << endl;
			}
		}
	}
	system("pause");
	return 0;
}

