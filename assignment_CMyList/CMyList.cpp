#include "CMyList.h"
#include <iostream>

using namespace std;

CMyList::CMyList() {
	this->headNode = nullptr;
	this->tailNode = nullptr;
	this->m_nLength = 0;
}

CMyList::~CMyList() {
	cout << "~CMyList()" << endl;
	this->FreeDNodeList();
}

void CMyList::ShowMenu(){
	puts("---------------------");
	puts("CMyList 메뉴");
	puts("1 삽입");
	puts("2 출력");
	puts("0 종료");
	puts("---------------------");
	cout << "메뉴를 고르세요(숫자 입력): ";
}

void CMyList::Insert() {
	int inputData;
	cout << endl << "삽입할 데이터를 입력해주세요 : ";
	cin >> inputData;
	this->InsertDNode(inputData);
	this->Print();
}

void CMyList::Print() const {
	cout << endl;
	if (this->m_nLength == 0) {
		cout << "출력할 데이터가 없습니다." << endl << endl;
		return;
	}

	DNode* curNode = this->headNode;

	cout << "CMyList 데이터 : [Head] ";
	for (int i = 0; i < this->m_nLength-1; i++) {
		cout << curNode->data << " - ";
		curNode = curNode->next;
	}
	cout << curNode->data << " [Tail]" << endl;
	cout << "데이터의 개수 : " << this->m_nLength << "개" << endl << endl;
}

void CMyList::InsertDNode(int data) {
	DNode* newNode = new DNode;
	newNode->data = data; 
	newNode->next = nullptr;
	if (this->headNode == nullptr) { // 리스트에 데이터가 없을 경우 
		newNode->prev = nullptr;
		this->headNode = newNode;
	}
	else { // 리스트에 데이터가 1개 이상인 경우 tail에 삽입  
		newNode->prev = this->tailNode;
		this->tailNode->next = newNode;
	}
	this->tailNode = newNode;
	this->m_nLength++;
}

void CMyList::FreeDNodeList() {
	DNode* curNode = this->headNode;
	DNode* delNode;
	for (int i = 0; i < this->GetLength(); i++) {
		delNode = curNode;
		curNode = curNode->next;
		delete delNode;
	}
}

int& CMyList::GetLength() {
	return this->m_nLength;
}