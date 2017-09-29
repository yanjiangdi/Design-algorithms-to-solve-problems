#include<iostream>
#include<string>
using namespace std;


class Process
{
public:
string ProcessName;  // ��������
 int Time;  //  ������Ҫʱ��
 int leval; //  �������ȼ�
 int LeftTime; // ��������һ��ʱ�����Ҫ��ʱ��
}; 

void Copy ( Process proc1, Process proc2); // ��proc2��ֵ��proc1
void Sort( Process  pr[], int size) ; // ����������ȼ��Ӵ�С����
void sort1(Process  pr[], int size) ; //  ���������Ҫ��cpuʱ���С��������
void Fcfs( Process pr[], int num, int Timepice); // �����ȷ����㷨
void TimeTurn( Process process[], int num, int Timepice); // ʱ��Ƭ��ת�㷨
void Priority( Process process[], int num, int Timepice); // ���ȼ��㷨

int main()
{  
 int a;
 cout<<endl;
 cout<<"  ѡ������㷨��"<<endl;
 cout<<"  1: FCFS  2: ʱ��Ƭ�ֻ� 3: ���ȼ����� 4: �����ҵ���� 5: ���ʣ��ʱ������"<<endl;
 cin>>a; 
const int Size =30;
 Process   process[Size] ;
 int num;
 int TimePice;  
cout<<" ������̸���:"<<endl;
 cin>>num;
 cout<<" ����˽���ʱ��Ƭ��С: "<<endl;
 cin>>TimePice;
for( int i=0; i< num; i++)
 {  
  string name;
  int CpuTime;
  int Leval;
  cout<<" �����"<< i+1<<" �����̵����֡�cpuʱ������ȼ�:"<<endl;
  cin>>name;
  cin>> CpuTime>>Leval;
  process[i].ProcessName =name;
  process[i].Time =CpuTime;
  process[i].leval =Leval;
  cout<<endl;
}
for ( int k=0;k<num;k++)
  process[k].LeftTime=process[k].Time ;//�Խ���ʣ��ʱ���ʼ��
  cout<<" ( ˵��: �ڱ��������н�����Ϣ�У����ȼ�һ����ָ�������к�����ȼ�!! )";
  cout<<endl;   cout<<endl;
  cout<<"��������"<<"����ռ��CPUʱ�� "<<" ����Ҫռ��ʱ�� "<<" ���ȼ�"<<"   ״̬"<<endl;
if(a==1)
     Fcfs(process,num,TimePice);
else if(a==2)
  TimeTurn(  process,   num,   TimePice);
else if(a==3)
{
 Sort( process, num);
    Priority(   process ,  num,  TimePice);
}
 else   //  �����ҵ�㷨���Ȱ�ʱ���С���������ٵ���Fcfs�㷨����
 {
  sort1(process,num);
  Fcfs(process,num,TimePice);
 }
 return 0;
}

void Copy ( Process proc1, Process proc2)
{
 proc1.leval =proc2.leval ;
 proc1.ProcessName =proc2.ProcessName ;
 proc1.Time =proc2.Time ;
}

void Sort( Process  pr[], int size)  //�Խ������ȼ��ߵ�����
{//  ֱ�Ӳ�������
 for( int i=1;i<size;i++)
 {
 Process temp;
     temp = pr[i];
     int j=i;  
     while(j>0 && temp.leval<pr[j-1].leval)
  {
       pr[j] = pr[j-1];
   j--;
  }
    pr[j] = temp;
} // ֱ�Ӳ����������̰����ȼ���С��������
 for( int d=size-1;d>size/2;d--)
 {
  Process temp;
  temp=pr [d];
     pr [d] = pr [size-d-1];
  pr [size-d-1]=temp;
}  // ����������ȼ��Ӵ�С����
}
/* �����ҵ�����㷨��ʵ��*/
void sort1 ( Process  pr[], int size)  // �Խ���ʱ��ӵ͵�������
{//  ֱ�Ӳ�������
 for( int i=1;i<size;i++)
 {
 Process temp;
     temp = pr[i];
     int j=i;  
     while(j>0 && temp.Time < pr[j-1].Time )
  {
       pr[j] = pr[j-1];
   j--;
  }
    pr[j] = temp;
}  
}
/*  �����ȷ����㷨��ʵ��*/
void Fcfs( Process process[], int num, int Timepice)
{  // process[] ������Ľ��̣�num�ǽ��̵���Ŀ��Timepice��ʱ��Ƭ��С
while(true)
 {
  if(num==0)
  {
   cout<<" ���н��̶��Ѿ�ִ�����!"<<endl;
   exit(1);
  }
    if(process[0].LeftTime==0)
    {
  cout<<" ����"<<process[0].ProcessName<< " �Ѿ�ִ�����!"<<endl;
     for (int i=0;i<num;i++)
     process[i]=process[i+1];
          num--;
    }
    else if(process[num-1].LeftTime==0)
  {
     cout<<" ����"<<process[num-1].ProcessName<< " �Ѿ�ִ�����!"<<endl;
     num--;
  }
  else
  {
          cout<<endl;  //����������еĽ���
             process[0].LeftTime=process[0].LeftTime- Timepice;
             process[0].leval =process[0].leval-1;
             cout<<" "<<process[0].ProcessName <<"          "<<process[0].Time <<"                 ";
             cout<<process[0].LeftTime <<"                 "<<process[0].leval<<"      ����"; 
          cout<<endl;  
    for(int s=1;s<num;s++)
     {
      cout<<" "<<process[s].ProcessName <<"          "<<process[s].Time <<"                 ";
     cout<<process[s].LeftTime    <<"                 "<<process[s].leval<<"      �ȴ�"<<endl; ; 
         
         }
  }  // else
  cout<<endl;
  system(" pause");
  cout<<endl;
      
 } // while 
}
/* ʱ��Ƭ��ת�����㷨ʵ��*/
void TimeTurn( Process process[], int num, int Timepice)
{
while(true)
 {
  if(num==0)
  {
   cout<<" ���н��̶��Ѿ�ִ�����!"<<endl;
   exit(1);
  }
    if(process[0].LeftTime==0)
    {
  cout<<" ����"<<process[0].ProcessName<< " �Ѿ�ִ�����!"<<endl;
     for (int i=0;i<num;i++)
     process[i]=process[i+1];
          num--;
    }
     if( process[num-1].LeftTime ==0 )
  {
        cout<<" ����" << process[num-1].ProcessName <<" �Ѿ�ִ�����! "<<endl;
         num--;
  }
  else if(process[0].LeftTime > 0)
    {
          cout<<endl;  //����������еĽ���
             process[0].LeftTime=process[0].LeftTime- Timepice;
             process[0].leval =process[0].leval-1;
             cout<<" "<<process[0].ProcessName <<"          "<<process[0].Time <<"                 ";
             cout<<process[0].LeftTime <<"                 "<<process[0].leval<<"      ����"; 
          cout<<endl;  
    for(int s=1;s<num;s++)
     {
      cout<<" "<<process[s].ProcessName <<"          "<<process[s].Time <<"                 ";
     cout<<process[s].LeftTime    <<"                 "<<process[s].leval; 
          if(s==1)
     cout<<"      ����"<<endl;
    else
     cout<<"      �ȴ�"<<endl;
         
         }
  Process temp;
    temp = process[0];
    for( int j=0;j<num;j++)
     process[j] = process[j+1];
    process[num-1] = temp;
  } // else 
   
  cout<<endl;
  system(" pause");
  cout<<endl;
} // while 
}
/*  ���ȼ������㷨��ʵ��*/
void Priority( Process process[], int num, int Timepice)
{
 while( true)
 {
  if(num==0)
  {
   cout<< "���н��̶��Ѿ�ִ�����!"<<endl;
      exit(1);
  }
if(process[0].LeftTime==0)
 {
  cout<<" ����" << process[0].ProcessName <<" �Ѿ�ִ�����! "<<endl;
  for( int m=0;m<num;m++) 
    process[m] = process[m+1]; //һ������ִ����Ϻ��������ɾ��
  num--; // ��ʱ������Ŀ����һ��
 }
 if( num!=1 && process[num-1].LeftTime ==0 )
  {
   cout<<" ����" << process[num-1].ProcessName <<" �Ѿ�ִ�����! "<<endl;
    num--;
 }
if(process[0].LeftTime > 0)
  {
    cout<<endl;  //����������еĽ���
 process[0].LeftTime=process[0].LeftTime- Timepice;
    process[0].leval =process[0].leval-1;
    cout<<" "<<process[0].ProcessName <<"          "<<process[0].Time <<"                 ";
    cout<<process[0].LeftTime <<"                 "<<process[0].leval<<"     ����"; 
cout<<endl;                  // �����������
   for(int s=1;s<num;s++)
  {
    cout<<" "<<process[s].ProcessName <<"          "<<process[s].Time <<"                 ";
    cout<<process[s].LeftTime    <<"                 "<<process[s].leval ; 
   if(s==1)
    cout<<"     ����"<<endl;
   else
    cout<<"     �ȴ� "<<endl;
   } 
} // else
  Sort(process, num);
  cout<<endl;
  system(" pause");
  cout<<endl;
} // while

}
