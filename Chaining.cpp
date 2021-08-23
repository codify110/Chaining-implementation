#include <iostream>
using namespace std;
struct node
{
node *next;
int data;
};
node* create(int data)
{
node* newnode = new node;
newnode->next = NULL;
newnode->data = data;
return newnode;
}

void display(node* temp, int index)
{
cout << "Data of Index: " << index << endl;
while (temp != NULL) {
cout << temp->data << " ";
temp = temp->next;
}
cout << endl;
}
int hashfun(int y, int size)
{
int m = y % size;
return m;
}

node **head;

int main()
{
int size, size1, index;

int data;
cout << "Enter size of array:" << endl;
cin >> size;
head = new node *[size];
for (int i = 0; i < size; i++)
{
head[i] = nullptr;
}
cout << "How Much Data You Want to Enter\n";
cin >> size1;

for (int i = 0; i < size1; i++)
{
cout << "Enter Data to Store: ";
cin >> data;
index = hashfun(data, size);
if (head[index] == NULL)
{
head[index] = create(data);

}
else
{
node *temp = head[index];
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = create(data);
}

}

for (int i = 0; i < size; i++)
{
display(head[i], i);

}

system("pause");
}
