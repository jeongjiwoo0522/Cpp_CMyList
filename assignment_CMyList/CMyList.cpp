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
	puts("CMyList �޴�");
	puts("1 ����");
	puts("2 ���");
	puts("0 ����");
	puts("---------------------");
	cout << "�޴��� ������(���� �Է�): ";
}

void CMyList::Insert() {
	int inputData;
	cout << endl << "������ �����͸� �Է����ּ��� : ";
	cin >> inputData;
	this->InsertDNode(inputData);
	this->Print();
}

void CMyList::Print() const {
	cout << endl;
	if (this->m_nLength == 0) {
		cout << "����� �����Ͱ� �����ϴ�." << endl << endl;
		return;
	}

	DNode* curNode = this->headNode;

	cout << "CMyList ������ : [Head] ";
	for (int i = 0; i < this->m_nLength-1; i++) {
		cout << curNode->data << " - ";
		curNode = curNode->next;
	}
	cout << curNode->data << " [Tail]" << endl;
	cout << "�������� ���� : " << this->m_nLength << "��" << endl << endl;
}

void CMyList::InsertDNode(int data) {
	DNode* newNode = new DNode;
	newNode->data = data; 
	newNode->next = nullptr;
	if (this->headNode == nullptr) { // ����Ʈ�� �����Ͱ� ���� ��� 
		newNode->prev = nullptr;
		this->headNode = newNode;
	}
	else { // ����Ʈ�� �����Ͱ� 1�� �̻��� ��� tail�� ����  
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