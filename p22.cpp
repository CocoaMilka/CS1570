#include <iostream>
#include <map>

using namespace std;

class Node
{
public:
	int val;
	Node* next;

	Node (int _val = 0, Node* next = nullptr)
	{
		 val = _val;
		 this->next = next;
	}
};

class Solution
{
public:
	Node* reverse_list(Node* list_head)
	{
		Node* temp = nullptr;
		Node* temp2;
		Node* head = list_head;

		while (head != nullptr)
		{
			temp2 = head->next;
			head->next = temp;
			temp = head;
			head = temp2;
		}

		head = temp;

		return head;
	}

	bool palindrome(Node* list)
	{
		//find halfway
		Node* slow = list;
		Node* fast = list;
		Node* current = list;

		while (fast != nullptr && fast->next != nullptr)
		{
			slow = slow->next;
			fast = fast->next->next;
		}

		Node* halfway = reverse_list(slow);

		while (current != slow->next && halfway != nullptr)
		{
			if (current->val != halfway->val)
			{
				return false;
			}
			current = current->next;
			halfway = halfway->next;
		}

		return true;
	}
};

int main ()
{
	Solution solu;

	Node* list1 = new Node(1);
	list1->next = new Node(2);
	list1->next->next = new Node(2);
	list1->next->next->next = new Node(1);

	cout << solu.palindrome(list1);
}