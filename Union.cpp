#include <iostream>
using namespace std;
bool exists(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
      {
        if (arr[i] == num) 
        {
            return true;
        }
    }
    return false;
}

int main() {
    int set1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(set1) / sizeof(set1[0]);

    int set2[] = {3, 4, 5, 6};
    int size2 = sizeof(set2) / sizeof(set2[0]);

    int unionSet[size1 + size2];
    int unionSize = 0;

    for (int i = 0; i < size1; i++)
    {
        unionSet[unionSize] = set1[i];
        unionSize++;
    }

    for (int i = 0; i < size2; i++)
    {
        if (!exists(unionSet, unionSize, set2[i])) 
        {
            unionSet[unionSize] = set2[i];
            unionSize++;
        }
    }

    cout << "Union of the two sets: ";
    for (int i = 0; i < unionSize; i++) 
    {
        cout << unionSet[i] << " ";
    }

    cout << endl;
    return 0;
}
