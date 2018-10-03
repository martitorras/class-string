#ifndef _HEADER_H_
#define _HEADER_H_
#include <assert.h>

typedef unsigned int uint;

class string {
private:
	char* word = nullptr;
	uint length = 0u;

public:
	string() {};
	string(const char* my_word) {
		assert(my_word != nullptr);
		while (my_word[length] != '\0') ++length;

		word = new char[length];

		for (uint i = 0; i < length; ++i) word[i] = my_word[i];
		//while(*word++ = *my_word++);
	}

	/*string(const string& my_word) {
		while (my_word.length != '\0') ++length;

		word = new char[length];

		for (uint i = 0; i < length; ++i) word[i] = my_word.word[i];
	}*/

	/*~string() {
		if (word != nullptr) {
			delete[] word;
			word = nullptr;
			length = 0u;
		}
	}*/

	string operator= (const char* my_word) {
		while (my_word[length] != '\0') ++length;
		delete[] word;
		word = new char[length];

		for (uint i = 0; i < length; ++i) word[i] = my_word[i];
		return(*this);
	}

	bool operator== (const string& my_string) const{
		uint my_string_length = 0;
		while (my_string.length != this->length) return false;

		for (uint i = 0; i < this->length; ++i) {
			if (this->word[i] != my_string.word[i]) return false;
		}
		return true;
	}

	void print() {
		for (uint i = 0; i < length; ++i) {
			printf("%c", word[i]);
		}
		printf("\n");
	}
};

#endif