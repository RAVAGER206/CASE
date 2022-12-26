#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;

string itc_hello_str(string name){ // 1
return ("Hello, " + name);
} // end


long long itc_len(string str){ // 2
int s;
for (int i = 0; str[i] != '\0'; i++)
s = s + 1;
return s;
} // end


void itc_print_copy_str(string str, int a){ // 3
cout << str[a];
} // end


void itc_first_end_three(string str){ // 4
string l, m;
long long s, f, i;
s = itc_len(str);
if (s > 5){
for (i = 0; str[i] != str[3]; i++)
cout << str[i] << " ";
for (f = s - 3; str[f] != '\0'; f++)
cout << str[f] << " ";
}
else
for (i = 0; i < s; i++)
cout << str[0];
} // end


int itc_count_char_in_str(char ch, string str){ // 5
int a;
for (int i = 0; str[i] != '\0'; i++)
if (ch == str[i])
a = a + 1;
return a;
} // end
