// GTestLeetcode.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "gtest/gtest.h"
//#include "../MyLeetcode/Crawler.h"

class CrawlerA
{
  public:
	CrawlerA()
		: isEnd(false)
	{
	}
	~CrawlerA() {}
	bool getEnd()
	{
		return isEnd;
	}
	void setEnd(bool val)
	{
		isEnd = val;
	}

  private:
	bool isEnd;
};


TEST(CrawlerTest, test1)
{
	CrawlerA s;
	s.setEnd(true);
	ASSERT_EQ(true, s.getEnd());
}

TEST(CrawlerTest2, newTest)
{
	CrawlerA s;
	s.setEnd(false);
	ASSERT_EQ(false, s.getEnd());
}
int xx = 0;
int main(int argc, char *argv[])
{
	testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();
	return 0;
}