# C++STL库常用算法
- 本项目并不是重写STL库，仅仅是作者本人在使用C++刷题的时候忘记了大量STL库算法如何使用，因此在这里用代码简单使用了一遍。
- 初学者可以对照代码学习STL库中算法的使用，简化自己的代码结构，
## 查找算法
#### find()
- **用途**：查找与给定值匹配的第一个元素，返回对应的迭代器位置。
- **用法**：`auto it = find(container.begin(), container.end(), value);`

#### find_if()
- **用途**：查找满足特定条件的第一个元素的位置。
- **用法**：`auto it = find_if(container.begin(), container.end(), [](int x) { return condition; });`

#### lower_bound()
- **用途**：在已排序的序列中查找不小于给定值的第一个元素。
- **用法**：`auto it = lower_bound(container.begin(), container.end(), value);`

#### upper_bound()
- **用途**：在已排序的序列中查找第一个大于给定值的元素。
- **用法**：`auto it = upper_bound(container.begin(), container.end(), value);`

#### binary_search()
- **用途**：检查一个已排序的序列是否包含某个值。
- **用法**：`bool found = binary_search(container.begin(), container.end(), value);`

#### equal_range()
- **用途**：在已排序的序列中找到与给定值相等的所有元素的范围。
- **用法**：`auto range = equal_range(container.begin(), container.end(), value);`

#### adjacent_find()
- **用途**：查找序列中第一个相邻相等的元素对。
- **用法**：`auto it = adjacent_find(container.begin(), container.end());`

#### search()
- **用途**：在一个序列中查找另一个序列的首次出现。
- **用法**：`auto it = search(container1.begin(), container1.end(), container2.begin(), container2.end());`

#### search_n()
- **用途**：查找容器中连续出现指定数量的特定值。
- **用法**：`auto it = search_n(container.begin(), container.end(), count, value);`

## 排序算法
### sort()
- **用途**：使用快速排序算法对序列进行排序，不是稳定的排序算法。
- **用法**：`sort(container.begin(), container.end());`

### stable_sort()
- **用途**：稳定的排序算法，相等的元素会保持原有的顺序。
- **用法**：`stable_sort(container.begin(), container.end());`

### partial_sort()
- **用途**：部分排序算法，把最小的n个元素移动到容器开始，进行排序。
- **用法**：`partial_sort(container.begin(), container.begin() + n, container.end());`

### nth_element()
- **用途**：确保传入参数n之后，所有小于他的元素都在他之前，所有大于他的元素都在他之后，通常用来找第n小的元素。
- **用法**：`nth_element(container.begin(), container.begin() + i, container.end());`

### 自定义排序
- **用途**：允许用户自定义排序规则。
- **用法**：`sort(container.begin(), container.end(), [](int a, int b) { return condition; });`
# 集合操作算法

## set_union()
- **用途**：计算两个集合的并集。
- **用法**：`set_union(setA.begin(), setA.end(), setB.begin(), setB.end(), inserter(result, result.begin()));`

## set_intersection()
- **用途**：计算两个集合的交集。
- **用法**：`set_intersection(setA.begin(), setA.end(), setB.begin(), setB.end(), inserter(result, result.begin()));`

## set_difference()
- **用途**：计算两个集合的差集。
- **用法**：`set_difference(setA.begin(), setA.end(), setB.begin(), setB.end(), inserter(result, result.begin()));`

## set_symmetric_difference()
- **用途**：计算两个集合的对称差集。
- **用法**：`set_symmetric_difference(setA.begin(), setA.end(), setB.begin(), setB.end(), inserter(result, result.begin()));` // 注意：代码中错误地使用了 set_difference 来演示对称差集。

## includes()
- **用途**：判断一个集合是否是另一个集合的子集。
- **用法**：`bool result = includes(setA.begin(), setA.end(), setB.begin(), setB.end());`

## 序列操作算法

## merge()
- **用途**：合并两个有序序列，结果依然是有序的。
- **用法**：`merge(setA.begin(), setA.end(), setB.begin(), setB.end(), back_inserter(result));`

## unique()
- **用途**：移除序列中的连续重复元素。
- **用法**：`auto last = unique(v1.begin(), v1.end()); v1.erase(last, v1.end());
