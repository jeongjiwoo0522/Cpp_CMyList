#pragma once

struct DNode {
	int	data;
	DNode* next;
	DNode* prev;
};

class CMyList {
public:
	CMyList();
	~CMyList();

	void ShowMenu() const;
	void Insert();
	void Print() const;
	
	void InsertDNode(int);
	void FreeDNodeList();

	DNode* GetHeader() const;
	DNode* GetTail() const;
private:
	DNode* headNode;
	DNode* tailNode;
	int m_nLength;
};