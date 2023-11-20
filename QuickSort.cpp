#include <iostream>
#include <algorithm>
//快排
int main()
{
    //通过一趟排序将待排序的队列分成两个部分，其中一部分所有的元素都比另一部分元素小，然后递归的对两部分进行排序。
    std::vector<int> arr = {1,3,6,9,8,4,5,2,7,10};
    std::sort(arr.begin(),arr.end());
    std::for_each(arr.begin(),arr.end(),[](int i){
        std::cout  << i << std::endl;
    });
}