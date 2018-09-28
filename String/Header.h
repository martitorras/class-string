#ifndef _HEADER_H_
#define _HEADER_H_

typedef unsigned int uint;

class string {
public:
	char* word;
	uint length = 0;

	string() {};
	string(const char* _word) {
		while (_word[length] != '\0') ++length;

		word = new char[length];

		for (uint i = 0; i < length; ++i) word[i] = _word[i];
	}

	~string() {};

	string operator= (const char* my_word) {
		while (my_word[length] != '\0') ++length;

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