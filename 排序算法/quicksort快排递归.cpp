//����ָ�뷨
ѡȡһ���ؼ���(key)��Ϊ���ᣬһ��ȡ�����¼�ĵ�һ����/���һ�����������ѡȡ�������һ����Ϊ���ᡣ
������������left = 0;right = N - 1;
��leftһֱ����ߣ�ֱ���ҵ�һ������key��ֵ��right�Ӻ���ǰ��ֱ���ҵ�һ��С��key��ֵ��Ȼ�󽻻�����������
�ظ���������һֱ�����ң�ֱ��left��right��������ʱ��key����left��λ�ü��ɡ�

int PartSort(int* array, int left, int right)//��֧���򲢷��������λ��
{
	int& key = array[right];//ѡȡ����Ϊ����
	while (left < right)
	{
		while (left < right && array[left] <= key)//ѡ���Ϊ��׼ֵ�����ȴ��ұ߿�ʼ������swap(arr[left], key)λ�ó���
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
	swap(array[left], key);//��key�ŵ�left��λ��
	return left;
}


void QuickSort(int* array, int left, int right)
{
	if (left >= right)//��ʾ�Ѿ����һ����
	{
		return;
	}
	int index = PartSort(array, left, right);//������õ�λ��
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