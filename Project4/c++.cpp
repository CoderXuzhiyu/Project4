#include <iostream>
using namespace std;
#include<string>
#include<stdio.h>
//int main()
//{
//	/*cout << "hello world"<< endl;
//	system("pause");*/
//	/*cout << "" << sizeof(short) << endl;
//	cout << "" << sizeof(int) << endl;
//	cout << "" << sizeof(long) << endl;
//	cout << "" << sizeof(long long) << endl;
//	short num1 = 10;
//	cout << "" << sizeof(num1) << endl;*/
//	//float f1 = 3.14f;
//	//cout << "" << sizeof(float) << endl; 
//	//cout << "" << sizeof(double) << endl; 
//	//float f2 = 3e2;
//	//float f3 = 3e-2;
//	/*char ch = 'a';
//	char ch1[] = "abcde";
//	cout << ch << endl;
//	cout << (int)ch << endl;
//	cout << "hello world\n" ;
//	cout << "\\\\";*/
//	/*string str2 = "hello world";
//	cout << str2 << endl;*/
//	/*bool flag = true;
//	flag = false;
//	cout << flag << endl;
//	cout << sizeof(bool) << endl;*/
//	/*int a = 0;
//	cout << "请给整形变量赋值：" << endl;
//	cin >> a;*/
//	//char ch = 'a';
//	//cout << "赋值" << endl;
//	//cin >> ch;
//	//cout << "" << ch << endl;
//	/*string str;
//	cin >> str;
//	cout << "" << str << endl;*/
//	//bool flag = false;
//	//cin >> flag;
//	//cout << "" << flag << endl;
//	//cout << (1 != 2) << endl;
//	//int a = 0;
//	//int b = 0;
//	////cout << !a << endl;
//	///*cout << !!a << endl;*/
//	//cout << (a && b) << endl;
//	//cout << (a || b) << endl;
//	int a = 30;
//	int b = 20;
//	int c = 0;
//	c = a > b ? a : b;
//	cout << c << endl;
//	switch (c)
//	{
//	case 20:
//		cout << "c=" << c << endl;
//		break;
//	case 30:
//		cout << "c=" << c << endl;
//		break;
//	default:
//		break;
//	}
//	return 0;
//}
//int main()
//{
//	//cout << "1.xxxx" << endl;
//	//cout << "2.xxxx" << endl;
//	//goto flag;
//	//cout << "3.xxxx" << endl;
//	//cout << "4.xxxx" << endl;
//	//flag:
//	//cout << "5.xxxx" << endl;
//	return 0;
//}
//int main()
//{
//	//int arr[5];
//	//arr[1] = 10;
//	//arr[2] = 1;
//	//arr[3] = 1;
//	//arr[4] = 1;
//	//arr[0] = 1;
//	//cout << arr[1] << endl;
//	//int arr2[5] = { 10,20,30,40,50 };
//	//int arr3[] = { 10,20,30,40,50,60 };
//	//cout << sizeof(arr) / sizeof(arr[0]) << endl;
//	//cout << (int)arr << endl;
//	//cout << (int)&arr[0] << endl;
//	//int arr4[2][2] = { 0,1,2,3 };
//	//cout << sizeof(arr4) << endl;
//	//cout << &arr4 << endl;
//	/*int a = 0;
//	int* p = &a;
//	cout << sizeof(char*) << endl;
//	p = NULL;*/
//	/*int a, b;
//	scanf_s("%d%d", &a, &b);
//	printf("%d %d", a, b);*/
//	cout << sizeof(int);
//	return 0;

//
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	char a;
//	cin >> a;
//	cout << a << endl;
//	cout << a<<a<<a << endl;
//	return 0;
//}
//#include<iostream>
//#include<cstdio>
//int main()
//{
//	int x, a, b, y,z;
//	cin >> x >> a >> b >> y>>z;
//	int k, p, q;
//	p + q * a = x * a * k;
//	p + q * b = y*b*k;
//	z*k = q
//
//
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	double r, d, c, s;
//	cin >> r;
//	d = r * 2;
//	double pi = 3.1415926;
//	c = pi * r * 2;
//	s = pi * r * r;
//	cout << fixed << setprecision(4) << d << " " << c << " " << s;
//	return 0;
//}
//#include<iostream>
//
//using namespace std;
//int main()
//{
//	float x;
//	cin >> x;
//	if (x > 0)
//	{
//		cout << (int)x / 1 << endl;
//	}
//	else if (x < 0)
//	{
//		cout << (int)x / 1 << endl;
//	}
//	else
//		cout << "0" << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	char ch;
//	cin >> ch;
//	cout << (int)ch << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a;
//	bool b;
//	cin >> a;
//	b = a;
//	cout << b << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int arr[5];
//	for (int i = 0; i <= 4; i++)
//	{
//		cin >> arr[i];
//	}
//	arr[1] += arr[0] / 3;
//	arr[4] += arr[0] / 3;
//	arr[0] = arr[0] / 3;
//	arr[2] += arr[1] / 3;
//	arr[0] += arr[1] / 3;
//	arr[1] = arr[1] / 3;
//	arr[3] += arr[2] / 3;
//	arr[1] += arr[2] / 3;
//	arr[2] = arr[2] / 3;
//	arr[4] += arr[3] / 3;
//	arr[2] += arr[3] / 3;
//	arr[3] = arr[3] / 3;
//	arr[0] += arr[4] / 3;
//	arr[3] += arr[4] / 3;
//	arr[4] = arr[4] / 3;
//
//    
//	for (int i = 0; i <= 4; i++)
//	{
//		cout<< arr[i]<<" ";
//	}
//
//	return 0;
//}
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	float x;
//	cin >> x;
//	printf("%.3f", x);
//	return 0;
//}
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//double x;
//cout<<x<<endl;
//printf("%.5f\n",x);
//printf("%e\n",x);
//printf("%g\n",x);
//return 0;
//}
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	double x;
//	cin >> x;
//	printf("%f\n", x);
//	printf("%.5lf\n", x);
//	printf("%e\n", x);
//	printf("%g\n", x);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	double a, b;
//	scanf_s("%lf%lf", &a, &b);
//	printf("%lf", (a / b)-(int)(a/b));
//return 0;
//}
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	int r;
//	scanf_s("%d", &r);
//	double V =( 4 / 3) * 3.14 * r * r * r;
//	printf("%.5lf", V);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	cout << pow(2, n) << endl;
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//	long long N;
//	if (N > 0)
//	{
//		printf("positive");
//	}
//	else if (N < 0)
//	{
//		printf("negative");
//	}
//	else
//		printf("zero");
//	return 0;
//}
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	if ((n / 10) != 0 && (n / 100) == 0)
//		printf("1");
//	else
//		printf("0");
//	return 0;
//}
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	if (n != 1 && n != 3 && n != 5)
//	{
//		printf("YES");
//	}
//	else
//		printf("NO");
//	return 0;
//}
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	double t1, t2, s;
//	cin >> s;
//	t1 = 27 + 23 + s / (double)3;
//	t2 = s / (double)1.2;
//	if (t1 > t2)
//		printf("Walk");
//	if (t1 < t2)
//		printf("Bike");
//	if (t1 == t2)
//		printf("All");
//	return 0;
//}
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	int x;
//	char c;
//	cin >> x >> c;
//	int k;
//	if (x <= 1000 && c == 'y')
//		k = 8 + 5;
//	if (x <= 1000 && c == 'n')
//		k = 8;
//	if (x > 1000)
//	{
//		if (c =='y')
//		{
//			if (((double)(x - 1000) / 500 - (x - 1000) / 500) != 0)
//				k = 8 + 5 + (((x - 1000) / 500 + 1) * 4);
//		}
//		else
//			k = 8 + 5 + (x - 1000) / 500 * 4;
//	
//	if (c == 'n')
//	{
//		if (((double)(x - 1000) / 500 - (x - 1000) / 500) != 0)
//			k = 8 + (((x - 1000) / 500 + 1) * 4);
//	}
//	else
//		k = 8 + (x - 1000) / 500 * 4;
//}
//	printf("%d", k);
//return 0;
//}
//int main()1
//{
//	int x=1370;
//	double y = (double)(x - 1000) / 500 - (x - 1000) / 500;
//	cout << y;
//	return 0;
//}
//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a >= b && a >= c)
//	{
//		printf("%d", a);
//			return 0;
//	}
//	else if (b >= a && b >= c)
//	{
//		printf("%d", b);
//		return 0;
//	}
//	else
//	{
//		printf("%d", c);
//		return 0;
//	}
//}
//
//using namespace std;
//int main()
//{
//	int x, y;
//	cin >> x, y;
//	if (x >= -1 && x <= 1 && y >= -1 && y <= 1)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}
//#include<iostream>
//#include<stdio.h>
//using namespace std;
//int main()
//{
//	double a, b, c;
//	cin >> a >> b >> c;
//	if (b * b - 4 * a * c > 0)
//	{
//		double x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 / a;
//		double x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 / a;
//		printf("x1=%.5lf;", x2);
//		printf("x2=%.5lf", x1);
//	}
//	else if (b * b - 4 * a * c == 0)
//	{
//		double x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 / a;
//		printf("x1=x2=%.5lf", x1);
//	}
//	else
//		printf("No answer!");
//	return 0;
//}
//int main()
//{
//	cout << sqrt(4);
//	return 0;
//}

//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int k;
//		cin >> k;
//		sum += k;
//	}
//	double k = sum / n;
//	printf("%.2lf", k);
//	return 0;
//}
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	double sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		float a;
//		cin >> a;
//		sum += a;
//	}
//	printf("%.lf", (double)sum / n);
//
//	return 0;
//}

//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	long long sum=0;
//	for (int i = 0; i < n; i++)
//	{
//		int k;
//		cin >> k;
//		sum += k;
//	}
//	cout << sum;
//	printf(" %.5lf", (double)sum / n);
//	return 0;
//}

//using namespace std;
//int main()
//{
//	int sumg=0, sums=0, sumb=0;
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int g, s, b;
//		cin >> g >> s >> b;
//		sumg += g;
//		sums += s;
//		sumb += b;
//	}
//	printf("%d %d %d %d", sumg, sums, sumb, sumg + sums + sumb);
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int sum = 0;
//	for (int i = m; i <= n; i++)
//	{
//		if (i % 2 != 0)
//		{
//			sum += i;
//		}
//	}
//	cout << sum;
//	return 0;
//}

//using namespace std;
//int main()
//{
//    int k;
//    cin >> k;
//    int sum1 = 0;
//    int sum5 = 0;
//    int sum10 = 0;
//    for (int i = 0; i < k; i++)
//    {
//        int n;
//        scanf_s("%d", &n);
//        switch (n)
//        {
//        case 1:
//            sum1 += 1;
//            break;
//        case 5:
//            sum5 += 1;
//            break;
//        case 10:
//            sum10 += 1;
//            break;
//        }
//    }
//    cout << sum1 << endl << sum5 << endl << sum10;
//    return 0;
//}

//using namespace std;
//int main()
//{
//	int x, n;
//	double k = x;
//	cin >> x >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		k = k * (1.001);
//	}
//	printf("%.4lf", k);
//	return 0;
//}

//int fib(int x)
//{
//	if (x <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib(x - 1) + fib(x - 2);
//}
//
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int k;
//		cin >> k;
//		cout << fib(k)<<endl;
//	}
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int c, d;
//	scanf_s("%d %d", &c, &d);
//	double k = (double)c / d;
//	for (int i = 0; i < n - 1; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		if ((double)a / b - k > 0.05)
//		{
//			printf("worse\n");
//		}
//		else if (k - (double)a / b > 0.05)
//		{
//			printf("better\n");
//		}
//		else
//			printf("same\n");
//	}
//	return 0;
//}


//
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int sum = 0;
//	for (int i = 0; i <= n - 1; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		double t = (double)sqrt(a * a + b * b) / 50 * 2 + 1.5 * c;
//		if (t > (int)t)
//		{
//			int k = (int)t + 1;
//			sum += k;
//		}
//		else
//		{
//			sum += t;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int k;
//      cin>>k;
//		if (m - k >= 0)
//		{
//			m -= k;
//		}
//		else
//			count++;
//	}
//	cout << count << endl;
//	return 0;
//}



//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	double sum = 0;
//	if (n > 1)
//	{
//		sum = (double)(2 + 1.5);
//		int a = 2, b = 3, c;
//		int d = 1, e = 2, f;
//		for (int i = 1; i <= n - 2; i++)
//		{
//			c = a + b;
//			f = d + e;
//			sum += (double)c / f;
//			a = b;
//			b = c;
//			d = e;
//			e = f;
//		}
//	}
//	else
//	{
//		sum = 2;
//	}
//	printf("%.4lf", sum);
//	return 0;
//}


//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	double sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += 1 / i * (pow(-1, i + 1));
//	}
//	printf("%.4lf", sum);
//	return 0;
//}
//using namespace std;
//int main()
//{
//	int a = 1;
//	cout <<1.0/2.0 * a;
//	return 0;
//}

//using namespace std;
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	for (long long i = 2; i <= 1000000; i++)
//	{
//		if (a % i == b % i && b % i == c % i)
//		{
//			cout << i;
//			break;
//		}
//	}
//}
//
//using namespace std;
//int main()
//{
//	int a, b, n;
//	cin >> a >> b >> n;
//	double k = (double)a / b;
//	for (int i = 1; i <= n; i++)
//	{
//		k = (double)k * 10;
//	}
//	int f = (int)k % 10;
//	cout << f;
//	return 0;
//	}


//using namespace std;
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	long long ret = 1;
//	for (int i = 1; i <= b; i++)
//	{
//		ret *= a;
//	}
//	
//	switch (ret % 7)
//	{
//	case 0:
//		printf("Sunday");
//		break;
//	case 1:
//		printf("Monday");
//		break;
//	case 2:
//		printf("Tuesday");
//		break;
//	case 3:
//		printf("Wednesday");
//		break;
//	case 4:
//		printf("Thursday");
//		break;
//	case 5:
//		printf("Friday");
//		break;
//	case 6:
//		printf("Saturday");
//		break;
//	}
//	return 0;
//}



using namespace std;
int main()
{
	int a, b;
	int ret = 1;
	cin >> a >> b;
	for (int i = 1; i <= b; i++)
	{
		ret *= a;
		ret %= 1000;
	}
	if (ret >= 100)
	{
		cout << ret;
	}
	else if (ret < 100 && ret >= 10)
	{
		cout << "0" << ret;
	}
	else
		cout << "00" << ret;
	return 0;
}