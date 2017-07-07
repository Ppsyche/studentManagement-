#include<iostream>
 #include<windows.h>
 #include<conio.h>
 #include<string.h>
 #include<stdlib.h>
 #include<iomanip>
 #include<stdio.h>
 #define M 12345
 #define N 12345
 using namespace std;



 typedef struct student_t
 {
     long int num;
     char name[7];
     char sex[3];
     int eng;
     int clang;
     int total;
     struct student_t *next;
 }G,*PP;



 int land();
 void ft();
 void f1(PP*H);
 void f2(PP H);
 void f3(PP H);
 void f4(PP*H);
 void f5(PP H);
 void read(PP*H);




main()
{
    PP H=NULL;
    int j,a,t;
    char ch,i;
    a=land();
    if(a==1)
    {
        GOTO:system("cls");
        cout<<"╔═════════════════════════════╗"<<endl;
        cout<<"║                                                          ║"<<endl;
        cout<<"║            ※ ★★ 欢迎使用学生管理系统★★ ※           ║"<<endl;
        cout<<"║                                                          ║"<<endl;
        cout<<"║  请选择您要进行的操作：                                  ║"<<endl;
        cout<<"║  ☆1.学生录入（初次使用请选择）                          ║"<<endl;
        cout<<"║  ☆2.学生浏览                                            ║"<<endl;
        cout<<"║  ☆3.学生查询                                            ║"<<endl;
        cout<<"║  ☆4.学生删除                                            ║"<<endl;
        cout<<"║  ☆5.成绩统计                                            ║"<<endl;
        cout<<"║  ☆0.退出                                                ║"<<endl;
        cout<<"║                                                          ║"<<endl;
        cout<<"║                                                          ║"<<endl;
        cout<<"╚═════════════════════════════╝"<<endl;
        cout<<" 请输入你的选择（0-5）"<<endl;
        i=getch();
        if(i>='0'&&i<='5')
        {
            if(i=='0')
                t=0;
            else if(i=='1')
                t=1;
            else if(i=='2')
                t=2;
            else if(i=='3')
                t=3;
            else if(i=='4')
                t=4;
            else if(i=='5')
                t=5;
            switch(t)
            {
                case 1:system("cls");
                    f1(&H);
                    goto GOTO;
                case 2:system("cls");
                    read(&H);
                    f2(H);
                    cout<<"请按任意键返回菜单"<<endl;
                    ch=getch();
                    goto GOTO;
                case 3:system("cls");
                    read(&H);
                    f3(H);
                    goto GOTO;
                case 4:system("cls");
                    read(&H);
                    f4(&H);
                    goto GOTO;
                case 5:system("cls");
                    read(&H);
                    f5(H);
                    goto GOTO;
            }
            GOTO7:system("cls");
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<"                      ╔══════════════╗"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ║     谢 谢 您 的 使 用      ║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ║           再 见            ║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ╚══════════════╝"<<endl;
            Sleep(3000);
            system("cls");
        }
        else
        {
            system("cls");
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<"                      ╔══════════════╗"<<endl;
            cout<<"                      ║                           x║"<<endl;
            cout<<"                      ║  你输入的选项不存在!!!!!   ║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ║      请确认后再输入        ║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ╚══════════════╝"<<endl;
            Sleep(3000);
            goto GOTO;
        }
    }
    else if(a==0)
    {
        system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      ╔══════════════╗"<<endl;
        cout<<"                      ║                           x║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║    你的账户已被锁定!!!!!   ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ╚══════════════╝"<<endl;
        Sleep(3000);
        goto GOTO7;
    }
    else
        goto GOTO7;
}






int land()//登陆
{
    char ch,a;
    int i,j,n,m;
    GOTO8:system("cls");
    cout<<"╔═════════════════════════════╗"<<endl;
    cout<<"║                                                          ║"<<endl;
    cout<<"║ $-----------------欢迎使用学生管理系统----------------$  ║"<<endl;
    cout<<"║                                                          ║"<<endl;
    cout<<"║                                                          ║"<<endl;
    cout<<"║  请选择您要进行的操作：                                  ║"<<endl;
    cout<<"║                                                          ║"<<endl;
    cout<<"║  ☆ 登陆 ☆----------------------------------------1     ║"<<endl;
    cout<<"║  ☆ 退出 ☆----------------------------------------0     ║"<<endl;
    cout<<"║                                                          ║"<<endl;
    cout<<"║                                                          ║"<<endl;
    cout<<"╚═════════════════════════════╝"<<endl;
    a=getch();
    if(a=='1')
    {
        system("cls");
        for(j=3;j>0;j--)
        {
            cout<<"请输入账号：";
            cin>>m;
            cout<<"请输入密码；";
            i=0;
            for(;(ch=getch())!='\r';)
		    {
                cout<<"*";
		        i=i*10+ch-'0';
            }
	     	if(i!=N||m!=M)
	     	{
		    	if(j>1)
			    {
                    system("cls");
                    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                    cout<<"                      ╔══════════════╗"<<endl;
                    cout<<"                      ║                           x║"<<endl;
                    cout<<"                      ║  你的账号和密码不匹配!!!!! ║"<<endl;
                    cout<<"                      ║                            ║"<<endl;
                    cout<<"                      ║      请确认后再输入        ║"<<endl;
                    cout<<"                      ║                            ║"<<endl;
                    cout<<"                      ╚══════════════╝"<<endl;
                    Sleep(3000);
                    system("cls");
			     }
		    	else
                {
                    system("cls");
                    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                    cout<<"                      ╔══════════════╗"<<endl;
                    cout<<"                      ║                           x║"<<endl;
                    cout<<"                      ║                            ║"<<endl;
                    cout<<"                      ║  你的账号和密码不匹配!!!!! ║"<<endl;
                    cout<<"                      ║                            ║"<<endl;
                    cout<<"                      ║                            ║"<<endl;
                    cout<<"                      ╚══════════════╝"<<endl;
                    Sleep(3000);
                    system("cls");
                }
	     	}
		    else
                return 1;

        }
	if(j==0)
		return 0;
    }
    else if(a=='0')
        return 2;
    else
    {
        system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      ╔══════════════╗"<<endl;
        cout<<"                      ║                           x║"<<endl;
        cout<<"                      ║  你输入的选项不存在!!!!!   ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║      请确认后再输入        ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ╚══════════════╝"<<endl;
        Sleep(3000);
        goto GOTO8;
    }
 }




void ft()//进度条
{
    system("cls");
    int i;
    for(i=0;i<7;i++)
         cout<<endl;
    cout<<"          正在处理中..."<<endl;
    cout<<"          ";
    for(i=1;i<=13;i++)
    {
        Sleep(200);
        cout<<"█";
    }
    system("cls");
}




void f1(PP*H)//录入
{
    struct student_t st[20];
    long int t_num;
    PP p,q,r;
    FILE *fp;
    int i=0,j,fg=1;
    char c;
    while(fg)
    {
        system("cls");
        cout<<"请输入学号：";
        cin>>st[i].num;
        cout<<"请输入学生姓名：";
        cin>>st[i].name;
        cout<<"请输入学生性别：";
        cin>>st[i].sex;
        cout<<"请输入学生英语成绩：";
        cin>>st[i].eng;
        cout<<"请输入学生c语言成绩：";
        cin>>st[i].clang;
        GOTO6:system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      ╔══════════════╗"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║      请问你是否继续        ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║     是（Y）   否（N）      ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ╚══════════════╝"<<endl;
        c=getch();
        if(c=='Y'||c=='y')
        {
            i++;
        }
        else if(c=='N'||c=='n')
        {
            fg=0;
            GOTO5:system("cls");
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<"                      ╔══════════════╗"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ║      请问你是否存盘        ║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ║     是（Y）   否（N）      ║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ╚══════════════╝"<<endl;
            c=getch();
            if(c=='Y'||c=='y')
            {
                system("cls");
                for(j=0;j<=i;j++)
                {
                    t_num=st[j].num;
                    p=q=*H;
                    while(p!=NULL)
                    {
                        if(p->num==t_num)
                        {
                            cout<<"你输入的第"<<j+1<<"项学号已存在";
							Sleep(2000);
                            return;
                        }
                        else
                        {q=p;p=p->next;}
                    }
                    r=(PP)malloc(sizeof(G));
                    r->next=NULL;
                    if(r==NULL)
                    {
                        cout<<"分配空间失败！！！";
                        return;
                    }
                    if(q==NULL)
                        *H=r;
                    else
                    {q->next=r;}
                    r->num=t_num;
                    strcpy(r->name,st[j].name);
                    strcpy(r->sex,st[j].sex);
                    r->eng=st[j].eng;
                    r->clang=st[j].clang;
                }
                if((fp=fopen("D:student.txt","a"))==NULL)
                {
                    system("cls");
                    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                    cout<<"                      ╔══════════════╗"<<endl;
                    cout<<"                      ║                           x║"<<endl;
                    cout<<"                      ║                            ║"<<endl;
                    cout<<"                      ║      文件打开失败!!!!!     ║"<<endl;
                    cout<<"                      ║                            ║"<<endl;
                    cout<<"                      ║                            ║"<<endl;
                    cout<<"                      ╚══════════════╝"<<endl;
                    Sleep(3000);
                    system("cls");
                    exit(0);
                }
                else
                {
                     for(j=0;j<=i;j++)
                    {
                        fprintf(fp,"%10d%8s%8s%8d%8d",st[j].num,st[j].name,st[j].sex,st[j].eng,st[j].clang);
                    }
                fclose(fp);
                ft();
                }
            }
            else if(c=='N'||c=='n')
            {
                return;
            }
            else
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                cout<<"                      ╔══════════════╗"<<endl;
                cout<<"                      ║                           x║"<<endl;
                cout<<"                      ║                            ║"<<endl;
                cout<<"                      ║       请输入Y(y)或N(n)     ║"<<endl;
                cout<<"                      ║                            ║"<<endl;
                cout<<"                      ║                            ║"<<endl;
                cout<<"                      ╚══════════════╝"<<endl;
                Sleep(3000);
                system("cls");
                goto GOTO5;
            }
        }
        else
        {
            system("cls");
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<"                      ╔══════════════╗"<<endl;
            cout<<"                      ║                           x║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ║       请输入Y(y)或N(n)     ║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ╚══════════════╝"<<endl;
            Sleep(3000);
            system("cls");
            goto GOTO6;
        }
    }


}



void f2(PP H)//显示
{
    PP p;
    p=H;
    cout<<"  学号       姓名      性别    英语    c语言"<<endl;
    while(p!=NULL)
    {
        cout<<p->num<<setw(10)<<p->name<<setw(8)<<p->sex<<setw(8)<<p->eng<<setw(8)<<p->clang<<endl;
        p=p->next;
    }
    cout<<endl;
}




void f3(PP H)//查找
{
    int f;
    char ch,n;
    int num;
    PP p;
    char name[9];
    GOTO11:system("cls");
    cout<<"╔═══════════════════════════╗"<<endl;
    cout<<"║                                                      ║"<<endl;
    cout<<"║                                                      ║"<<endl;
    cout<<"║  请选择您要的查询方法：                              ║"<<endl;
    cout<<"║                                                      ║"<<endl;
    cout<<"║  ☆ 学号 ☆------------------------------------1     ║"<<endl;
    cout<<"║  ☆ 姓名 ☆------------------------------------2     ║"<<endl;
    cout<<"║  ☆ 返回主菜单 ☆------------------------------0     ║"<<endl;
    cout<<"║                                                      ║"<<endl;
    cout<<"║                                                      ║"<<endl;
    cout<<"╚═══════════════════════════╝"<<endl;
    n=getch();
    if(n=='1')
    {
        GOTO6:system("cls");
        f=1;
        cout<<"请输入您要查询的学号：";
        cin>>num;
        p=H;
        ft();
        while(p!=NULL&&f)
        {
            if(p->num==num)
            {
                cout<<"学号："<<p->num<<endl;
                cout<<"姓名："<<p->name<<endl;
                cout<<"性别："<<p->sex<<endl;
                cout<<"英语："<<p->eng<<endl;
                cout<<"c语言："<<p->clang<<endl<<endl;
                f=0;
                cout<<"请按任意键返回菜单"<<endl;
                ch=getch();
            }
            else
                p=p->next;
        }
        if(f)
        {
            system("cls");
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<"                      ╔══════════════╗"<<endl;
            cout<<"                      ║                           x║"<<endl;
            cout<<"                      ║  没有查询到您要的结果！！  ║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ║      请确认后再输入        ║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ╚══════════════╝"<<endl;
            Sleep(3000);
            goto GOTO6;
        }
        goto GOTO11;
    }
    else if(n=='2')
    {
        GOTO4:system("cls");
        f=1;
        cout<<"请输入要查询的姓名：";
        cin>>name;
        p=H;
        ft();
        while(p!=NULL&&f)
        {
            if(strcmp(p->name,name)==0)
            {
                cout<<"学号："<<p->num<<endl;
                cout<<"姓名："<<p->name<<endl;
                cout<<"性别："<<p->sex<<endl;
                cout<<"英语："<<p->eng<<endl;
                cout<<"c语言："<<p->clang<<endl<<endl;
                f=0;
                cout<<"请按任意键返回菜单"<<endl;
                ch=getch();
            }
            else
                p=p->next;
        }
        if(f)
        {
            system("cls");
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<"                      ╔══════════════╗"<<endl;
            cout<<"                      ║                           x║"<<endl;
            cout<<"                      ║  没有查询到您要的结果！！  ║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ║      请确认后再输入        ║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ╚══════════════╝"<<endl;
            Sleep(3000);
            goto GOTO4;
        }
        goto GOTO11;
    }
    else if(n=='0')
        return;
    else
    {
        system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      ╔══════════════╗"<<endl;
        cout<<"                      ║                           x║"<<endl;
        cout<<"                      ║  你输入的选项不存在!!!!!   ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║      请确认后再输入        ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ╚══════════════╝"<<endl;
        Sleep(3000);
        goto GOTO11;
    }
}



void f4(PP*H)//删除
{
    int f,i,j;
    long int num;
    PP p,q,r;
    char name[9];
    char m,n;
    char st[20];
    FILE *fp;
    GOTO2:system("cls");
    cout<<"╔═══════════════════════════╗"<<endl;
    cout<<"║                                                      ║"<<endl;
    cout<<"║                                                      ║"<<endl;
    cout<<"║  请选择您要的删除方法：                              ║"<<endl;
    cout<<"║                                                      ║"<<endl;
    cout<<"║  ☆ 学号 ☆------------------------------------1     ║"<<endl;
    cout<<"║  ☆ 姓名 ☆------------------------------------2     ║"<<endl;
    cout<<"║  ☆ 返回主菜单 ☆------------------------------0     ║"<<endl;
    cout<<"║                                                      ║"<<endl;
    cout<<"║                                                      ║"<<endl;
    cout<<"╚═══════════════════════════╝"<<endl;
    n=getch();
    system("cls");
    if(n=='1')
    {
        GOTO3:cout<<"请输入要删除的学生学号：";
        cin>>num;
        f=1;
        GOTO5:system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      ╔══════════════╗"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║   请问你是否从文件中删除   ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║     是（Y）   否（N）      ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ╚══════════════╝"<<endl;
        m=getch();
        system("cls");
        if(m=='Y'||m=='y')
        {
            p=q=*H;
            ft();
            while(p!=NULL&&f)
            {
                if(p->num==num)
                {
                    if(p==*H)
                    {
                        *H=p->next;
                        free(p);
                    }
                    else
                    {
                        q->next=p->next;
                        free(p);
                    }
                f=0;
                }
                else
                {
                    q=p;
                    p=p->next;
                }
            }
            if(f)
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                cout<<"                   ╔═════════════════╗"<<endl;
                cout<<"                   ║                                 x║"<<endl;
                cout<<"                   ║   没有找到可以删除的数据！！！   ║"<<endl;
                cout<<"                   ║                                  ║"<<endl;
                cout<<"                   ║        请确认后再输入            ║"<<endl;
                cout<<"                   ║                                  ║"<<endl;
                cout<<"                   ╚═════════════════╝"<<endl;
                Sleep(3000);
                system("cls");
                goto GOTO3;
            }
            system("cls");
            if((fp=fopen("D:student.txt","w"))==NULL)
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                cout<<"                      ╔══════════════╗"<<endl;
                cout<<"                      ║                           x║"<<endl;
                cout<<"                      ║                            ║"<<endl;
                cout<<"                      ║      文件打开失败!!!!!     ║"<<endl;
                cout<<"                      ║                            ║"<<endl;
                cout<<"                      ║                            ║"<<endl;
                cout<<"                      ╚══════════════╝"<<endl;
                Sleep(3000);
                system("cls");
                exit(0);
            }
            else
            {
                r=*H;
                while(r!=NULL)
                {
                    fprintf(fp,"%10d%8s%8s%8d%8d",r->num,r->name,r->sex,r->eng,r->clang);
                    r=r->next;
                }
            }
                fclose(fp);
                goto GOTO2;
           }
           else if(m=='N'||m=='n')
           {
               goto GOTO2;
           }
           else
           {
               system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                cout<<"                      ╔══════════════╗"<<endl;
                cout<<"                      ║                           x║"<<endl;
                cout<<"                      ║                            ║"<<endl;
                cout<<"                      ║       请输入Y(y)或N(n)     ║"<<endl;
                cout<<"                      ║                            ║"<<endl;
                cout<<"                      ║                            ║"<<endl;
                cout<<"                      ╚══════════════╝"<<endl;
                Sleep(3000);
                system("cls");
               goto GOTO5;
           }
    }
    else if(n=='2')
    {
        GOTO4:cout<<"请输入要删除的学生姓名：";
        cin>>name;
        f=1;
        GOTO9:system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      ╔══════════════╗"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║   请问你是否从文件中删除   ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║     是（Y）   否（N）      ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ╚══════════════╝"<<endl;
        m=getch();
        system("cls");
        if(m=='Y'||m=='y')
        {
            p=q=*H;
            ft();
            while(p!=NULL&&f)
            {
                if(strcmp(p->name,name)==0)
                {
                    if(p==*H)
                    {
                        *H=p->next;
                        free(p);
                    }
                    else
                    {
                        q->next=p->next;
                        free(p);
                    }
                f=0;
                }
                else
                {
                    q=p;
                    p=p->next;
                }
            }
            if(f)
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                cout<<"                   ╔═════════════════╗"<<endl;
                cout<<"                   ║                                 x║"<<endl;
                cout<<"                   ║   没有找到可以删除的数据！！！   ║"<<endl;
                cout<<"                   ║                                  ║"<<endl;
                cout<<"                   ║        请确认后再输入            ║"<<endl;
                cout<<"                   ║                                  ║"<<endl;
                cout<<"                   ╚═════════════════╝"<<endl;
                Sleep(3000);
                system("cls");
                goto GOTO4;
            }
            system("cls");
            if((fp=fopen("D:student.txt","w"))==NULL)
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                cout<<"                      ╔══════════════╗"<<endl;
                cout<<"                      ║                           x║"<<endl;
                cout<<"                      ║                            ║"<<endl;
                cout<<"                      ║      文件打开失败!!!!!     ║"<<endl;
                cout<<"                      ║                            ║"<<endl;
                cout<<"                      ║                            ║"<<endl;
                cout<<"                      ╚══════════════╝"<<endl;
                Sleep(3000);
                system("cls");
                exit(0);
            }
            else
            {
                r=*H;
                while(r!=NULL)
                {
                    fprintf(fp,"%10d%8s%8s%8d%8d",r->num,r->name,r->sex,r->eng,r->clang);
                    r=r->next;
                }
            }
                fclose(fp);
           }
           else if(m=='N'||m=='n')
           {
               goto GOTO2;
           }
           else
           {
               system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                cout<<"                      ╔══════════════╗"<<endl;
                cout<<"                      ║                           x║"<<endl;
                cout<<"                      ║                            ║"<<endl;
                cout<<"                      ║       请输入Y(y)或N(n)     ║"<<endl;
                cout<<"                      ║                            ║"<<endl;
                cout<<"                      ║                            ║"<<endl;
                cout<<"                      ╚══════════════╝"<<endl;
                Sleep(3000);
                system("cls");
               goto GOTO9;
           }
           goto GOTO2;
    }
    else if(n=='0')
        return;
    else
    {
        system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      ╔══════════════╗"<<endl;
        cout<<"                      ║                           x║"<<endl;
        cout<<"                      ║  你输入的选项不存在!!!!!   ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║      请确认后再输入        ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ╚══════════════╝"<<endl;
        Sleep(3000);
        goto GOTO2;
    }
}



void f5(PP H)
{
    int i=0,a,b,j,c;
    long double s1=0,s2=0,s3=0;
    long int t;
    char ch,e;
    char q[20];
    struct student_t st[90];
    PP p;
    p=H;
    while(p!=NULL)
    {
        st[i].num=p->num;
        strcpy(st[i].name,p->name);
        strcpy(st[i].sex,p->sex);
        st[i].eng=p->eng;
        st[i].clang=p->clang;
        st[i].total=st[i].eng+st[i].clang;
        cout<<st[i].num;
        p=p->next;
        i++;
    }
    for(j=0;j<i;j++)
    {
        s1=s1+st[j].eng;
        s2=s2+st[j].clang;
        s3=s3+st[j].total;
    }
    s1=s1/i;
    s2=s2/i;
    s3=s3/i;
    GOTO1:system("cls");
    cout<<"╔═══════════════════════════╗"<<endl;
    cout<<"║                                                      ║"<<endl;
    cout<<"║                                                      ║"<<endl;
    cout<<"║  请选择您要进行排序的方法：                          ║"<<endl;
    cout<<"║                                                      ║"<<endl;
    cout<<"║  ☆ 按总分 ☆----------------------------------1     ║"<<endl;
    cout<<"║  ☆ 按英语成绩 ☆------------------------------2     ║"<<endl;
    cout<<"║  ☆ 按C语言成绩 ☆-----------------------------3     ║"<<endl;
    cout<<"║  ☆ 返回主菜单 ☆------------------------------0     ║"<<endl;
    cout<<"║                                                      ║"<<endl;
    cout<<"║                                                      ║"<<endl;
    cout<<"╚═══════════════════════════╝"<<endl;
    ch=getch();
    system("cls");
    if(ch>='0'&&ch<='3')
    {
        if(ch=='0')
            c=0;
        else if(ch=='1')
            c=1;
        else if(ch=='2')
            c=2;
        else if(ch=='3')
            c=3;
        switch(c)
        {
            case 1:system("cls");
                for(a=0;a<i;a++)
                {
                    for(b=0;b<=i-a;b++)
                    {
                        if(st[b].total<st[b+1].total)
                        {
                            t=st[b].num;
                            st[b].num=st[b+1].num;
                            st[b+1].num=t;
                            strcpy(q,st[b].name);
                            strcpy(st[b].name,st[b+1].name);
                            strcpy(st[b+1].name,q);
                            strcpy(q,st[b].sex);
                            strcpy(st[b].sex,st[b+1].sex);
                            strcpy(st[b+1].sex,q);
                            t=st[b].eng;
                            st[b].eng=st[b+1].eng;
                            st[b+1].eng=t;
                            t=st[b].clang;
                            st[b].clang=st[b+1].clang;
                            st[b+1].clang=t;
                            t=st[b].total;
                            st[b].total=st[b+1].total;
                            st[b+1].total=t;
                        }
                    }
                }
                system("cls");
                ft();
                cout<<"┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓"<<endl;
                cout<<"┃                                                                ┃"<<endl;
                cout<<"┃                 ★ ★     成  绩  单    ★ ★                  ┃"<<endl;
                cout<<"┃                                                                ┃"<<endl;
                cout<<"┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫"<<endl;
                cout<<"┃     学号      姓名    性别    英语    c语言    总分    名次    ┃"<<endl;
                cout<<"┃                                                                ┃"<<endl;
                for(j=0;j<i;j++)
                {
                    cout<<"┃  "<<st[j].num<<setw(10)<<st[j].name<<setw(7)<<st[j].sex<<setw(8)<<st[j].eng<<setw(8)<<st[j].clang<<setw(8)<<st[j].total<<setw(8)<<j+1<<"     ┃"<<endl;
                }
                cout<<"┃          平  均  分             "<<s1<<setw(8)<<s2<<setw(8)<<s3<<"           ┃"<<endl;
                cout<<"┃                                                                ┃"<<endl;
                cout<<"┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛"<<endl;
                cout<<endl<<endl<<"请按任意键继续";
                e=getch();
                goto GOTO1;
            case 2:system("cls");
                for(a=0;a<i;a++)
                {
                    for(b=0;b<=i-a;b++)
                    {
                        if(st[b].eng<st[b+1].eng)
                        {
                            t=st[b].num;
                            st[b].num=st[b+1].num;
                            st[b+1].num=t;
                            strcpy(q,st[b].name);
                            strcpy(st[b].name,st[b+1].name);
                            strcpy(st[b+1].name,q);
                            strcpy(q,st[b].sex);
                            strcpy(st[b].sex,st[b+1].sex);
                            strcpy(st[b+1].sex,q);
                            t=st[b].eng;
                            st[b].eng=st[b+1].eng;
                            st[b+1].eng=t;
                            t=st[b].clang;
                            st[b].clang=st[b+1].clang;
                            st[b+1].clang=t;
                            t=st[b].total;
                            st[b].total=st[b+1].total;
                            st[b+1].total=t;
                        }
                    }
                }
                system("cls");
                ft();
                cout<<"┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓"<<endl;
                cout<<"┃                                                                ┃"<<endl;
                cout<<"┃                 ★ ★     成  绩  单    ★ ★                  ┃"<<endl;
                cout<<"┃                                                                ┃"<<endl;
                cout<<"┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫"<<endl;
                cout<<"┃     学号      姓名    性别    英语    c语言    总分    名次    ┃"<<endl;
                cout<<"┃                                                                ┃"<<endl;
                for(j=0;j<i;j++)
                {
                    cout<<"┃  "<<st[j].num<<setw(10)<<st[j].name<<setw(7)<<st[j].sex<<setw(8)<<st[j].eng<<setw(8)<<st[j].clang<<setw(8)<<st[j].total<<setw(8)<<j+1<<"     ┃"<<endl;
                }
                cout<<"┃          平  均  分             "<<s1<<setw(8)<<s2<<setw(8)<<s3<<"           ┃"<<endl;
                cout<<"┃                                                                ┃"<<endl;
                cout<<"┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛"<<endl;
                cout<<endl<<endl<<"请按任意键继续";
                e=getch();
                goto GOTO1;
            case 3:system("cls");
                for(a=0;a<i;a++)
                {
                    for(b=0;b<=i-a;b++)
                    {
                        if(st[b].clang<st[b+1].clang)
                        {
                            t=st[b].num;
                            st[b].num=st[b+1].num;
                            st[b+1].num=t;
                            strcpy(q,st[b].name);
                            strcpy(st[b].name,st[b+1].name);
                            strcpy(st[b+1].name,q);
                            strcpy(q,st[b].sex);
                            strcpy(st[b].sex,st[b+1].sex);
                            strcpy(st[b+1].sex,q);
                            t=st[b].eng;
                            st[b].eng=st[b+1].eng;
                            st[b+1].eng=t;
                            t=st[b].clang;
                            st[b].clang=st[b+1].clang;
                            st[b+1].clang=t;
                            t=st[b].total;
                            st[b].total=st[b+1].total;
                            st[b+1].total=t;
                        }
                    }
                }
                system("cls");
                ft();
                cout<<"┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓"<<endl;
                cout<<"┃                                                                ┃"<<endl;
                cout<<"┃                 ★ ★     成  绩  单    ★ ★                  ┃"<<endl;
                cout<<"┃                                                                ┃"<<endl;
                cout<<"┣━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┫"<<endl;
                cout<<"┃     学号      姓名    性别    英语    c语言    总分    名次    ┃"<<endl;
                cout<<"┃                                                                ┃"<<endl;
                for(j=0;j<i;j++)
                {
                    cout<<"┃  "<<st[j].num<<setw(10)<<st[j].name<<setw(7)<<st[j].sex<<setw(8)<<st[j].eng<<setw(8)<<st[j].clang<<setw(8)<<st[j].total<<setw(8)<<j+1<<"     ┃"<<endl;
                }
                cout<<"┃          平  均  分             "<<s1<<setw(8)<<s2<<setw(8)<<s3<<"           ┃"<<endl;
                cout<<"┃                                                                ┃"<<endl;
                cout<<"┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛"<<endl;
                cout<<endl<<endl<<"请按任意键继续";
                e=getch();
                goto GOTO1;
        }
    }
    else
    {

            system("cls");
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<"                      ╔══════════════╗"<<endl;
            cout<<"                      ║                           x║"<<endl;
            cout<<"                      ║  你输入的选项不存在!!!!!   ║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ║      请确认后再输入        ║"<<endl;
            cout<<"                      ║                            ║"<<endl;
            cout<<"                      ╚══════════════╝"<<endl;
            Sleep(3000);
            goto GOTO1;
    }
}


void read(PP*H)//读取
{
    long int s_num;
    int i;
    FILE *fp;
    PP p,q,r;
    if((fp=fopen("D:student.txt","r"))==NULL)
    {
        system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      ╔══════════════╗"<<endl;
        cout<<"                      ║                           x║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║      文件打开失败!!!!!     ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ║                            ║"<<endl;
        cout<<"                      ╚══════════════╝"<<endl;
        Sleep(3000);
        system("cls");
        return;
    }
    else
    {
        for(i=0;i<=100;i++)
        {
            fscanf(fp,"%10d",&s_num);
            p=q=*H;
            while(p!=NULL)
            {
                if(p->num==s_num)
                {
                    return;
                }
                else
                {q=p;p=p->next;}
            }
            r=(PP)malloc(sizeof(G));
            r->next=NULL;
            if(r==NULL)
            {
                cout<<"分配空间失败！！！";
                return;
            }
            if(q==NULL)
            *H=r;
            else
            {q->next=r;}
            r->num=s_num;
            fscanf(fp,"%8s%8s%8d%8d",&r->name,&r->sex,&r->eng,&r->clang);
        }
        fclose(fp);
    }

}

