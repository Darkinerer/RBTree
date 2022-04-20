#include"RBTree.h"
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Ukrainian");
	vector<int> nums{ 10,40,30,60,90,70,20,50,80,100 };
	RBTree<int> tree;
	for (auto num : nums)
		tree.insert(num);
	cout << "Прямий обхід" << endl;
	tree.preOrder();//прямий 
	cout<<endl <<"Серединний" << endl;
	tree.inOrder();//серединний
	cout<<endl  <<	"Зворотній" << endl;
	tree.postOrder();//зворотній
	cout << endl;
	cout << "Знайти вузол 30: \ n";
	cout << endl << tree.search(30)->key << endl;
	cout << "Видалити вузол з ключем 100 \ n"<< endl;
	tree.remove(100);
	tree.preOrder();
	cout << endl;
	cout << "\n Деталі дерева: \ n";
	tree.print();
	cin.get();
	return 0;
}

