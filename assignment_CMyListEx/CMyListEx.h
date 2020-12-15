#pragma once

#include "../assignment_CMyList/CMyList.h"

class test {
public:
	int tis;;
};

class CMyListEx : public CMyList {
public:
	virtual ~CMyListEx();
	void ShowMenu() const;
	void InsertFront();
	void InsertBack();
	void DeleteFront();
	void DeleteBack();
	void PrintReverse();

	void InsertFrontDNode(int);
	void DeleteFrontDNode();
};
