#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <sstream>
#include <set>
#include <iomanip>
#include <list>
#include <stack>
#include <queue>
#include <bitset>

#include <cstdio>
#include <cmath>
#include <climits>
#include <cstring>
#include <cctype>

using namespace std;

typedef vector<char> vc;
struct vertex {
	bool is_visited;
	vc adj_list;
	vertex() : is_visited(false) {}
};

typedef map <char, vertex> graph;

class TestCase {
public:
	TestCase() {
		input();
		calc();
		output();
	}
private:
	void input() {
		char buf[512];
		buf[0]='\0';
		e = 0;
		while (scanf("%s",buf) && buf[0]!='*') {
			++e;
			char v1 = buf[1]-'A';
			char v2 = buf[3]-'A';
			ve[v1]=true;
			ve[v2]=true;
		}
		scanf("%s",buf);
		int i=0;
		v = 0;
		while (buf[i]!='\0') {
			char c = buf[i];
			if (isalpha(c)) {
				++v;
			}
			++i;
		}
	}

	void calc() {
		acorns = v-ve.count();
		trees = v-e-acorns;
	}

	void output() {
		cout<<"There are "<<trees<<" tree(s) and "<<acorns<<" acorn(s)."<<endl;
	}
private:
	int e;
	int v;
	bitset<26> ve;
	int acorns;
	int trees;
};

int main(int argc, char* argv[])
{
	int T;
	cin>>T;
	while (T--) {
		TestCase();
	}
	return 0;
}