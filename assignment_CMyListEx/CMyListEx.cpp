#include "CMyListEx.h"
#include "../assignment_CMyList/CMyList.h"

#include <iostream>

using namespace std;

CMyListEx::~CMyListEx() {
	cout << "~CMyListEx()" << endl;
}

void CMyListEx::ShowMenu() const {
	puts("---------------------");
	puts("CMyListEx �޴�");
	puts("1 ���� Head");
	puts("2 ���� Tail");
	puts("3 ���� Head");
	puts("4 ���� Tail");
	puts("5 ��� Head -> Tail");
	puts("6 ��� Tail -> Head");
	puts("0 ����");
	puts("---------------------");
	cout << "�޴��� ������(���� �Է�): ";
} 

void CMyListEx::InsertFront() {
	int inputData;
	cout << endl << "������ �����͸� �Է����ּ��� : ";
	cin >> inputData;
	this->InsertFrontDNode(inputData);
	this->Print();
}

void CMyListEx::InsertBack() {
	CMyList::Insert();
}

void CMyListEx::DeleteFront() {
	if (this->headNode == nullptr) {
		this->Print();
	}
	else {
		this->DeleteFrontDNode();
		this->Print();
	}
}

void CMyListEx::DeleteBack() {

}

void CMyListEx::PrintReverse() {

}
