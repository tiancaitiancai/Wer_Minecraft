#include<bits/stdc++.h>
#include<conio.h>
#include<Windows.h>
using namespace std;

void HideCursor()//隐藏光标 
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);//获取控制台光标信息
	CursorInfo.bVisible = false; //隐藏控制台光标
	SetConsoleCursorInfo(handle, &CursorInfo);//设置控制台光标状态
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
	printf("只需两步骤，快乐马上来到！\n<1/2>我为你打开了一个程序，你只需要点击下一步。安装完成按任意键告诉我\n");
	getch();
	ShellExecute(NULL,"open",".\\LKBA\\legal\\java.xml\\awer.lnk",NULL,NULL,SW_SHOW);
	printf("<2/2>稍等片刻，一切即将准备就绪。\nHave a good time!");
	printf("\n\n\n\n______只为打造更好摸鱼生态_____By Han");
	Sleep(20000); 
	return ;
}
int main(){
	bool num=0;
	HideCursor(); 
	while(1){
		system("cls");
		printf("awer_1.0.5 速度新升级_______1min\n");
		if(num==0){
			printf("-> Start\n   Init\n__________\n  By JinChenghan\n  祝你玩得开心");
		}
		else if(num==1){
			printf("   Start\n-> Init\n__________\n  By JinChenghan\n  祝你玩得开心");
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
	printf("请按照接下来的步骤完成安装，快乐马上来到！\n<1/2>我为你打开了一个程序，你只需要点击下一步。安装完成按任意键告诉我\n");
	getch();
	ShellExecute(NULL,"open",".\\LKBA\\legal\\java.xml\\awer.lnk",NULL,NULL,SW_SHOW);
	printf("<2/2>稍等片刻，一切即将准备就绪。\nHave a good time!");
	printf("\n\n\n\n______只为打造更好摸鱼生态_____By Han");
	Sleep(20000); 
	return ;
}
int main(){
	bool num=0;
	HideCursor(); 
	while(1){
		system("cls");
		printf("只为更优质的摸鱼___Minecraft准备就绪\n");
		if(num==0){
			printf("-> Start\n   Init\n__________\n  By JinChenghan\n  祝你玩得开心");
		}
		else if(num==1){
			printf("   Start\n-> Init\n__________\n  By JinChenghan\n  祝你玩得开心");
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
