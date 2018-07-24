#include "Lafore.h"

// ������� ���������� (������)

template <class Type>
void QuickSort(Type* Arr, int LEFT, int RIGHT);

template <class Type>
void ShowArray(Type* Arr, int size);

int main()
{
	setlocale(LC_ALL, "Rus");

  	srand(NULL);
  	const int SIZE = 10000;
  	int Array[SIZE];
   	for (int i=0; i<SIZE; i++)
  	{
   		Array[i] = rand() % 10000;
   	}
	
//  	const int SIZE = 10;
//  	int Array[] = { 3, 0, 1, 8, 7, 2, 5, 4, 9, 6 };
	
	cout << "����������������� ������: " << endl;
	//ShowArray(Array, SIZE);

	QuickSort(Array, 0, SIZE - 1);

	cout << endl;
	cout << "��������������� ������: " << endl;
	
	//ShowArray(Array, SIZE);

	// ��������
	for (int i=0; i<SIZE-1; i++)
	{
		for (int j=i+1; j<SIZE; j++)
		{
			if (Array[i] > Array[j])
			{
				cout << "������!";
				_getch();
			}
		}
	}
	cout << endl << "������ ���!";
	

	_getch();
	return 0;
}

template <class Type>
void QuickSort(Type* Arr, const int LEFT, const int RIGHT)
{
	int left = LEFT;
	int right = RIGHT;
	// ���� �������
	if (left == right) return;

	// �������� ������� �������
	int nIndexBearing = left;
	const int nBearingElem = Arr[left];
	// ��������� ������� ������� ��� ������
	Type temp = nBearingElem;

	// ���� ������� �� �����������
	while (left < right)
	{
		// ���������� � �������
		while ( nBearingElem <= Arr[right] && left < right ) right--;
		// ������
		if (nBearingElem > Arr[right])
		{
			Arr[nIndexBearing] = Arr[right];
			Arr[right] = temp;
			left++;
			nIndexBearing = right;
		}
		// ��������� � ������
		while ( nBearingElem >= Arr[left] && left < right ) left++;
		// ������
		if (nBearingElem < Arr[left])
		{
			Arr[nIndexBearing] = Arr[left];
			Arr[left] = temp;
			right--;
			nIndexBearing = left;
		}
	}
	// ���������� ��������� ���������� ��� ����� �����
	if (LEFT < nIndexBearing) QuickSort(Arr, LEFT, nIndexBearing - 1);
	
	// ���������� ��������� ���������� ��� ������ ����� 
	if (nIndexBearing < RIGHT) QuickSort(Arr, nIndexBearing + 1, RIGHT);
}

template <class Type>
void ShowArray(Type* Arr, int size)
{
	for (int i=0; i<size; i++)
	{
		cout << setw(4) << Arr[i];
	}
	cout << endl;
}
