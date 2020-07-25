#include<bits/stdc++.h>
#include"contest.h"
#include"problem.h"
using namespace std;
int contest(int argc,char *argv[])
{
    if(strcmp(argv[2]),"new")
    {
        contest::new();
    }
    else if(strcmp(argv[2]),"")
    {
        contest::new();
    }
    return 0;
}
int problem(int argc,char *argv[])
{
    return 0;
}
int main(int argc, char *argv[])
{
    char argv_1;
    sscanf(argv[1],"%c",&argv_1);
    if(argv_1=='c')
    {
        contest(argc,argv);
    }
    else if(argv_1=='p')
    {
        problem(argc,argv);
    }
    else
    {
        printf("参数:\"%s\" 未找到\n exit code 1\n",argv[1]);
        return 1;
    }
    return 0;
}