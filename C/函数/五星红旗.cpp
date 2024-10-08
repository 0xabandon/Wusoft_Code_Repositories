#include<stdio.h>
#include<easyx.h>
#include<math.h>
#define PI 3.14
void fiveStar(int r,double startAngle)
{
	double d = 2 * PI / 5; //增量为一个圆的5分之一
	POINT points[5]; //长度为5的POINT数组，用于存储5个点
	for(int i = 0;i < 5;i++) //x坐标y坐标
	{
		points[i].x = cos(startAngle + i * d * 2) * r;
		points[i].y = sin(startAngle + i * d * 2) * r;
	}
	solidpolygon(points,5);
}

int main(void)
{
	int width = 900,height = width / 3 * 2; //网格宽高
	int grid = width / 2 / 15;
	initgraph(width,height); //创建窗体
	setbkcolor(RED);
	cleardevice();
	
	setaspectratio(1,-1);
	setfillcolor(YELLOW);
	setpolyfillmode(WINDING);
	//大五角星
	setorigin(grid * 5,grid * 5);
	fiveStar(grid * 3,PI / 2);
	//小五角星1
	setorigin(grid * 10,grid * 2);
	double startAngle = atan(3.0 / 5.0) * PI;
	fiveStar(grid,startAngle);
	//小五角星2
	setorigin(grid * 12,grid * 4);
	startAngle = atan(1.0 / 7.0) * PI;
	fiveStar(grid,startAngle);
	//小五角星3
	setorigin(grid * 12,grid * 7);
	startAngle = -atan(2.0 / 7.0) * PI;
	fiveStar(grid,startAngle);
	//小五角星4
	setorigin(grid * 10,grid * 9);
	startAngle = -atan(4.0 / 5.0) * PI;
	fiveStar(grid,startAngle);
	
	getchar();
	closegraph();
	return 0;
}
