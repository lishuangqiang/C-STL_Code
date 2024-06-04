#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;
int main()
{
  // accumulat  计算和或者自定义二元操作
  vector<int> nums{1, 2, 3, 4, 5, 6};
  // 求和
  int sum = accumulate(nums.begin(), nums.end(), 0);
  cout << "元素总和为：" << sum << endl;
  // 求乘积
  int mul = accumulate(nums.begin(), nums.end(), 1, [](int a, int b)
                       { return a * b; });
  cout << "元素乘积为：" << mul << endl;

  // inner_product 计算两个序列的内积
  // 设有两个序列 a 和 b，每个序列都含有 n 个元素，分别为 a[0], a[1], ..., a[n - 1] 和 b[0], b[1], ..., b[n - 1]。这两个序列的内积定义为：
  // a[0]×b[0] + a[1]×b[1] + … + a[n−1]×b[n−1]
  vector<int> num1 = {1, 2, 3};
  vector<int> num2 = {4, 5, 6};
  int product = std::inner_product(num1.begin(), num1.end(), num2.begin(), 0);
  cout << "内积" << product << endl;

  // adjacent_difference  计算相邻元素的差
  std::vector<int> nums = {1, 2, 3, 4, 5};
  std::vector<int> diffs(nums.size() - 1);

  // 计算序列中相邻元素的差
  std::adjacent_difference(nums.begin(), nums.end(), diffs.begin());

  std::cout << "相邻元素的差: ";
  for (int diff : diffs)
  {
    std::cout << diff << " ";
  }
  std::cout << std::endl;

  // 使用自定义二元操作
  std::vector<int> custom_diffs(nums.size() - 1);
  std::adjacent_difference(nums.begin(), nums.end(), custom_diffs.begin(),
                           [](int a, int b)
                           { return a * b; });

  std::cout << "自定义相邻元素操作的结果: ";
  for (int diff : custom_diffs)
  {
    std::cout << diff << " ";
  }
  std::cout << std::endl;

  // partical_sum
  //  计算序列的部分和
  std::vector<int> nums = {1, 2, 3, 4, 5};
  std::vector<int> sums(nums.size());
  std::partial_sum(nums.begin(), nums.end(), sums.begin());

  std::cout << "部分和: ";
  for (int sum : sums)
  {
    std::cout << sum << " ";
  }
  std::cout << std::endl;

  // pow 求幂
  double base = 2.0;
  int exponent = 3;
  double result = std::pow(base, exponent);
  std::cout << "2 的 3 次幂是: " << result << std::endl;

  // sqrt 求平方根
  double num = 16.0;
  double result = std::sqrt(num);
  std::cout << "16 的平方根是: " << result << std::endl;

  // 计算e的指数幂
  double exponent = 1.0;
  double result = std::exp(exponent);
  std::cout << "e 的 1 次幂是: " << result << std::endl;

  // 计算绝对值
  int num = -16;
  int result = std::abs(num);
  std::cout << "-16 的绝对值是: " << result << std::endl;

  // floor 和ceil - 向下取整和向上取整
  double x = 3.14;
  double floorResult = std::floor(x);
  double ceilResult = std::ceil(x);
  std::cout << "floor(3.14): " << floorResult << std::endl;
  std::cout << "ceil(3.14): " << ceilResult << std::endl;

  // round  进行四舍五入
  double x = 3.14;
  double roundResult = std::round(x);
  std::cout << "round(3.14): " << roundResult << std::endl;

  // fmod   进行取余，和%的区别在于它可以对浮点数取余
  double x = 5.0;
  double y = 2.0;
  double result = std::fmod(x, y);
  std::cout << "5.0 % 2.0 的余数是: " << result << std::endl; // 输出: 1.0

  // 分离整数和小数
  double x = 3.14159;
  double intpart;
  double fracpart = std::modf(x, &intpart);
  std::cout << "整数部分: " << intpart << ", 小数部分: " << fracpart << std::endl;

  // copysign 获取与第一个参数值相同，但符号与第二个参数相同的浮点数。
  double x = 1.0;
  double y = -2.0;
  double result = std::copysign(x, y);
  std::cout << "copysign(1.0, -2.0): " << result << std::endl;
}
