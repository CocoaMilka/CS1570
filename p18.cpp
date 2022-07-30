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
	void printList (Node* list)
	{
		while (list != nullptr)
		{
			cout << list->val << " ";

			list = list->next;
		}
	}

	Node* mergeLists (Node* list1, Node* list2)
	{
		Node* dummy = new Node;
		Node* ans = dummy;

		if (list1 == nullptr)
		{
			return list2;
		}

		if (list2 == nullptr)
		{
			return list1;
		}

		while (list1 != nullptr && list2 != nullptr)
		{
			if (list1->val >= list2->val)
			{
				ans->next = list2;
				list2 = list2->next;
			}
			else
			{
				ans->next = list1;
				list1 = list1->next;
			}

			ans = ans->next;
		}

	    if (list1 != nullptr) 
	    {
	        ans->next = list1;
	    } 
	    else
	    {
	        ans->next = list2;
	    }

		return dummy->next;
	}
};

int main ()
{
	Solution solu;

	Node* list1 = new Node(1);
	list1->next = new Node(2);
	list1->next->next = new Node(4);

	Node* list2 = new Node(1);
	list2->next = new Node(3);
	list2->next->next = new Node(4);

	solu.printList(solu.mergeLists(list1, list2));
}