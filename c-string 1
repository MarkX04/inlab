// Student may implement another function as need
bool isValidChar(char c) {
if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
return true;
else return false;
}
char lowercase(char c) {
const int OFFSET = 32;
if(c >= 'A' && c <= 'Z')
return c + OFFSET;
else return c;
}
char uppercase(char c) {
const int OFFSET = 32;
if(c >= 'a' && c <= 'z')
return c - OFFSET;
else return c;
}
void process(const char *str, char *outstr) {
bool flag = true;
const char SPACE = ' ';
const char DELIM = '\0';
// Check the first character

while(*str) {
if(isValidChar(*str) || *str == SPACE && !flag) {
*outstr = flag ? uppercase(*str) : lowercase(*str);
outstr++;
}
if(*str == SPACE) {
flag = true;
}
else if(isValidChar(*str)) {
flag = false;
}

str++;
}

// Check the last character and add eliminator
if(*(outstr - 1) == SPACE) {
*(outstr - 1) = DELIM;
}
else {
*outstr = DELIM;
}
}
