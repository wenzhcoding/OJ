//左右指针法
选取一个关键字(key)作为枢轴，一般取整组记录的第一个数/最后一个，这里采用选取序列最后一个数为枢轴。
设置两个变量left = 0;right = N - 1;
从left一直向后走，直到找到一个大于key的值，right从后至前，直至找到一个小于key的值，然后交换这两个数。
重复第三步，一直往后找，直到left和right相遇，这时将key放置left的位置即可。

int PartSort(int* array, int left, int right)//分支排序并返回枢轴的位置
{
	int& key = array[right];//选取最右为枢轴
	while (left < right)
	{
		while (left < right && array[left] <= key)//选左边为基准值，则先从右边开始，否则swap(arr[left], key)位置出错
		{
		{
			++left;
		}
		while (left < right && array[right] >= key)
		{
			--right;
		}
		swap(array[left], array[right]);
	}
	swap(array[left], key);//将key放到left的位置
	return left;
}


void QuickSort(int* array, int left, int right)
{
	if (left >= right)//表示已经完成一个组
	{
		return;
	}
	int index = PartSort(array, left, right);//枢轴放置的位置
	QuickSort(array, left, index - 1);
	QuickSort(array, index + 1, right);
}


int main()
{
	int arr1[10] = { 1,5,45,65,98,77,12,65,32,22 };
	QuickSort(arr1, 0, 9);
	for (int i = 0; i < 10; i++) {
		cout << arr1[i] << endl;
	}
	cin.get();
	return 0;

}