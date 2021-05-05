#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include<algorithm>

//选手类
class Person
{
public:
	Person(string name, float score)
	{
		this->name = name;
		this->score = score;
	}

	//姓名
	string name;
	//平均分
	float score;
};

void createPerson(vector<Person>& v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];
		
		int score = 0;

		Person p(name, score);
		v.push_back(p);
	}
}

void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		//将评委的分数放入到deque容器中
		deque<int>d;
		for (int i = 0; i < 10; i++)
		{
			int score;
			score = rand() % 41 + 60;
			//cin >> score;
			d.push_back(score);
		}

		//排序
		sort(d.begin(), d.end());

		//去除最高和最低分
		d.pop_front();
		d.pop_back();

		//取平均分
		float sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
		{
			sum += *dit;
		}
		float avg = sum / d.size();

		//将平均分赋值给选手
		it->score = avg;
	}
}

void showScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << it->name << " 平均分为:" << it->score << endl;
	}
}

//评委打分案例
void test01()
{
	//1、创建5名选手
	//存放选手的容器
	vector<Person>p;
	createPerson(p);

	//2、给5名选手打分
	setScore(p);

	//3、显示最后得分
	showScore(p);
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	test01();

	system("pause");
	return 0;
}