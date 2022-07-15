#include <cstddef> // size_t
#include<cstring> // strlen, strcpy

struct String {
	String(const char *str = "")
	{
		size = strlen(str);
		this->str = new char[size + 1];
		strcpy(this->str, str);
	}
	size_t size;
	char *str;
	String(size_t n, char c)
	{
		size = n;
		char* s = new char[n + 1];
		for (int i = 0; i < n; i++)
		{
			s[i] = c;
		}
		s[n] = '\0';
		this->str = s;
	}

	~String()
	{
		delete[] str;
	}

	void append(String &other)
	{
		size_t size = this->size;
		char* str1 = this->str;
		size_t new_size = other.size + this->size;
		char* new_str = new char[new_size + 1];
		
		strcpy(new_str, str1);
		strcat(new_str, other.str);
		new_str[new_size] = '\0';

		delete[] str1;
		this->size = new_size;
		this->str = new_str;
	}
};