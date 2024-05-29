# C++STL库常用算法代码实现
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
