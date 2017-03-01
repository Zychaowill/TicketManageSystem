#include "Ticket.h"
#include "Ticket1.h"
#include <iostream>

using namespace std;

void User::login_mf()	//管理员登陆机票管理系统
{
	Flight F;

	system("cls");
	print_item(8);
	do
	{
		switch(choose())
		{
		case '1':F.add_fi();
			break;
		case '2':F.browse_fi();
			break;
		case '3':F.search_fi();
			break;
		case '4':F.sort_byfp();
			break;
		case '5':F.order();
			break;
		case '0':cout<<"即将退出'机票管理系统',并跳转到主界面..."<<endl;
			Sleep(1000);
			system("cls");
			home();
			break;                          
		default:cout<<"输入有误!请重新输入!"<<endl;
			Sleep(1000);
			system("cls");
			login_mf();
		}
	}while(choose()!=0);
}

void User::login_uf()	//用户登陆机票管理系统
{
	Flight F;

	system("cls");
	print_item(9);
	do
	{
		switch(choose())
		{
		case '1':F.browse_fi();
			break;
		case '2':F.search_fi();
			break;
		case '3':F.sort_byfp();
			break;
		case '4':F.order();
			break;
		case '0':cout<<"即将退出'机票管理系统',并跳转到主界面..."<<endl;
			Sleep(1000);
			system("cls");
			home();
			break;
		default:cout<<"输入有误!请重新输入!"<<endl;
			Sleep(1000);
			system("cls");
			login_uf();
		}
	}while(choose()!=0);
}