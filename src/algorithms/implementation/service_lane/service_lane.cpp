// service_lane.cpp
// Copyright (C) 2015 Sean Kirmani <sean@kirmani.io>
//
// Distributed under terms of the MIT license.

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int LargestVehicle(vector<int> widths, int start, int end) {
  int min = widths[start];
  for (int i = start + 1; i <= end; i++) {
    int current_width = widths[i];
    min = (min > current_width) ? current_width : min;
  }
  return min;
}

int main() {
  int n;
  int t;
  cin >> n >> t;
  vector<int> width(n);
  for (int width_i = 0; width_i < n; width_i++) {
    cin >> width[width_i];
  }
  for (int a0 = 0; a0 < t; a0++) {
    int i;
    int j;
    cin >> i >> j;
    cout << LargestVehicle(width, i, j) << endl;
  }
  return 0;
}
