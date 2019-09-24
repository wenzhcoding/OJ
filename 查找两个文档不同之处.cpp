	fstream file1;
	char data1;
	string str1;
	file1.open("C:/Users/文骄傲/Desktop/test/one.txt", ios::in);
	//cout << "reading file:" << endl;
	//while (file1.get(data1))
	//{
	//	str1 += data1;
	//}
	//cout << str1<<endl;

	fstream file2;
	char data2;
	string str2;
	file2.open("C:/Users/文骄傲/Desktop/test/two.txt",ios::in);
	//cout << "reading file2:" << endl;
	//while (file2.get(data2))
	//{
	//	str2 += data2;
	//}
	//cout<< str2;


	char cont1[2048], cont2[2048];
	for (int i = 1; file1.getline(cont1, sizeof(cont1)) && file2.getline(cont2, sizeof(cont2)); i++) {
		if (strcmp(cont1, cont2)) {
			cout << "erro in :" << i << " :\n" << cont1 << "\n" << cont2 << endl;
		}
	}
	file1.close();
	file2.close();
	system("Pause");
    return 0;