#include "CMyListEx.h"
#include "../assignment_CMyList/CMyList.h"

#include <iostream>

using namespace std;

void CMyListEx::InsertFrontDNode(int data) {
	DNode* newNode = new DNode;
	newNode->data = data;
	newNode->prev = nullptr;
	newNode->next = this->headNode;
	if (this->headNode == nullptr) {
		this->tailNode = newNode;
	}
	else {
		this->headNode->prev = newNode;
	}
	this->headNode = newNode;
	this->GetLength()++;
}

void CMyListEx::DeleteFrontDNode() {
	DNode* delNode = this->headNode;
	if (this->headNode->next != nullptr) {	
		this->headNode->next->prev = nullptr;
	}
	this->headNode = this->headNode->next;
	delete delNode;
	this->GetLength()--;
}