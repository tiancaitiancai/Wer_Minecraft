#include<bits/stdc++.h>
#include<conio.h>
#include<Windows.h>
using namespace std;

void HideCursor()//���ع�� 
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);//��ȡ����̨�����Ϣ
	CursorInfo.bVisible = false; //���ؿ���̨���
	SetConsoleCursorInfo(handle, &CursorInfo);//���ÿ���̨���״̬
}
void Start(){
	ShellExecute(NULL,"open",".\\LKBA\\legal\\java.xml\\awer.lnk",NULL,NULL,SW_SHOW);
	//system(".\\LKBA\\legal\\java.xml\\awer.lnk");
	system("cls");
	printf("Loading___");
	Sleep(1000);
	system("cls");
	printf("Have a good time!");
	Sleep(3000);
	
	return ;
}
void Init(){
	ShellExecute(NULL,"open",".\\LKBA\\jdk.exe",NULL,NULL,SW_SHOW);
	system("cls");
	printf("ֻ�������裬��������������\n<1/2>��Ϊ�����һ��������ֻ��Ҫ�����һ������װ��ɰ������������\n");
	getch();
	ShellExecute(NULL,"open",".\\LKBA\\legal\\java.xml\\awer.lnk",NULL,NULL,SW_SHOW);
	printf("<2/2>�Ե�Ƭ�̣�һ�м���׼��������\nHave a good time!");
	printf("\n\n\n\n______ֻΪ�������������̬_____By Han");
	Sleep(20000); 
	return ;
}
int main(){
	bool num=0;
	HideCursor(); 
	while(1){
		system("cls");
		printf("awer_1.0.5 �ٶ�������_______1min\n");
		if(num==0){
			printf("-> Start\n   Init\n__________\n  By JinChenghan\n  ף����ÿ���");
		}
		else if(num==1){
			printf("   Start\n-> Init\n__________\n  By JinChenghan\n  ף����ÿ���");
		}
		char input=getch();
		if(input==13){
			break;
		}
		else{
			num=!num;
		}
	}
	if(num==0){
		Start();
		return 0;
	}
	else if(num==1){
		Init();
		return 0;
	}
	return 0;
}
	system("cls");
	printf("�밴�ս������Ĳ�����ɰ�װ����������������\n<1/2>��Ϊ�����һ��������ֻ��Ҫ�����һ������װ��ɰ������������\n");
	getch();
	ShellExecute(NULL,"open",".\\LKBA\\legal\\java.xml\\awer.lnk",NULL,NULL,SW_SHOW);
	printf("<2/2>�Ե�Ƭ�̣�һ�м���׼��������\nHave a good time!");
	printf("\n\n\n\n______ֻΪ�������������̬_____By Han");
	Sleep(20000); 
	return ;
}
int main(){
	bool num=0;
	HideCursor(); 
	while(1){
		system("cls");
		printf("ֻΪ�����ʵ�����___Minecraft׼������\n");
		if(num==0){
			printf("-> Start\n   Init\n__________\n  By JinChenghan\n  ף����ÿ���");
		}
		else if(num==1){
			printf("   Start\n-> Init\n__________\n  By JinChenghan\n  ף����ÿ���");
		}
		char input=getch();
		if(input==13){
			break;
		}
		else{
			num=!num;
		}
	}
	if(num==0){
		Start();
		return 0;
	}
	else if(num==1){
		Init();
		return 0;
	}
	return 0;
}
