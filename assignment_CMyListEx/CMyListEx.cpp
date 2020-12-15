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
	puts("CMyListEx 메뉴");
	puts("1 삽입 Head");
	puts("2 삽입 Tail");
	puts("3 삭제 Head");
	puts("4 삭제 Tail");
	puts("5 출력 Head -> Tail");
	puts("6 출력 Tail -> Head");
	puts("0 종료");
	puts("---------------------");
	cout << "메뉴를 고르세요(숫자 입력): ";
} 

void CMyListEx::InsertFront() {
	int inputData;
	cout << endl << "삽입할 데이터를 입력해주세요 : ";
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
		cout << "출력할 데이터가 없습니다." << endl << endl;
		return;
	}

	DNode* curNode = this->tailNode;

	cout << "CMyList 데이터 : [Head] ";
	for (int i = m_nLength; i > 1; i--) {
		cout << curNode->data << " - ";
		curNode = curNode->prev;
	}
	cout << curNode->data << " [Tail]" << endl;
	cout << "데이터의 개수 : " << m_nLength << "개" << endl << endl;
}

CMyListEx& CMyListEx::operator+=(const int& data) {
	this->InsertDNode(data);
	return *this;
}