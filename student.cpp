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
        cout<<"�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
        cout<<"�U                                                          �U"<<endl;
        cout<<"�U            �� ��� ��ӭʹ��ѧ������ϵͳ��� ��           �U"<<endl;
        cout<<"�U                                                          �U"<<endl;
        cout<<"�U  ��ѡ����Ҫ���еĲ�����                                  �U"<<endl;
        cout<<"�U  ��1.ѧ��¼�루����ʹ����ѡ��                          �U"<<endl;
        cout<<"�U  ��2.ѧ�����                                            �U"<<endl;
        cout<<"�U  ��3.ѧ����ѯ                                            �U"<<endl;
        cout<<"�U  ��4.ѧ��ɾ��                                            �U"<<endl;
        cout<<"�U  ��5.�ɼ�ͳ��                                            �U"<<endl;
        cout<<"�U  ��0.�˳�                                                �U"<<endl;
        cout<<"�U                                                          �U"<<endl;
        cout<<"�U                                                          �U"<<endl;
        cout<<"�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
        cout<<" ���������ѡ��0-5��"<<endl;
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
                    cout<<"�밴��������ز˵�"<<endl;
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
            cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �U     л л �� �� ʹ ��      �U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �U           �� ��            �U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
            Sleep(3000);
            system("cls");
        }
        else
        {
            system("cls");
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
            cout<<"                      �U                           x�U"<<endl;
            cout<<"                      �U  �������ѡ�����!!!!!   �U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �U      ��ȷ�Ϻ�������        �U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
            Sleep(3000);
            goto GOTO;
        }
    }
    else if(a==0)
    {
        system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
        cout<<"                      �U                           x�U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U    ����˻��ѱ�����!!!!!   �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
        Sleep(3000);
        goto GOTO7;
    }
    else
        goto GOTO7;
}






int land()//��½
{
    char ch,a;
    int i,j,n,m;
    GOTO8:system("cls");
    cout<<"�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
    cout<<"�U                                                          �U"<<endl;
    cout<<"�U $-----------------��ӭʹ��ѧ������ϵͳ----------------$  �U"<<endl;
    cout<<"�U                                                          �U"<<endl;
    cout<<"�U                                                          �U"<<endl;
    cout<<"�U  ��ѡ����Ҫ���еĲ�����                                  �U"<<endl;
    cout<<"�U                                                          �U"<<endl;
    cout<<"�U  �� ��½ ��----------------------------------------1     �U"<<endl;
    cout<<"�U  �� �˳� ��----------------------------------------0     �U"<<endl;
    cout<<"�U                                                          �U"<<endl;
    cout<<"�U                                                          �U"<<endl;
    cout<<"�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
    a=getch();
    if(a=='1')
    {
        system("cls");
        for(j=3;j>0;j--)
        {
            cout<<"�������˺ţ�";
            cin>>m;
            cout<<"���������룻";
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
                    cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
                    cout<<"                      �U                           x�U"<<endl;
                    cout<<"                      �U  ����˺ź����벻ƥ��!!!!! �U"<<endl;
                    cout<<"                      �U                            �U"<<endl;
                    cout<<"                      �U      ��ȷ�Ϻ�������        �U"<<endl;
                    cout<<"                      �U                            �U"<<endl;
                    cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
                    Sleep(3000);
                    system("cls");
			     }
		    	else
                {
                    system("cls");
                    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                    cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
                    cout<<"                      �U                           x�U"<<endl;
                    cout<<"                      �U                            �U"<<endl;
                    cout<<"                      �U  ����˺ź����벻ƥ��!!!!! �U"<<endl;
                    cout<<"                      �U                            �U"<<endl;
                    cout<<"                      �U                            �U"<<endl;
                    cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
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
        cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
        cout<<"                      �U                           x�U"<<endl;
        cout<<"                      �U  �������ѡ�����!!!!!   �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U      ��ȷ�Ϻ�������        �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
        Sleep(3000);
        goto GOTO8;
    }
 }




void ft()//������
{
    system("cls");
    int i;
    for(i=0;i<7;i++)
         cout<<endl;
    cout<<"          ���ڴ�����..."<<endl;
    cout<<"          ";
    for(i=1;i<=13;i++)
    {
        Sleep(200);
        cout<<"��";
    }
    system("cls");
}




void f1(PP*H)//¼��
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
        cout<<"������ѧ�ţ�";
        cin>>st[i].num;
        cout<<"������ѧ��������";
        cin>>st[i].name;
        cout<<"������ѧ���Ա�";
        cin>>st[i].sex;
        cout<<"������ѧ��Ӣ��ɼ���";
        cin>>st[i].eng;
        cout<<"������ѧ��c���Գɼ���";
        cin>>st[i].clang;
        GOTO6:system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U      �������Ƿ����        �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U     �ǣ�Y��   ��N��      �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
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
            cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �U      �������Ƿ����        �U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �U     �ǣ�Y��   ��N��      �U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
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
                            cout<<"������ĵ�"<<j+1<<"��ѧ���Ѵ���";
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
                        cout<<"����ռ�ʧ�ܣ�����";
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
                    cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
                    cout<<"                      �U                           x�U"<<endl;
                    cout<<"                      �U                            �U"<<endl;
                    cout<<"                      �U      �ļ���ʧ��!!!!!     �U"<<endl;
                    cout<<"                      �U                            �U"<<endl;
                    cout<<"                      �U                            �U"<<endl;
                    cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
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
                cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
                cout<<"                      �U                           x�U"<<endl;
                cout<<"                      �U                            �U"<<endl;
                cout<<"                      �U       ������Y(y)��N(n)     �U"<<endl;
                cout<<"                      �U                            �U"<<endl;
                cout<<"                      �U                            �U"<<endl;
                cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
                Sleep(3000);
                system("cls");
                goto GOTO5;
            }
        }
        else
        {
            system("cls");
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
            cout<<"                      �U                           x�U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �U       ������Y(y)��N(n)     �U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
            Sleep(3000);
            system("cls");
            goto GOTO6;
        }
    }


}



void f2(PP H)//��ʾ
{
    PP p;
    p=H;
    cout<<"  ѧ��       ����      �Ա�    Ӣ��    c����"<<endl;
    while(p!=NULL)
    {
        cout<<p->num<<setw(10)<<p->name<<setw(8)<<p->sex<<setw(8)<<p->eng<<setw(8)<<p->clang<<endl;
        p=p->next;
    }
    cout<<endl;
}




void f3(PP H)//����
{
    int f;
    char ch,n;
    int num;
    PP p;
    char name[9];
    GOTO11:system("cls");
    cout<<"�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
    cout<<"�U                                                      �U"<<endl;
    cout<<"�U                                                      �U"<<endl;
    cout<<"�U  ��ѡ����Ҫ�Ĳ�ѯ������                              �U"<<endl;
    cout<<"�U                                                      �U"<<endl;
    cout<<"�U  �� ѧ�� ��------------------------------------1     �U"<<endl;
    cout<<"�U  �� ���� ��------------------------------------2     �U"<<endl;
    cout<<"�U  �� �������˵� ��------------------------------0     �U"<<endl;
    cout<<"�U                                                      �U"<<endl;
    cout<<"�U                                                      �U"<<endl;
    cout<<"�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
    n=getch();
    if(n=='1')
    {
        GOTO6:system("cls");
        f=1;
        cout<<"��������Ҫ��ѯ��ѧ�ţ�";
        cin>>num;
        p=H;
        ft();
        while(p!=NULL&&f)
        {
            if(p->num==num)
            {
                cout<<"ѧ�ţ�"<<p->num<<endl;
                cout<<"������"<<p->name<<endl;
                cout<<"�Ա�"<<p->sex<<endl;
                cout<<"Ӣ�"<<p->eng<<endl;
                cout<<"c���ԣ�"<<p->clang<<endl<<endl;
                f=0;
                cout<<"�밴��������ز˵�"<<endl;
                ch=getch();
            }
            else
                p=p->next;
        }
        if(f)
        {
            system("cls");
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
            cout<<"                      �U                           x�U"<<endl;
            cout<<"                      �U  û�в�ѯ����Ҫ�Ľ������  �U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �U      ��ȷ�Ϻ�������        �U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
            Sleep(3000);
            goto GOTO6;
        }
        goto GOTO11;
    }
    else if(n=='2')
    {
        GOTO4:system("cls");
        f=1;
        cout<<"������Ҫ��ѯ��������";
        cin>>name;
        p=H;
        ft();
        while(p!=NULL&&f)
        {
            if(strcmp(p->name,name)==0)
            {
                cout<<"ѧ�ţ�"<<p->num<<endl;
                cout<<"������"<<p->name<<endl;
                cout<<"�Ա�"<<p->sex<<endl;
                cout<<"Ӣ�"<<p->eng<<endl;
                cout<<"c���ԣ�"<<p->clang<<endl<<endl;
                f=0;
                cout<<"�밴��������ز˵�"<<endl;
                ch=getch();
            }
            else
                p=p->next;
        }
        if(f)
        {
            system("cls");
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
            cout<<"                      �U                           x�U"<<endl;
            cout<<"                      �U  û�в�ѯ����Ҫ�Ľ������  �U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �U      ��ȷ�Ϻ�������        �U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
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
        cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
        cout<<"                      �U                           x�U"<<endl;
        cout<<"                      �U  �������ѡ�����!!!!!   �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U      ��ȷ�Ϻ�������        �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
        Sleep(3000);
        goto GOTO11;
    }
}



void f4(PP*H)//ɾ��
{
    int f,i,j;
    long int num;
    PP p,q,r;
    char name[9];
    char m,n;
    char st[20];
    FILE *fp;
    GOTO2:system("cls");
    cout<<"�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
    cout<<"�U                                                      �U"<<endl;
    cout<<"�U                                                      �U"<<endl;
    cout<<"�U  ��ѡ����Ҫ��ɾ��������                              �U"<<endl;
    cout<<"�U                                                      �U"<<endl;
    cout<<"�U  �� ѧ�� ��------------------------------------1     �U"<<endl;
    cout<<"�U  �� ���� ��------------------------------------2     �U"<<endl;
    cout<<"�U  �� �������˵� ��------------------------------0     �U"<<endl;
    cout<<"�U                                                      �U"<<endl;
    cout<<"�U                                                      �U"<<endl;
    cout<<"�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
    n=getch();
    system("cls");
    if(n=='1')
    {
        GOTO3:cout<<"������Ҫɾ����ѧ��ѧ�ţ�";
        cin>>num;
        f=1;
        GOTO5:system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U   �������Ƿ���ļ���ɾ��   �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U     �ǣ�Y��   ��N��      �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
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
                cout<<"                   �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
                cout<<"                   �U                                 x�U"<<endl;
                cout<<"                   �U   û���ҵ�����ɾ�������ݣ�����   �U"<<endl;
                cout<<"                   �U                                  �U"<<endl;
                cout<<"                   �U        ��ȷ�Ϻ�������            �U"<<endl;
                cout<<"                   �U                                  �U"<<endl;
                cout<<"                   �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
                Sleep(3000);
                system("cls");
                goto GOTO3;
            }
            system("cls");
            if((fp=fopen("D:student.txt","w"))==NULL)
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
                cout<<"                      �U                           x�U"<<endl;
                cout<<"                      �U                            �U"<<endl;
                cout<<"                      �U      �ļ���ʧ��!!!!!     �U"<<endl;
                cout<<"                      �U                            �U"<<endl;
                cout<<"                      �U                            �U"<<endl;
                cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
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
                cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
                cout<<"                      �U                           x�U"<<endl;
                cout<<"                      �U                            �U"<<endl;
                cout<<"                      �U       ������Y(y)��N(n)     �U"<<endl;
                cout<<"                      �U                            �U"<<endl;
                cout<<"                      �U                            �U"<<endl;
                cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
                Sleep(3000);
                system("cls");
               goto GOTO5;
           }
    }
    else if(n=='2')
    {
        GOTO4:cout<<"������Ҫɾ����ѧ��������";
        cin>>name;
        f=1;
        GOTO9:system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U   �������Ƿ���ļ���ɾ��   �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U     �ǣ�Y��   ��N��      �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
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
                cout<<"                   �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
                cout<<"                   �U                                 x�U"<<endl;
                cout<<"                   �U   û���ҵ�����ɾ�������ݣ�����   �U"<<endl;
                cout<<"                   �U                                  �U"<<endl;
                cout<<"                   �U        ��ȷ�Ϻ�������            �U"<<endl;
                cout<<"                   �U                                  �U"<<endl;
                cout<<"                   �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
                Sleep(3000);
                system("cls");
                goto GOTO4;
            }
            system("cls");
            if((fp=fopen("D:student.txt","w"))==NULL)
            {
                system("cls");
                cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
                cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
                cout<<"                      �U                           x�U"<<endl;
                cout<<"                      �U                            �U"<<endl;
                cout<<"                      �U      �ļ���ʧ��!!!!!     �U"<<endl;
                cout<<"                      �U                            �U"<<endl;
                cout<<"                      �U                            �U"<<endl;
                cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
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
                cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
                cout<<"                      �U                           x�U"<<endl;
                cout<<"                      �U                            �U"<<endl;
                cout<<"                      �U       ������Y(y)��N(n)     �U"<<endl;
                cout<<"                      �U                            �U"<<endl;
                cout<<"                      �U                            �U"<<endl;
                cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
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
        cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
        cout<<"                      �U                           x�U"<<endl;
        cout<<"                      �U  �������ѡ�����!!!!!   �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U      ��ȷ�Ϻ�������        �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
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
    cout<<"�X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
    cout<<"�U                                                      �U"<<endl;
    cout<<"�U                                                      �U"<<endl;
    cout<<"�U  ��ѡ����Ҫ��������ķ�����                          �U"<<endl;
    cout<<"�U                                                      �U"<<endl;
    cout<<"�U  �� ���ܷ� ��----------------------------------1     �U"<<endl;
    cout<<"�U  �� ��Ӣ��ɼ� ��------------------------------2     �U"<<endl;
    cout<<"�U  �� ��C���Գɼ� ��-----------------------------3     �U"<<endl;
    cout<<"�U  �� �������˵� ��------------------------------0     �U"<<endl;
    cout<<"�U                                                      �U"<<endl;
    cout<<"�U                                                      �U"<<endl;
    cout<<"�^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
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
                cout<<"��������������������������������������������������������������������"<<endl;
                cout<<"��                                                                ��"<<endl;
                cout<<"��                 �� ��     ��  ��  ��    �� ��                  ��"<<endl;
                cout<<"��                                                                ��"<<endl;
                cout<<"�ǩ�����������������������������������������������������������������"<<endl;
                cout<<"��     ѧ��      ����    �Ա�    Ӣ��    c����    �ܷ�    ����    ��"<<endl;
                cout<<"��                                                                ��"<<endl;
                for(j=0;j<i;j++)
                {
                    cout<<"��  "<<st[j].num<<setw(10)<<st[j].name<<setw(7)<<st[j].sex<<setw(8)<<st[j].eng<<setw(8)<<st[j].clang<<setw(8)<<st[j].total<<setw(8)<<j+1<<"     ��"<<endl;
                }
                cout<<"��          ƽ  ��  ��             "<<s1<<setw(8)<<s2<<setw(8)<<s3<<"           ��"<<endl;
                cout<<"��                                                                ��"<<endl;
                cout<<"��������������������������������������������������������������������"<<endl;
                cout<<endl<<endl<<"�밴���������";
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
                cout<<"��������������������������������������������������������������������"<<endl;
                cout<<"��                                                                ��"<<endl;
                cout<<"��                 �� ��     ��  ��  ��    �� ��                  ��"<<endl;
                cout<<"��                                                                ��"<<endl;
                cout<<"�ǩ�����������������������������������������������������������������"<<endl;
                cout<<"��     ѧ��      ����    �Ա�    Ӣ��    c����    �ܷ�    ����    ��"<<endl;
                cout<<"��                                                                ��"<<endl;
                for(j=0;j<i;j++)
                {
                    cout<<"��  "<<st[j].num<<setw(10)<<st[j].name<<setw(7)<<st[j].sex<<setw(8)<<st[j].eng<<setw(8)<<st[j].clang<<setw(8)<<st[j].total<<setw(8)<<j+1<<"     ��"<<endl;
                }
                cout<<"��          ƽ  ��  ��             "<<s1<<setw(8)<<s2<<setw(8)<<s3<<"           ��"<<endl;
                cout<<"��                                                                ��"<<endl;
                cout<<"��������������������������������������������������������������������"<<endl;
                cout<<endl<<endl<<"�밴���������";
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
                cout<<"��������������������������������������������������������������������"<<endl;
                cout<<"��                                                                ��"<<endl;
                cout<<"��                 �� ��     ��  ��  ��    �� ��                  ��"<<endl;
                cout<<"��                                                                ��"<<endl;
                cout<<"�ǩ�����������������������������������������������������������������"<<endl;
                cout<<"��     ѧ��      ����    �Ա�    Ӣ��    c����    �ܷ�    ����    ��"<<endl;
                cout<<"��                                                                ��"<<endl;
                for(j=0;j<i;j++)
                {
                    cout<<"��  "<<st[j].num<<setw(10)<<st[j].name<<setw(7)<<st[j].sex<<setw(8)<<st[j].eng<<setw(8)<<st[j].clang<<setw(8)<<st[j].total<<setw(8)<<j+1<<"     ��"<<endl;
                }
                cout<<"��          ƽ  ��  ��             "<<s1<<setw(8)<<s2<<setw(8)<<s3<<"           ��"<<endl;
                cout<<"��                                                                ��"<<endl;
                cout<<"��������������������������������������������������������������������"<<endl;
                cout<<endl<<endl<<"�밴���������";
                e=getch();
                goto GOTO1;
        }
    }
    else
    {

            system("cls");
            cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
            cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
            cout<<"                      �U                           x�U"<<endl;
            cout<<"                      �U  �������ѡ�����!!!!!   �U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �U      ��ȷ�Ϻ�������        �U"<<endl;
            cout<<"                      �U                            �U"<<endl;
            cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
            Sleep(3000);
            goto GOTO1;
    }
}


void read(PP*H)//��ȡ
{
    long int s_num;
    int i;
    FILE *fp;
    PP p,q,r;
    if((fp=fopen("D:student.txt","r"))==NULL)
    {
        system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"                      �X�T�T�T�T�T�T�T�T�T�T�T�T�T�T�["<<endl;
        cout<<"                      �U                           x�U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U      �ļ���ʧ��!!!!!     �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �U                            �U"<<endl;
        cout<<"                      �^�T�T�T�T�T�T�T�T�T�T�T�T�T�T�a"<<endl;
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
                cout<<"����ռ�ʧ�ܣ�����";
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

