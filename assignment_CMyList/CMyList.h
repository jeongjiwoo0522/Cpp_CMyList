#pragma once

struct DNode {
	int	data;
	DNode* next;
	DNode* prev;
};

class CMyList {
public:
	CMyList();
	virtual ~CMyList();

	void ShowMenu() const;
	void Insert();
	void Print() const;
	
	void InsertDNode(int);
	void FreeDNodeList();

	int& GetLength();

protected:
	DNode* headNode;
	DNode* tailNode;

private:
	int m_nLength;
};