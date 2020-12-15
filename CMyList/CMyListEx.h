#pragma once

#include "../CMyListEx/CMyList.h"

class CMyListEx: public CMyList {
public:
	CMyListEx();
	~CMyListEx();

	void Insert();
	void Print() const;

	void InsertDNode(int);
	void FreeDNodeList();

	void InsertFront();
	void InsertBack();
	void DeleteFront();
	void DeleteBack();
	void PrintReverse();
};
