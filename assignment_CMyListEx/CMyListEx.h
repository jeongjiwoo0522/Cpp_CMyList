#pragma once

#include "../assignment_CMyList/CMyList.h"

class CMyListEx : public CMyList {
public:
	CMyListEx();
	CMyListEx(int arr[], int size);
	virtual ~CMyListEx();
	static void ShowMenu();
	void InsertFront();
	void InsertBack();
	void DeleteFront();
	void DeleteBack();
	void PrintReverse();

	void InsertFrontDNode(int);
	void DeleteFrontDNode();
	void DeleteBackDNode();

	CMyListEx& operator+=(const int&);
};
