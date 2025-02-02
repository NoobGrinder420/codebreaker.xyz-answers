#include <bits/stdc++.h>
// #include "minstack.h"
using namespace std;

vector<int> vec;
vector<int> premin = {INT_MAX}; // prefix min array

void push(int X) {
	vec.push_back(X);
	premin.push_back(min(premin.back(), X));
}

void pop() {
	vec.pop_back();
	premin.pop_back();
}

int top() {
	return vec.back();
}

int getMin() {
	return premin[premin.size()-1];
}
