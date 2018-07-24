// SPO_Lab4
// Novikov_I
// Бинарные деревья

#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct Node
{
	char *name;
	Node *left;
	Node *right;
};

Node *root = 0;

bool insert(char* insname);
Node * lookup(char* lookname);
void print_tree(Node *p, int l);

//---------------------------------------------------------------------
void main()
{
	cout << "Construction of binary tree:";
	do
	{
		char *temp = new char[30];
		cout << endl << "Input name (end - to exit): " << endl;
		gets(temp);
		if(!strcmp(temp, "end")) break;
		cout << "Adding " << temp << " to the binary tree...";
		if (insert(temp)) cout << " done!";
		else cout << " error! Already exists!";
	} while(1);
	cout << endl << "Binary tree has been constructed!" << endl;

	print_tree(root, 0);
	getch();

	Node *result;
	cout << endl;
	do
	{
		char *temp = new char[30];
		cout << endl <<"Input name you want to find (end - to exit): ";
		gets(temp);
		if(!strcmp(temp, "end")) break;
		cout << "Searching " << temp << " in the binary tree...";
		result = lookup(temp);
		if (result->name == "error") cout << " error of searching!" << endl;
		else
		{
			cout << "success!" << endl;
			cout << "Result: " << result->name;
		}
	} while(1);
	
	cout << endl << endl << endl << "End of work." << endl << "Press any key to exit...";
	getch();
}
//---------------------------------------------------------------------
// Вставка узла с заданным именем
bool insert(char* insname)
{
	Node *curnode = new Node;
	if (!root)				// дерево пустое
	{
		root = new Node;
		root->name = insname;
		root->left = 0;
		root->right = 0;
		return true;		// создали корень дерева 
	}
	else
		curnode = root;
step2:
		
		int i = strcmp(insname, curnode->name);
		if (i < 0)
		{
			if (curnode->left)
			{
				curnode = curnode->left;
				goto step2;
			}
			else
			{
				Node *insnode = new Node;
				insnode->name = insname;
				insnode->left = 0;
				insnode->right = 0;
				curnode->left = insnode;
				return true;
			}
		}
		else if (!i) return false;	// Ошибка! Такое имя уже есть!
		else	// >0
		{
			if (curnode->right)
			{
				curnode = curnode->right;
				goto step2;
			}
			else
			{
				Node *insnode = new Node;
				insnode->name = insname;
				insnode->left = 0;
				insnode->right = 0;
				curnode->right = insnode;
				return true;
			}
		}
}

//---------------------------------------------------------------------
// Поиск узла с заданным именем
Node * lookup(char* lookname)
{	
	Node *errorNode = new Node;		// создание узла - ошибки
	errorNode->name = "error";
	errorNode->left = 0;
	errorNode->right = 0;

	Node *curnode = new Node;
	if (!root)
	{
		return errorNode;
	}	
	curnode = root;
step2:
	int i = strcmp(lookname, curnode->name);
	if (!i) return curnode;
	else if (i < 0)
	{
		if (curnode->left)
		{
			curnode = curnode->left;
			goto step2;
		}
		else return errorNode;
	}
	else // i > 0
	{
		if (curnode->right)
		{
			curnode = curnode->right;
			goto step2;
		}
		else return errorNode;
	}
}
//---------------------------------------------------------------------
// Обход дерева
void print_tree(Node *root, int l) // l - уровень (level)
{
	if (root)
	{
		print_tree(root->right, l+1); // вывод правого поддерева
		for (int i=0; i<l; i++) cout << "   ";
		cout << root->name << endl;     // вывод корня поддерева
		print_tree(root->left, l+1); // вывод левого поддерева
	}

}