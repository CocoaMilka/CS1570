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

	Node* removeDuplicates (Node* list)
	{
		Node* dummy = new Node;
		Node* ans = dummy;

		Node* current = list;

		map<int, int> numEle;

		while (list != nullptr)
		{
	    	if (!numEle.count(list->val))
	    	{
	    		numEle.emplace(list->val, 1);
	    	} 
	    	else
	    	{
	    		numEle.at(list->val)++;
	    	}

	    	list = list->next;
		}

		for (auto it : numEle)
		{
			//cout << it.first << ":" << it.second << " ";
			if (it.second == 1)
			{
				ans->next = new Node(it.first);
				ans = ans->next;
			}
		}

		return dummy->next;
	}
};

int main ()
{
	Solution solu;

	Node* list1 = new Node(1);
	list1->next = new Node(2);
	list1->next->next = new Node(3);
	list1->next->next->next = new Node(3);
	list1->next->next->next->next = new Node(4);
	list1->next->next->next->next->next = new Node(4);
	list1->next->next->next->next->next->next = new Node(5);

	solu.printList(solu.removeDuplicates(list1));
}