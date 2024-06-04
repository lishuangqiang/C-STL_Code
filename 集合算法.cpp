#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main()
{
  // set_union 计算两个集合的并集
  set<int> setA = {1, 2, 3, 4, 5};
  set<int> setB = {1, 2, 3};
  set<int> result;

  set_union(setA.begin(), setA.end(), setB.begin(), setB.end(), inserter(result, result.begin()));

  for (auto num : result)
  {
    cout << num;
  }

  // set_intersection  计算两个集合的交集
  set<int> setA = {1, 2, 3, 4, 5};
  set<int> setB = {1, 2, 3};
  set<int> result;
  set_intersection(setA.begin(), setA.end(), setB.begin(), setB.end(), inserter(result, result.begin()));

  for (auto num : result)
  {
    cout << num;
  }

  // set_difference  计算两个集合的差集  (第一个集合有但是第二个集合没有的元素)
  set<int> setA = {1, 2, 3, 4, 5};
  set<int> setB = {1, 2, 3};
  set<int> result;
  set_difference(setA.begin(), setA.end(), setB.begin(), setB.end(), inserter(result, result.begin()));

  for (auto num : result)
  {
    cout << num;
  }
  // set_difference  计算两个集合的对称差集（一个集合有但是另外一个结合没有的元素）
  set<int> setA = {1, 2, 3, 4, 5};
  set<int> setB = {1, 2, 3};
  set<int> result;
  set_symmetric_difference(setA.begin(), setA.end(), setB.begin(), setB.end(), inserter(result, result.begin()));

  for (auto num : result)
  {
    cout << num;
  }

  // includes  判断一个集合是否是另一个集合的子集
  set<int> setA = {1, 2, 3, 4, 5};
  set<int> setB = {1, 2, 3};

  bool result = includes(setA.begin(), setA.end(), setB.begin(), setB.end());

  cout << "集合setA是集合setB的子集吗" << "  " << result;

  // merge 合并两个集合集合，结果依然是有序的
  set<int> setA = {1, 2, 3, 4, 5};
  set<int> setB = {1, 2, 3};
  vector<int> result;
  merge(setA.begin(), setA.end(), setB.begin(), setB.end(), back_inserter(result));
  for (auto num : result)
  {
    cout << num;
  }

  // unique 移除集合中的连续重复元素
  vector<int> v1 = {1, 2, 3, 4, 4, 4, 5};
  auto last = unique(v1.begin(), v1.end());
  v1.erase(last, v1.end());
  for (auto num : v1)
  {
    cout << num;
  }
}
