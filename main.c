#include <cstdlib>
#include <cstring>
#include <iostream>
#define Pi 3.141592
int i = 0;
int N = 0;
using namespace std;

class figure {
private:
    string name;
    int x;
    int y;
    int r;

public:
    void output()
    {
        cout<<(++N)<<'.'<<' ' + name<<'('<<x<<' '<<y<<','<<r<<')'<<endl;
    }
    void getName(string a)
    {
        name = a;
    }
    void getCoord(int a, int b, float c)
    {
        x = a;
        y = b;
        r = c;
    }
    figure()
    {
        getCoord(1, 2, 3);
    }
};

void skipspace(string a)
{
    while (a[i] == ' ')
        i++;
}

string partStr(string a)
{
    string strt;
    while (a[i] != '(') {
        i++;
    }
    strt.resize(i);
    copy(a.begin(), a.begin() + i, strt.begin());

    return strt;
}

int partStr2(string a)
{
	int p=strlen(a.c_str());
    string strt = a;
    strt.resize(p);
    strt = strt.substr(i);
    int k = atoi(strt.c_str());
    while (isdigit(a[i])) {
        i++;
    }
    while (isdigit(a[i]) == 0&&i<p) {
        i++;
    }
    return k;
}

int main()
{
    string str;
    getline(cin, str);
    string namef = partStr(str);

    if (str[i] == '(')
        i++;
    int a = partStr2(str);
    int b = partStr2(str);
    int c = partStr2(str);
    if (namef == "circle") {
        figure circle;
        circle.getName(namef);
        circle.getCoord(a,b,c );
        circle.output();
    }
}
