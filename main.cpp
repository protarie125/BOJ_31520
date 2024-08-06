#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  ll n;
  cin >> n;

  auto now = ll{1};
  auto b = ll{10};
  auto target = ll{0};
  while (target < n) {
    target *= b;
    target += now;

    ++now;
    if (b <= now) {
      b *= 10;
    }
  }

  if (n == target) {
    cout << now - 1;
  } else {
    cout << -1;
  }

  return 0;
}