#include"Trie.h"
#include <iostream>
using namespace std;

// За основу дерева взят код из модуля.
// функция woodenAutoComplete будет заниматься выводом возможных вариантов слов 

void test_woodenAutoComplete()
{
	TrieNode* root = getNewNode();
	// тестовые строки и добавление в дерево
	insert(root, "ab");
	insert(root, "abde");
	insert(root, "ac");
	insert(root, "abcd");

	insert(root, "bcd");
	insert(root, "bd");
	insert(root, "b");

	//тест для поиска слов
	std::string input = "a";
	//string input = "ab";
	//string input = "abd";
	//string input = "ac";
	//string input = "abdecd";

	//string input = "b";

	woodenAutoComplete(root, input, "");
}


int main()
{
	//test_woodenAutoComplete();

	cout << " Hi! This is a simple program to complete words from the letters you enter." << endl;
	cout << " Use only a-z keys." << endl;
	cout << " Press q for exit." << endl;

	TrieNode* root = getNewNode();

	insert(root, "ab");
	insert(root, "abde");
	insert(root, "ac");
	insert(root, "abcd");

	insert(root, "bcd");
	insert(root, "bd");
	insert(root, "b");

	bool work = true;
	while (work)
	{
		cout << "Enter text: " << endl;

		string strIn;
		cin >> strIn;
		if (strIn == "q")
		{
			work = false;
			continue;
		}
		cout << " Word options:" << endl;
		woodenAutoComplete(root, strIn, "");
	}

	delete root;
	return 0;
}