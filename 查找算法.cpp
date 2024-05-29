#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  // find()  查找与给定值匹配的第一个数字，返回对应的迭代器位置
  vector<int> v = {1, 2, 3, 4, 5, 6, 7};
  auto it = find(v.begin(), v.end(), 3);

  if (it != v.end())
  {
    cout << "发现3所在索引下标是: " << distance(v.begin(), it);
  }
  else
  {
    cout << "未找到该元素";
  }

  //-----------------------------------------------------------------------------------------------------------

  // find_if()   查找满足第一个满足条件的数字的位置
  vector<int> v = {1, 2, 3, 4, 5, 6, 7};
  auto it = find_if(v.begin(), v.end(), [](int x)
                    { return x > 3; });
  if (it != v.end())
  {
    cout << "第一个大于3的元素是:" << *it;
  }
  else
  {
    cout << "没有元素大于3";
  }
  return 0;

  //-----------------------------------------------------------------------------------------------------------

  // lower_bound  查找不小于给定值的第一个元素
  vector<int> v = {1, 2, 3, 4, 5, 6, 7};
  auto it = lower_bound(v.begin(), v.end(), 3);
  if (it != v.end())
  {
    cout << "不小于3的第一个元素是: " << *it;
  }
  else
  {
    cout << "3超出最大范围";
  }
  return 0;

  //-----------------------------------------------------------------------------------------------------------

  // upper_bound   查找第一个大于给定值的元素
  vector<int> v = {1, 2, 3, 4, 5, 6, 7};
  auto it = upper_bound(v.begin(), v.end(), 3);
  if (it != v.end())
  {
    cout << "比3大的第一个元素是: " << *it;
  }
  else
  {
    cout << "3已经是最大的元素了";
  }
  return 0;

  //-----------------------------------------------------------------------------------------------------------

  // binary_search   查找序列是否包含某个值   和find 的区别在于find返回迭代器，而这个函数返回的是bool
  vector<int> v = {1, 2, 3, 4, 5, 6, 7};
  bool found = std::binary_search(v.begin(), v.end(), 3);
  if (found)
  {
    cout << "3 在用例数组中";
  }
  else
  {
    cout << "3 不在用例数组中";
  }
  return 0;

  //-----------------------------------------------------------------------------------------------------------

  // equal_range    用于在已排序的序列中找到与给定值相等的所有元素的范围（使用的时候需要排序）
  vector<int> v = {3, 2, 2, 3, 3, 3, 4};
  sort(v.begin(), v.end());
  auto range = std::equal_range(v.begin(), v.end(), 3);
  if (range.first != range.second)
  {
    std::cout << "数字3一共存在 " << std::distance(range.first, range.second) << " 个";
  }
  else
  {
    std::cout << "找不到数字3";
  }
  return 0;

  //-----------------------------------------------------------------------------------------------------------

  // adjacent_find   查找第一个相邻相等的元素对
  vector<int> v = {3, 2, 3, 4, 4, 5, 5, 6, 7};
  auto it = std::adjacent_find(v.begin(), v.end());
  if (it != v.end())
  {
    std::cout << "发现相邻相等元素: " << *it << " and " << *(it + 1);
  }
  else
  {
    std::cout << "没有发现相邻相等元素";
  }
  return 0;

  //-----------------------------------------------------------------------------------------------------------

  // search 在一个序列中查找另一个序列的首次出现。
  std::vector<int> v = {1, 2, 3, 4, 5, 6};
  std::vector<int> pattern = {3, 4, 5};
  auto it = std::search(v.begin(), v.end(), pattern.begin(), pattern.end());
  if (it != v.end())
  {
    std::cout << "样板pattern从目标数组 " << std::distance(v.begin(), it) << "索引下标开始";
  }
  else
  {
    std::cout << "pattern未找到";
  }
  return 0;

  //-----------------------------------------------------------------------------------------------------------

  // search_n  查找容器中连续出现指定数量的特定值。

  std::vector<int> v = {1, 2, 3, 3, 3, 4, 5};
  auto it = std::search_n(v.begin(), v.end(), 3, 3);
  if (it != v.end())
  {
    std::cout << "从索引 " << std::distance(v.begin(), it) << "开始，发现了三次 3";
  }
  else
  {
    std::cout << "并没有发现连续出现三次3";
  }
  return 0;
}