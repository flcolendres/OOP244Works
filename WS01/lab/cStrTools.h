/*
* Francis Lloyd Colendres
* flcolendres@myseneca.ca
* 145498200
* Jan. 17, 2022
* I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
*/

#ifndef NAMESPACE_CSTRTOOLS_H 
#define NAMESPACE_CSTRTOOLS_H
namespace sdds {

	char toLower(char ch);
	int strCmp(const char* s1, const char* s2);
	int strnCmp(const char* s1, const char* s2, int len);
	void strCpy(char* des, const char* src);
	int strLen(const char* str);
	const char* strStr(const char* str, const char* find);
	int isAlpha(char ch);
	int isSpace(char ch);
	void trim(char word[]);
	void toLowerCaseAndCopy(char des[], const char source[]);

}
#endif