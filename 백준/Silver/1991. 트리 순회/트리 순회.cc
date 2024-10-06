#include <iostream>
#include <vector>
#include <cstring>
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define MAX 26
using namespace std;

pair<char, char> node[MAX];
int n;

void preorder(char here) {
	if (here == '.') return;
	cout << here;
	preorder(node[here - 'A'].first);
	preorder(node[here - 'A'].second);
}

void inorder(char here) {
	if (here == '.') return;
	inorder(node[here - 'A'].first);
	cout << here;
	inorder(node[here - 'A'].second);
}

void postorder(char here) {
	if (here == '.') return;
	postorder(node[here - 'A'].first);
	postorder(node[here - 'A'].second);
	cout << here;
}

int main() {
	cin >> n;
	while (n--) {
		char here, left, right;
		cin >> here >> left >> right;
		node[here - 'A'].first = left;
		node[here - 'A'].second = right;
	}
	preorder('A');
	cout << endl;
	inorder('A');
	cout << endl;
	postorder('A');
}