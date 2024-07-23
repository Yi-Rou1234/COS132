#include <iostream>
using namespace std;

int arrSort[4], sub1, sub2;

int recursiveSort(int arrSort[], int sub1, int sub2) 
{
	if (sub1<4)
	{
		if (sub2<4)
		{
			cout<< "itr1:"<<sub1 <<" itr2:"<< sub2<< " array:";
			cout<< arrSort[0]<< ","<< arrSort[1]<< ","<< arrSort[2]<< ","<< arrSort[3]<< endl;
			if (arrSort[sub1]>arrSort[sub2])
			{
				int hold = arrSort[sub1];
				arrSort[sub1]= arrSort[sub2];
				arrSort[sub2]= hold;
			}
			recursiveSort(arrSort, sub1, sub2+1);
		}
		else
		{
			sub2=0;
			recursiveSort(arrSort, sub1+1, sub2);
		}
	}
	return 0;
}

int main() {
	int arrSort[4];
	int num1, num2, num3 ,num4;
	cout<< "Enter 4 integer values:";
	std::cin>> num1>> num2>> num3>> num4;
	cout<<endl;

	arrSort[0]=num1;
	arrSort[1]=num2;
	arrSort[2]=num3;
	arrSort[3]=num4;

	sub1=0;
	sub2=0;

	recursiveSort(arrSort, sub1, sub2);

	return 0;
}