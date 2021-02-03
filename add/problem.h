#include<bits/stdc++.h>
using namespace std;
namespace problem
{
int new__(int argc,char *argv[])
{
    ifstream read_from_temp("~/.judge_for_oi/template/problem/config.jfop");
    ofstream write_to_argv_3(strcpy(argv[3],"/config.jfop"));
    char read_char;
    while(read_from_temp.get(read_char))
        write_to_argv_3<<read_char;
    write_to_argv_3.close();
    read_from_temp.close();
    ofstream write_to_argv_3_1(strcpy(argv[3],"/data/.temp"));
    write_to_argv_3_1<<'\n';
    write_to_argv_3_1.close();
    ofstream write_to_argv_3_2(strcpy(argv[3],"/src/.temp"));
    write_to_argv_3_2<<'\n';
    write_to_argv_3_2.close();    
    return 0;
}
int judge(int argc,char *argv[])
{
    return 0;
}
int submit(int argc,char *argv[])
{
    return 0;
}
};