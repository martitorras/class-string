#include <iostream>
#include "Header.h"

int main(void) {
	string s;
	string g("patata");
	string f(g);
	string w = "esternocleidomastoidal";

	g.print();
	f.print();
	s = "hello";
	s.print();
	s = "patata";
	if (s == f) printf("true\n");
	else printf("false\n");

	if (w == "esternocleidomastoidal") printf("true\n");
	else printf("false\n");

	if (w == "esternocleidomastoida") printf("true\n");
	else printf("false\n");

	system("pause");
	return 0;
}