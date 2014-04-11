//BookIndex.cpp

#include <iostream>
#include <cstring>
#include <string.h>
#include "BookIndex.h"
using std::cout;
using std::cin;
using std::endl;

BookIndex::BookIndex(const char *name, const char *author, const int year) {
	title = new char[100];
	author = new char[100];
    strncpy(title, name, strlen(name)+1);
    strncpy(authorName, author, strlen(author)+1);
    copyright=year;
}

BookIndex::~BookIndex() {
    delete []title;
    delete []author;
}
char* BookIndex::getTitle() const {
    return title;
};

char * BookIndex::getAuthorName() const {
    return authorName;
};

void BookIndex::setCopyright(const int year) {
    copyright = year;
}

int BookIndex::getCopyright() const{
    return copyright;
}    
