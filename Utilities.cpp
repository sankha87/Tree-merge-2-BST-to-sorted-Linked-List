#include "Utilities.h"

int* merge(int arr1[], int arr2[], int m, int n) // A utility unction to merge two sorted arrays into one
{
	int* mergedArr = new int[m+n];
	int i = 0, j = 0, k = 0;

	// Traverse through both arrays
	while (i < m && j < n)
	{
		if (arr1[i] < arr2[j]) // Pick the smaler element and put it in mergedArr
		{
			mergedArr[k] = arr1[i];
			i++;
		}
		else
		{
			mergedArr[k] = arr2[j];
			j++;
		}
		k++;
	}

	while (i < m) // If there are more elements in first array
	{
		mergedArr[k] = arr1[i];
		i++; k++;
	}

	while (j < n) // If there are more elements in second array
	{
		mergedArr[k] = arr2[j];
		j++; k++;
	}

	return mergedArr;
}


LinkedList* MergerLinkedList(LinkedList* ll_one, LinkedList* ll_two)
{
	LinkedList* tempList = new LinkedList();
	LLNode* head1 = ll_one->getHead();
	LLNode* head2 = ll_two->getHead();
	if ((ll_one->getNodeCount() == 0) && (ll_two->getNodeCount() == 0))
		return tempList;
	else
	{
		if (ll_one->getNodeCount() == 0)
			return ll_two;
		if (ll_two->getNodeCount() == 0)
			return ll_one;
		else
		{

			while (head1 != NULL && head2 != NULL)
			{
				if (head1->getData() < head2->getData())
				{
					tempList->insert(head1->getData());
					head1 = head1->getLink();
				}
				else
				{
					tempList->insert(head2->getData());
					head2 = head2->getLink();
				}
			}

			while (head1 != NULL)
			{
				tempList->insert(head1->getData());
				head1 = head1->getLink();
			}
			while (head2 != NULL)
			{
				tempList->insert(head2->getData());
				head2 = head2->getLink();
			}

		}
	}
	return tempList;
}
