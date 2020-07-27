#include <stdio.h>
#include <stdlib.h> 
#include <iostream>
using namespace std;

#define MAXNODE 10

int tree[MAXNODE] = { 1,3,5,7,8,9,11,13,15,16 };

void printTree(int tree[MAXNODE]) {
	int i;
	cout << "Tree = [";
	for (i = 0; i < MAXNODE; i++) {
		cout << tree[i] ;
		if (i != MAXNODE - 1)
			cout << ", ";
	}
	cout << "]\n";
}

int BST(int key) {
	int fst = 0, last = MAXNODE - 1;
	while (fst <= last) {
		int mid = (fst + last) / 2;
		if (key == tree[mid]) { return 1; break; } //Ű ���� ã��
		else if (key < tree[mid]) { last = mid - 1; } //Ű ���� ��Ʈ���� ���� �� ���� �ڽ� ���� �̵�
		else if (key > tree[mid]) { fst = mid + 1; } //Ű ���� ��Ʈ���� Ŭ �� ������ �ڽ� ���� �̵�
	}
}

void menu() {

	cout << "1. ������ ��� 2. ������ Ž�� 3. ����\n�Է� : ";
}

int main() {

	int key;
	char choose;

	while (1) {
		menu();
		cin >> choose;

		switch (choose - '0') {
		case 1:
			printTree(tree);
			cout << "\n";
			break;

		case 2:
			cout << "ã�� �����͸� �Է��ϼ��� : ";
			cin >> key;
			if (BST(key) == 1)
				cout << key << " �����͸� ã�ҽ��ϴ�.\n";
			else
				cout << key << " �����͸� ã�� ���߽��ϴ�.\n";
			break;

		case 3:
			return 0;
		}
	}
	getchar();
}