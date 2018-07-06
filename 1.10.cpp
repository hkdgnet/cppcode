//#include <iostream>
//
//int main()
//{
//	for (int i = 2; i < 3; i++)
//
//	{
//		//int cishu = i;
//		//std::cout << "Enter two numbers:" << std::endl;
//		//std::cout << "现在是第" << cishu -1 << "次计算" << std::endl;
//		////std::cout << std::endl;
//		//int v1 = 0, v2 = 0, v3 = 0;
//		//std::cin >> v1 >> v2 >> v3;
//		//std::cout << "The sum of " << v1 << " and " << v2 <<" and " << v3
//		//		<< " is " << v1 * v2 + v3<< std::endl;
//		//std::cout << std::endl;
//		//
//
//		//std::cout << "/*" << std::endl;
//		//std::cout << "*/" << std::endl;
//		//std::cout << "/*" "*/" "*/" << std::endl;
//		//std::cout << "windows";
//
//		//1.4.1 while
//
//		int sum = 0, val = 0;
//		std::cin >> sum >> val;
//		while (sum <= val)
//		{
//			std::cout << sum << std::endl;
//			int zhi = sum++;
//
//		}
//
//
//		system("pause");
//
//	}
//	return 0;
//}
//1.10*****************
//按递减速顺序打印出10到0之间的整数。
//#include <iostream>
//int main ( )
//{
//	int  val = 10;
//	while (val >= 0)
//	{
//		std::cout << val << std::endl;
//		--val;
//	}
//	system("pause");
//	return 0;
//}

//1.11**************************
//提示用户输入两个整数，然后打印两个整数之间的所有整数。
//#include <iostream>
//int  main ( )
//{
//	int val1 = 0, val2 = 0;
//	std::cout << "请输入两个数：" << std::endl;
//	std::cin >> val1 >> val2;
//	if (val1 < val2)
//	{
//		int tmp = val1;
//		val1 = val2;
//		val2 = tmp;
//	}
//
//	while (val1>=val2)
//	{
//		std::cout << val1 << " ";
//		--val1;
//	}
//	std::cout << std::endl;
//	system("pause");
//	return 0;
//}
//练习：用for实现1到10累加。****************
//#include <iostream>
//int main()
//{
//	int sum = 0;
//	for (int val = 1; val <= 10; ++val)
//	{
//		sum = sum + val;
//	}
//	std::cout << sum << std::endl;
//	system("pause");
//	return 0;
//}

//1.12*************************************
//#include <iostream>
//int main()
//{
//	int sum = 0;
//	for (int i = -100; i <= 100; ++i)
//	{
//		sum += i;
//		//std::cout << sum << " ";
//	}
//	std::cout << sum << std::endl;
//	system("pause");
//	return 0;
//
//}
//1.13-1*******************************
//#include <iostream>
//int main()
//{
//	int sum = 0;
//	for (int i = 50; i <= 100; ++i)
//	{
//		sum = sum + i;
//	}
//	std::cout << "The sum is " << sum << std::endl;
//	system("pause");
//	return 0;
//}
//1.13-2********************************
//#include <iostream>
//int main()
//{
//
//	for (int i = 10; i >= 0; --i)
//	{
//		std::cout << i << " ";
//	}
//	system("pause");
//	return 0;
//}
//1.13-3************************

//#include <iostream>
//int main()
//{
//	int big = 0, small = 0;
//	std::cin >> big >> small;
//	if (big < small)
//	{
//		int tmp = big;
//		big = small;
//		small = tmp;
//	}
//	//for (  ; big >= small; --big)
//	//{
//	//	std::cout << big << " ";
//	//	
//	//}
//	//上面这种自己想出来的。把big作为计数器，下面实质也是把big作为计数器。
//	for ( int i = big ; i >= small; --i)
//	{
//		std::cout << i<< " ";
//		
//	}
//
//	system("pause");
//	return 0;
//}
//练习：读入数量不定的输入数据,u并求和。********
//#include <iostream>
//int main()
//{
//	int sum = 0, value = 0;
//	while (std::cin >> value)
//	{
//		sum = sum + value;
//	}
//	std::cout << sum << std::endl;
//	system("pause");
//	return 0;
//}
//练习:统计输入中每个值连续出现了几次。
//#include <iostream>
//int main ()
//{
//	int currVal = 0, val = 0;
//	if (std::cin >> currVal)
//	{
//		int cnt = 1;
//		while (std::cin >> val)
//		{
//			if (val == currVal)
//			
//				++cnt;
//			
//			else
//			{
//				std::cout << currVal << "occurs"
//					<< cnt << "times" << std::endl;
//				currVal = val;
//				cnt = 1;
//			}
//		}
//		std::cout << currVal << "occurs"
//			<< cnt << "times" << std::endl;
//	}
//	system("pause");
//	return 0;
//}
//练习:统计输入中每个值连续出现了几次。自己实现。
//#include <iostream>
//int main()
//{
//	int yuanlai = 0, val = 0;
//	if (std::cin >> yuanlai)
//	{
//		int count = 1;
//		while  (std::cin >> val)
//		{
//			if (val == yuanlai)
//			{
//				++count;
//			}
//			else
//			{
//				std::cout << yuanlai << "有" 
//					<< count << "个" << std::endl;
//				yuanlai = val;
//				count = 1;
//
//			}
//
//		}
//		std::cout << yuanlai << "有"
//			<< count << "个" << std::endl;
//
//	}
//
//	system("pause");
//	return 0;
//}

#include <iostream>
int main()
{
	int yuanlai = 0, val = 0;
	if (std::cin >> yuanlai)
	{
		int count = 1;
		for (; std::cin >> val;)
		{
			if (val == yuanlai)
			{
				++count;
			}
			else
			{
				std::cout << yuanlai << "有" << count << std::endl;
				yuanlai = val;
				count = 1;
			}

		}
		std::cout << yuanlai << "有" << count << std::endl;
	}
	system("pause");
	return 0;
}
