#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
  ////sort 不是稳定的排序算法，使用快排进行排序
  vector<int> v = {5, 4, 7, 1, 3, 2, 8};
  sort(v.begin(), v.end());
  for (auto a : v)
  {
    cout << a;
  }

  //-----------------------------------------------------------------------------------------------------------

  // stable_sort   稳定的排序算法，相等的元素会保持原有的顺序，不会进行排序
  vector<int> v = {5, 4, 7, 1, 3, 2, 8};
  stable_sort(v.begin(), v.end());
  for (auto a : v)
  {
    cout << a;
  }

  //-----------------------------------------------------------------------------------------------------------

  // partial_sort 部分排序算法，把最小的n个元素移动到vector容器开始，进行排序
  vector<int> v = {5, 4, 7, 1, 3, 2, 8};
  partial_sort(v.begin(), v.begin() + 3, v.end());
  for (auto a : v)
  {
    cout << a;
  }

  //-----------------------------------------------------------------------------------------------------------

  // nth_element   传入参数n之后，所有小于他的元素都在他之前，所有大于他的元素都在他之后,通常用来找第n小的元素
  // nth_element 并不保证整个序列是有序的，它只保证第 n 个元素处于正确的位置，并且所有小于它的元素在它左边，所有大于它的元素在它右边
  std::vector<int> v = {5, 3, 1, 4, 2};
  size_t i = 2;
  // 假设我们想找到第3小的元素
  nth_element(v.begin(), v.begin() + i, v.end());
  // 现在 v[2] 是第3小的元素
  std::cout << "第三小的元素是: " << v[i] << std::endl;

  // 自定义排序，sort允许我们自己传入比较规则
  std::vector<int> v = {5, 3, 1, 4, 2};
  std::sort(v.begin(), v.end(), [](int a, int b)
            { return a > b; });
  for (auto a : v)
  {
    cout << a;
  }

  //-----------------------------------------------------------------------------------------------------------

  // 稳定排序（Stable Sorting）是一种排序算法的属性，它保证相等的元素在排序后保持它们原始的相对顺序。换句话说，在排序之前相等的元素，在排序之后它们的顺序不会改变。

  // 例如，考虑以下具有相同值的元素序列：

  // 原始序列 : A 5 B 5 C 3 D 5
  // 如果使用稳定排序算法，排序后的结果会保持相等元素的原始顺序：

  // 稳定排序后 : A 5 B 5 C 5 D 3
  // 相反，如果使用非稳定排序算法，相等元素的相对顺序可能会改变：

  // 非稳定排序后 : A 5 D 5 B 5 C 3
  // 稳定排序在某些情况下非常重要，特别是当排序的元素是复合对象，并且排序依据的是对象的一个属性时。例如，在一个班级中，学生按年龄排序，但还需要保持姓氏的字母顺序，这时就需要使用稳定排序算法。

  // C++ STL 中的 std::stable_sort 算法就是稳定排序的一个例子。它使用归并排序算法作为其底层实现，保证了排序的稳定性。而 std::sort 算法默认是不稳定的，因为它通常是基于快速排序实现的。

#include <algorithm>
#include <vector>
#include <iostream>
  using namespace std;
  struct Student
  {
    int age;
    std::string name;
  };

  bool compareStudents(const Student &a, const Student &b)
  {
    if (a.age == b.age)
      return a.name < b.name;
    return a.age < b.age;
  }

  int main()
  {
    std::vector<Student> students = {
        {10, "Alice"},
        {12, "Bob"},
        {10, "Charlie"},
        {12, "David"},
        {10, "Eve"}};

    // 使用稳定排序按年龄排序，同时保持名字的字母顺序
    std::stable_sort(students.begin(), students.end(), compareStudents);

    for (const auto &student : students)
    {
      std::cout << student.name << " (" << student.age << ")\n";
    }

    return 0;
  }
}
