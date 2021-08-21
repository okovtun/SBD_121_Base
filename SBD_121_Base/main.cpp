#include<iostream>
using namespace std;

//VCS - Version Control System
//commit
//Mercury, Subversion .... Git/GitHub
//Git - система контроля версий
//GitHub - облачное хранилище 
//VCS Git: push, fetch, pull
//commit

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;	//Количество итераций
	cout << "Введите количество итераций: "; cin >> n;
	for (
		int i = 0; //Counter (Start)
		i < n;  //Condition (Stop)
		i++)	//Expression (Step)
	{
		cout << i << "\t";
	}
	cout << endl; true;
}