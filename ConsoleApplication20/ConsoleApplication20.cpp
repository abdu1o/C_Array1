#include <iostream>
#include <ctime>
#include <random>
#include <algorithm>
using namespace std;

int RandomNumber(int min, int max)
{
	srand(time(NULL));

	int num = min + rand() % (max - min + 1);
	return num;
}

//(1)---------------------------------------
//int main()
//{
//	int num1, num2, num3, num4, num5;
//
//	cout << "Enter 5 numbers: ";
//	cin >> num1 >> num2 >> num3 >> num4 >> num5;
//
//	int arr_num[5] = { num1, num2, num3, num4, num5 };
//
//	reverse(begin(arr_num), end(arr_num));
//
//	for (int i : arr_num)
//	{
//		cout << i << " ";
//	}
//}
//------------------------------------------


//(2)---------------------------------------
//int main()
//{
//	srand(time(NULL));
//	int arr_rand[20];
//
//	for (int j = 0; j < 20; j++)
//	{
//		arr_rand[j] = rand() % 100 - 50;
//	}
//
//	for (int j = 0; j < 20; j++)
//	{
//		if (j % 2 == 0 || j == 0)
//		{
//			cout << arr_rand[j] << " ";
//		}
//	}
//}
//------------------------------------------


//(3)---------------------------------------
//int main()
//{
//	double count = 0, summ = 0, average;
//
//	srand(time(NULL));
//	int arr_rand[10];
//
//	for (int j = 0; j < 10; j++)
//	{
//		arr_rand[j] = -20 + rand() % 41;
//	}
//
//	for (int i : arr_rand)
//	{
//		if (i >= 0)
//		{
//			count++;
//			summ += i;
//		}
//	}
//
//	cout << "Count of positive: " << count << "\nSumm of positive: " << summ << "\nAverage of positive: " << summ / count;
//}
//------------------------------------------


//(4)---------------------------------------
//int main()
//{
//    srand(time(NULL));
//    char arr_str[100];
//
//    int lett_count = 0;
//    int num_count = 0;
//    int symb_count = 0;
//    int punct_count = 0;
//
//    for (size_t i = 0; i < 100; i++)
//    {
//        arr_str[i] = rand() % 255;
//
//        cout << arr_str[i] << " ";
//
//        if (arr_str[i] >= 44 && arr_str[i] <= 46 || arr_str[i] == 33 || arr_str[i] == 34 || arr_str[i] == 63 || arr_str[i] == 58 || arr_str[i] == 59 || arr_str[i] >= 39 && arr_str[i] <= 41 || arr_str[i] == 19)
//        {
//            punct_count++;
//        }
//        else if (arr_str[i] >= 48 && arr_str[i] <= 57)
//        {
//            num_count++;
//        }
//        else if (arr_str[i] >= 65 && arr_str[i] <= 90 || arr_str[i] >= 97 && arr_str[i] <= 122)
//        {
//            lett_count++;
//        }
//        else
//        {
//            symb_count++;
//        }   
//    }
//    cout << "\nLetters: " << lett_count << endl;
//    cout << "Punctuations: " << punct_count << endl;
//    cout << "Numbers: " << num_count << endl;
//    cout << "Other symbols: " << symb_count << endl;
//}
//------------------------------------------


//(5)---------------------------------------
//int main()
//{
//	int num, count = 0;
//	cout << "Enter number: ";
//	cin >> num;
//
//	srand(time(NULL));
//	int arr_rand[100];
//
//	for (int j = 0; j < 100; j++)
//	{
//		arr_rand[j] = rand() % num + 100;
//	}
//
//	for (int i : arr_rand)
//	{
//		cout << i << " ";
//		if (i == num)
//		{
//			count++;
//		}
//	}
//
//	cout << "\nAmount of your number: " << count << endl;
//}
//------------------------------------------


//(6)---------------------------------------
//int main()
//{
//	int summ = 0;
//
//	srand(time(NULL));
//	int arr_rand[20];
//
//	for (int j = 0; j < 20; j++)
//	{
//		arr_rand[j] = -10 + rand() % 41;
//	}
//
//	for (int i : arr_rand)
//	{
//		cout << i << " ";
//	}
//
//	for (int i = 0; i < 20; i++)
//	{
//		if (arr_rand[i] < 0)
//		{
//			for (int k = i + 1; k < 20; k++)
//			{
//				summ += arr_rand[k];
//			}
//			break;
//		}
//	}
//	cout << "\n" << summ;
//}
//------------------------------------------


//(7)---------------------------------------
//int main()
//{
//	int min = 0, max = 0;
//
//	srand(time(NULL));
//	int arr_rand[20];
//
//	for (int j = 0; j < 20; j++)
//	{
//		arr_rand[j] = rand() % 51;
//	}
//
//	int num = sizeof(arr_rand) / sizeof(arr_rand[0]);
//	min = arr_rand[0];
//
//	for (int i : arr_rand)
//	{
//		cout << i << " ";
//
//		if (i >= max)
//		{
//			max = i;
//		}
//		else if (i < min)
//		{
//			min = i;
//		}
//	}
//
//	auto ind_min = find(arr_rand, arr_rand + num, min);
//	auto ind_max = find(arr_rand, arr_rand + num, max);
//
//	cout << "\nMin: " << min << "\nIndex min: " << distance(arr_rand, ind_min) << "\nMax: " << max << "\nIndex max: " << distance(arr_rand, ind_max);
//}
//------------------------------------------


//(8)---------------------------------------
//int main()
//{
//	srand(time(NULL));
//
//	int digit_1 = 0, digit_2 = 0, digit_3 = 0;
//	int arr_rand[200];
//
//	for (int j = 0; j < 200; j++)
//	{
//		arr_rand[j] = + rand() % 201;
//	}
//
//	for (int i : arr_rand)
//	{
//		cout << i << " ";
//
//		if (i <= 9)
//		{
//			digit_1++;
//		}
//		else if (i >= 10 && i <= 99)
//		{
//			digit_2++;
//		}
//		else
//		{
//			digit_3++;
//		}	
//	}
//	cout << "\n1 digit numbers: " << digit_1 << "\n2 digit numbers: " << digit_2 << "\n3 digit numbers: " << digit_3;
//}
//------------------------------------------


//(9)---------------------------------------
//int main()
//{
//	srand(time(NULL));
//	
//	int num1 = 0, num2 = 9;
//	int arr_rand[10];
//	
//	for (int j = 0; j < 10; j++)
//	{
//		arr_rand[j] = + rand() % 51;
//	}
//
//	cout << "Ur old array: ";
//
//	for (int i : arr_rand)
//	{
//		cout << i << " ";
//	}
//
//	cout << "\nUr new array: ";
//
//	for (int i : arr_rand)
//	{
//		if (i == arr_rand[num1])
//		{
//			cout << arr_rand[num2] << " ";
//			num1++;
//			num2--;
//		}
//	}
//}
//------------------------------------------


//(10)---------------------------------------
int main()
{
	srand(time(NULL));
	
	int A[5], B[5], num = 0;
	vector <int> C;

	for (int j = 0; j < 5; j++)
	{
		A[j] = + rand() % 51;
		B[j] = + rand() % 51;
	}

	for (int i : A)
	{
		for (int j : B)
		{
			if (i == A[num] && j == B[num])
			{
				C.push_back(A[num]);
				C.push_back(B[num]);

				num++;
			}
		}
	}

	cout << "First array: ";
	for (int i : A)
	{
		cout << i << " ";
	}

	cout << "\nSecond array: ";
	for (int i : B)
	{
		cout << i << " ";
	}

	cout << "\nNew array: ";
	for (int i : C)
	{
		cout << i << " ";
	}
}
//------------------------------------------