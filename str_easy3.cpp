#include<iostream>
using namespace std;


int main (){
long a, b, nch, l, ad, i, nstr, obc;
cin >> a >> b;
nch = 0;
l = 1;
obc = 0;
ad = itc_bin_num(a);
if (a >= 0){
for (i = 0; i < b; i++)
{                                                  //положительное
nch = nch * 10 + ad % 10;
ad = ad / 10;
if (nch == 0)
l = l * 10;
}
nstr = perevorot(nch)*l;
for (i = 0; i < b - itc_len_num(nstr); i++)
cout << "0";
cout <<  nstr;
}
else{                                                    //начало создания прямого кода
b--;
for (i = 0; i < b; i++){
nch = nch * 10 + ad % 10;
ad = ad / 10;
if (nch == 0)
l = l * 10;
}
nstr = perevorot(nch)*l;
cout << "pryamoy code: " << 1;
for (i = 0; i < b - itc_len_num(nstr); i++)
cout << "0";
cout <<  nstr << endl << "reverse code: 1";
l = 0;                                          //конец создания прямого кода, начало обратного
for (i = 0; i < itc_len_num(nstr); i++){
if (nstr % 10 == 0)
obc = obc * 10 + 1;
else{
obc = obc * 10;
if (obc == 0)
l = l * 10;
}
nstr = nstr / 10;
}
obc = perevorot(obc*l);
for (i = 0; i < b - itc_len_num(obc); i++)
cout << "1";
cout <<  obc;
}
return 0;
}
