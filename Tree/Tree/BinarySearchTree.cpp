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
		if (key == tree[mid]) { return 1; break; } //키 값을 찾음
		else if (key < tree[mid]) { last = mid - 1; } //키 값이 루트보다 작을 때 왼쪽 자식 노드로 이동
		else if (key > tree[mid]) { fst = mid + 1; } //키 값이 루트보다 클 때 오른쪽 자식 노드로 이동
	}
}

void menu() {

	cout << "1. 데이터 출력 2. 데이터 탐색 3. 종료\n입력 : ";
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
			cout << "찾을 데이터를 입력하세요 : ";
			cin >> key;
			if (BST(key) == 1)
				cout << key << " 데이터를 찾았습니다.\n";
			else
				cout << key << " 데이터를 찾지 못했습니다.\n";
			break;

		case 3:
			return 0;
		}
	}
	getchar();
}