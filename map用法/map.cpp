
map<int, string> S;  
S.insert(pair<int, string>(1, "student_one"));//插入元素
int Size=S.size();                            //判断大小
for(map<int, string>::iterator iter = S.begin(); iter != S.end(); iter++)        //前向遍历，按照key值从小到大输出 
cout<<iter->first<<' '<<iter->second<<endl
for(map<int, string>::reverse_iterator iter = S.rbegin(); iter != S.rend(); iter++)//反向遍历,按照key值从大到小输出  
cout<<iter->first<<"  "<<iter->second<<endl;  
//查找元素
int a = S.count("student"); 
int b = S.count(1)
map<int, string>::iterator iter1 = S.find("student");//没找到返回S.end()，找到了返回对应的迭代器，可以获得iter->first,iter->second
map<int, string>::iterator iter2 = S.find(1);        //没找到返回S.end()
//删除元素,用迭代器，关键字，或删除一个范围
map<int, string>::iterator iter = S.find(1);    
S.erase(iter);                              //用迭代器删除
int n = mapStudent.erase(1);                //用关键字删除，如果删除了会返回1，否则返回0  
//用迭代器，成片的删除  
//一下代码把整个map清空  
mapStudent.erase( mapStudent.begin(), mapStudent.end() );

//排序
map是默认降序排序，所以要改变排序顺序，必须对key类重载<运算符，如果是内置类型，则需要用结构包装一下
#include <iostream>
#include <string>
#include <map>
using namespace std;
typedef struct tagStudentinfo
{
       int      niD;
       string   strName;
       bool operator < (tagStudentinfo const& _A) const
       {     //这个函数指定排序策略，按niD排序，如果niD相等的话，按strName排序
            if(niD < _A.niD) return true;
            if(niD == _A.niD)
                return strName.compare(_A.strName) < 0;
        return false;
       }
}Studentinfo, *PStudentinfo; //学生信息
int main()
{
    int nSize;   //用学生信息映射分数
    map<Studentinfo, int>mapStudent;
    map<Studentinfo, int>::iterator iter;
    Studentinfo studentinfo;
    studentinfo.niD = 1;
    studentinfo.strName = "student_one";
    mapStudent.insert(pair<Studentinfo, int>(studentinfo, 90));
    studentinfo.niD = 2;
    studentinfo.strName = "student_two";
    mapStudent.insert(pair<Studentinfo, int>(studentinfo, 80));
    for (iter=mapStudent.begin(); iter!=mapStudent.end(); iter++)
        cout<<iter->first.niD<<' '<<iter->first.strName<<' '<<iter->second<<endl;
    return 0;
}

//判断插入成功
pair<map<int, string>::iterator, bool> Insert_Pair;  
Insert_Pair = S.insert(pair<int, string>(1, "student_one"));
if(Insert_Pair.second == true)
   cout<<"Insert Successfully"<<endl;
else   cout<<"Insert Failure"<<endl;

