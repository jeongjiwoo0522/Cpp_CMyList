#include <iostream>

#include "CMyListEx.h"
#include "../assignment_CMyList/CMyList.h"

using namespace std;

int	main()
{
	int num;
	int arr[3] = {1, 2, 3};
	CMyListEx* myListex = new CMyListEx(arr, 3);
	myListex->Print();
	while (1)
	{
		CMyListEx::ShowMenu();
		cin >> num;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(10000, '\n');
			cout << " 0, 1,	2, 3, 4, 5,	6 중	 숫자를 입력하세요~! : ";
			continue;
		}
		switch (num)
		{
		case 1: myListex->InsertFront();
			break;
		case 2: myListex->InsertBack();
			break;
		case 3: myListex->DeleteFront();
			break;
		case 4: myListex->DeleteBack();
			break;
		case 5: myListex->Print();
			break;
		case 6: myListex->PrintReverse();
			break;
		case 0: cout << "종료합니다!\n";
			delete	myListex;
			return	0;
		default:
			cout << " 0, 1,	2, 3, 4, 5,	6 중	 숫자를 입력하세요~!	: ";
			continue;
		}
	}

	return	0;
}