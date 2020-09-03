#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <time.h>
#include <conio.h>

char dir[2] = {'w', 'w'}; //���򼰳�ʼ���� 
int head = 2;             //��¼ͷ���±�
int snake_len = 3;        //��¼�ߵĳ��� 
int snake_x[1005], snake_y[1005];  //�洢���������
int food_x, food_y;       //ʵ������ 
int score = 0;                //��¼�ɼ� 

void gotoxy(int x, int y)  //������ƶ�����x, y������
{
	COORD pos;             //coord��˼�����꣬Э�� 
    HANDLE hOutput;        //handle��˼�Ǿ�����ֱ������� 
    pos.X = x;
    pos.Y = y;
    hOutput = GetStdHandle(STD_OUTPUT_HANDLE);  //�õ���׼������������̨������� 
    SetConsoleCursorPosition(hOutput, pos);   //���ÿ���̨����������꣩λ�� 
} 

void welcome(void)
{
	
	gotoxy(15, 6);   printf("/*****************************************/\n");
	gotoxy(15, 8);   printf("/*                                       */\n");
	gotoxy(15, 10);  printf("/*        ��ӭ����̰����С��Ϸ��         */\n");
	gotoxy(15, 12);  printf("/*                                       */\n");
    gotoxy(15, 14);  printf("/*****************************************/\n\n\n\n");
    system("pause");  //������ͣ�����������
	system("cls");  //������������ 
} 

void gotoprint(int x, int y)  //��ӡ��x, y����������� 
{
	gotoxy(x, y);
	printf("*");
} 

void gotodelete(int x, int y)  //�����x, y����������� 
{
	gotoxy(x, y);
	printf(" ");
} 

void creatgraph(void)
{
	//��ͼ��С26*57 
	for(int i = 0; i < 57; i += 2)  //��ӡ���±߿�
	{
		 
		gotoprint(i, 0);  
		gotoprint(i, 25);
	} 
	for(int i = 1; i < 25; i++)  //��ӡ���ұ߿�
	{
		gotoprint(0, i);
		gotoprint(56, i);
	}
	gotoprint(14, 15);
	gotoprint(14, 16);
	gotoprint(14, 17);  //��ʼ�ߵ�λ�� 
	snake_x[2] = 14; snake_y[2] = 15;
	snake_x[1] = 14; snake_y[1] = 16;
	snake_x[0] = 14; snake_y[0] = 17;  //���ߵĳ�ʼλ�ô������� 
	gotoxy(0, 27);
}

void creatfood(void)
{
	while(1)
	{
		food_x = rand() % 54 + 1;
		food_y = rand() % 24 + 1;
		if(food_x % 2 != 0)
		{
			food_x = food_x + 1;
		} 
		int flag = 1;
		for(int i = head; i < head - snake_len; i--)  //�ж�ʵ���Ƿ����������غ� 
		{
			if(snake_x[i] == food_x && snake_y[i] == food_y)
			{
				flag = 0;
			} 
		}
		if(flag)
		{
			break;
		}
	}
	gotoxy(food_x, food_y);
	printf("*");
//	gotoprint(food_x, food_y);
}

void running1(void)
{
	int flag;
	int tx, ty;  //�˶�������� 
	creatfood();
	while(1)
	{
		if(_kbhit())
		{
			dir[1] = _getch();
		}
		if((dir[0] == 's' && dir[1] == 'w') ||
		   (dir[0] == 'w' && dir[1] == 's') ||
		   (dir[0] == 'd' && dir[1] == 'a') ||
		   (dir[0] == 'a' && dir[1] == 'd'))
		  {
		  	dir[1] = dir[0];
		  } 
		if(dir[1] == 'w')
		{
			tx = snake_x[head];
			ty = snake_y[head] - 1;
			dir[0] = dir[1];
		
		}
		else if(dir[1] == 's')
		{
			tx = snake_x[head];
			ty = snake_y[head] + 1;
	        dir[0] = dir[1];
		}
		else if(dir[1] == 'a')
		{
			tx = snake_x[head] - 2;
			ty = snake_y[head];
            dir[0] = dir[1];
		}
		else if(dir[1] == 'd')
		{
			tx = snake_x[head] + 2;
			ty = snake_y[head];
            dir[0] = dir[1];
		}
		else
		{
		// 	dir[1] = dir[0];  //��д�˾�����������ͣ��Ϸ�������ⷽ�����ʼ��Ϸ��д�˾�����������Ч 
			continue;
		} 
		if(tx < 1 || tx > 55 || ty < 1 || ty > 24)
		{
			break;
		} 
		if(tx == food_x && ty == food_y)
		{
			score += 10;
			snake_len++;
			creatfood();
		}
	    else
	    {
	    	flag = 0;   //�ж����Ƿ�Ե��Լ� 
		    for(int i = head; i > head - snake_len; i--)  //�ж����Ƿ�Ե��Լ� 
		    {
			    if(snake_x[i] == tx && snake_y[i] == ty)
		    	{
			    	flag = 1;
		    	} 
	    	}
	    	if(flag)
	    	{
		    	break;
	    	}
	    	gotoxy(snake_x[head-snake_len+1], snake_y[head-snake_len+1]);
	        printf(" ");
	    //	gotodelete(snake_x[head-snake_len+1], snake_y[head-snake_len+1]);
		}
//		int flag = 0;   //�ж����Ƿ�Ե��Լ� 
//		for(int i = head; i > head - snake_len; i--)  //�ж����Ƿ�Ե��Լ� 
//		{
//			if(snake_x[i] == tx && snake_y[i] == ty)
//			{
//				flag = 1;
//			} 
//		}
//		if(flag)
//		{
//			break;
//		}
		head++;
		snake_x[head] = tx;
		snake_y[head] = ty;
		gotoxy(tx, ty);
	    printf("*");
	//	gotoprint(tx, ty);
		gotoxy(0, 27);
		Sleep(200);
	} 
	system("cls");
//	gotoxy(40, 10);
	printf("Game Over!\nYour Score is:%d\n", score);
	system("pause");
} 

int main(void) 
{
	system("color F0");
	welcome();
	creatgraph();
	running1();
	
	return 0;
}
