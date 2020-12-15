#include "CMyListEx.h"
#include "../assignment_CMyList/CMyList.h"

#include <iostream>

using namespace std;

CMyListEx::CMyListEx() {

}

CMyListEx::CMyListEx(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		this->InsertDNode(arr[i]);
	}
}

CMyListEx::~CMyListEx() {
	cout << "~CMyListEx()" << endl;
}

void CMyListEx::ShowMenu() {
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
	if (this->headNode == nullptr) {
		this->Print();
	}
	else {
		this->DeleteBackDNode();
		this->Print();
	}
}

void CMyListEx::PrintReverse() {
	cout << endl;
	int& m_nLength = this->GetLength();
	if (m_nLength == 0) {
		cout << "����� �����Ͱ� �����ϴ�." << endl << endl;
		return;
	}

	DNode* curNode = this->tailNode;

	cout << "CMyList ������ : [Head] ";
	for (int i = m_nLength; i > 1; i--) {
		cout << curNode->data << " - ";
		curNode = curNode->prev;
	}
	cout << curNode->data << " [Tail]" << endl;
	cout << "�������� ���� : " << m_nLength << "��" << endl << endl;
}

CMyListEx& CMyListEx::operator+=(const int& data) {
	this->InsertDNode(data);
	return *this;
}