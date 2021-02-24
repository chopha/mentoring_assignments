#include <iostream>
class Node {
private:
	
public:
	int data;
	Node* next;
};
class Link {
private:
	int size;
public:
	Node* head;
	void InitNode();
	void InitSize();
	void InsertData();
	void DeleteData();
	void UI();
	void CleanMemory();
	const void GetData();
	const void ShowData();
	const void ShowSize();
	

};
void Link::InitNode()
{
	head = new Node;
	head->data = 0;
	head->next = NULL;
}
void Link::InitSize()
{
	size = 0;
}
void Link::InsertData()
{
	int data;
	std::cout << "넣고싶은 데이터를 입력하세요: ";
	std::cin >> data;
	if (size == 0)
	{
		head->data = data;
	}
	else
	{
		Node* cur_node = head;
		while (cur_node->next != NULL)
		{
			cur_node = cur_node->next;
		}
		Node* tempNode = new Node;
		tempNode->data = data;
		tempNode->next = NULL;
		cur_node->next = tempNode;
	}
	size++;
	std::cout << "입력이 완료되었습니다.\n\n" << std::endl;
	
}
void Link::DeleteData()
{
	int dataIndex;
	std::cout << "삭제하고 싶은 데이터 인덱스를 입력하세요: ";
	std::cin >> dataIndex;;
	
	if (dataIndex == 0)
	{
		Node* tempNode = head;
		head = tempNode->next;
		delete tempNode;	
	}
	else
	{
		Node* tempNode = head;
		for (int i = 1; i < dataIndex; i++)
		{
			tempNode = tempNode->next;
		}
		Node* DeleteNode = tempNode->next;
		tempNode->next = DeleteNode->next;
		delete DeleteNode;
	}
	size--;
	std::cout << "삭제가 완료되었습니다.\n\n\n";
	
}
const void Link::GetData()
{
	int dataIndex;
	std::cout << "찾고 싶은 데이터의 인덱스를 입력하세요: ";
	std::cin >> dataIndex;
	Node* cur_node = head;
	for (int i = 0; i < dataIndex; i++)
	{
		cur_node = cur_node->next;
	}
	std::cout << "인덱스" << dataIndex << "의 값: " << cur_node->data << std::endl;
	std::cout << "\n 탐색이 완료되었습니다.\n\n\n";
	
}
const void Link::ShowData()
{
	std::cout << std::endl;
	Node* cur_node = head;
	for (int i = 0; i < size; i++)
	{
		std::cout << cur_node->data << "\t";
		cur_node = cur_node->next;
	}
	std::cout << "\n출력이 완료 되었습니다.\n\n\n" << std::endl;
	
}
const void Link::ShowSize()
{
	std::cout << "Linked List 사이즈: " << size << std::endl;
	std::cout << "\n출력이 완료되었습니다.\n\n\n";
	
}
void Link::UI()
{
	int number;
	while (1)
	{
		std::cout << "======링크드 리스트 프로그램======\n";
		std::cout << "\n1.데이터 입력\n";
		std::cout << "\n2.데이터 삭제\n";
		std::cout << "\n3.데이터 값 찾기\n";
		std::cout << "\n4.모든 데이터 출력\n";
		std::cout << "\n5. 데이터 크기 확인\n";
		std::cout << "\n6. 종료\n";
		std::cout << "\n=============================\n";
		std::cin >> number;
		switch (number)
		{
			case 1:
				InsertData();
				continue;
			case 2:
				DeleteData();
				continue;
			case 3:
				GetData();
				continue;
			case 4:
				ShowData();
				continue;
			case 5:
				ShowSize();
				continue;
			default:
				std::cout << "프로그램을 종료합니다.";
				CleanMemory();
				exit(1);
		}


	}
}
void Link::CleanMemory()
{
	
		Node* tempNode = head->next;
		while (tempNode!= NULL)
		{
			Node* curNode = tempNode->next;
			delete tempNode;
			tempNode = curNode;
		}
		delete head;
}

int main()
{
	Link link;
	link.InitNode();
	link.InitSize();
	link.UI();
}
