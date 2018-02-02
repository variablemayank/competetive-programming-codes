#include <iostream>
#include<bits/stdc++.h>
#include <ctime> 
using namespace std;

int show(int random)
{
	cout << random << endl;
	return 0;
}
int genRandom()
{
int i = 1;
int random[20];
srand((unsigned)time(NULL));
for (int i = 1; i < 20; i++)
{
random[i] = 1+ rand() % 20;
show (random[i]);
}
return 0;
}

int main()
{
genRandom();
return 0;
}
