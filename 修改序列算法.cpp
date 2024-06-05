#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
int main()
{
  // copy 复制一个集合到另一个集合中
  std::vector<int> source = {1, 2, 3};
  std::vector<int> destination(source.size());
  std::copy(source.begin(), source.end(), destination.begin());
  for (auto a : destination)
  {
    cout << a << " ";
  }

  // copy_if  复制一个集合中符合条件的数据到另一个集合中
  std::vector<int> source = {1, 2, 3, 4};
  std::vector<int> destination;
  std::copy_if(source.begin(), source.end(), std::back_inserter(destination), [](int x)
               { return x % 2 == 0; });
  for (auto a : destination)
  {
    cout << a << " ";
  }

  // copy_n  复制指定个数的数据到另一个集合中
  std::vector<int> source = {1, 2, 3, 4};
  std::vector<int> destination(2); // 只需要复制两个元素的空间
  std::copy_n(source.begin(), 2, destination.begin());
  for (auto a : destination)
  {
    cout << a << " ";
  }

  // move  移动序列中的元素到另一个序列，避免复制，原序列将处于有效但未定义的状态。
  std::vector<int> source = {1, 2, 3};
  std::vector<int> destination;
  std::move(source.begin(), source.end(), std::back_inserter(destination));
  for (auto a : destination)
  {
    cout << a << " ";
  }

  // swap 交换两个集合中的元素
  int a = 5, b = 10;
  std::swap(a, b); // a 现在是 10，b 现在是 5

  std::vector<int> vec1 = {1, 2, 3};
  std::vector<int> vec2 = {4, 5, 6};
  std::swap(vec1, vec2); // vec1 和 vec2 的内容被交换
  for (auto a : vec1)
  {
    cout << a << " ";
  }

  // iter_swap 交换指定迭代器的元素
  std::vector<int> vec = {1, 2, 3};
  std::iter_swap(vec.begin(), std::next(vec.begin(), 2)); // 交换第一个和第三个元素
  for (auto a : vec)
  {
    cout << a << " ";
  }

  // transform()  对序列中的每个元素应用给定函数，并将结果存储在指定序列中。
  std::vector<int> source = {1, 2, 3};
  std::vector<int> destination;
  std::transform(source.begin(), source.end(), std::back_inserter(destination), [](int x)
                 { return x * x; });
  for (auto a : destination)
  {
    cout << a << " ";
  }

  // replace 替换指定元素
  std::vector<int> vec = {1, 2, 3, 2, 1};
  // 把2都替换成4
  std::replace(vec.begin(), vec.end(), 2, 4);
  for (auto a : vec)
  {
    cout << a << " ";
  }

  // replace_if  按照指定条件替换元素
  std::vector<int> vec = {1, 2, 3, 4, 5};
  std::replace_if(vec.begin(), vec.end(), [](int x)
                  { return x % 2 != 0; }, -1);
  for (auto a : vec)
  {
    cout << a << " ";
  }

  // fill 按照指定填充数字
  std::vector<int> vec(5);
  std::fill(vec.begin(), vec.end(), 1);
  for (auto a : vec)
  {
    cout << a << " ";
  }

  ////fill_n 填充指定数量的元素
  std::vector<int> vec(5);
  std::fill_n(vec.begin(), 3, 1);
  for (auto a : vec)
  {
    cout << a << " ";
  }
}
