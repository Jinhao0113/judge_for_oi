#include<bits/stdc++.h>
#include"contest.h"
#include"problem.h"
using namespace std;
int contest_(int argc,char *argv[])
{
    if(strcmp(argv[2],"new"))
    {
        contest::new__(argc,argv);
        return 0;
    }
    else if(strcmp(argv[2],"jdg"))
    {
        contest::judge(argc,argv);
        return 0;
    }
    else if(strcmp(argv[2],"sbm"))
    {
        contest::submit(argc,argv);
        return 0;
    }
    printf("参数:\"%s\" 未找到\n exit code 1\n",argv[2]);
    return 1;
}
int problem_(int argc,char *argv[])
{
    if(strcmp(argv[2],"new"))
    {
        problem::new__(argc,argv);
        return 0;
    }
    else if(strcmp(argv[2],"jdg"))
    {
        problem::judge(argc,argv);
        return 0;
    }
    else if(strcmp(argv[2],"sbm"))
    {
        problem::submit(argc,argv);
        return 0;
    }
    printf("参数:\"%s\" 未找到\n exit code 1\n",argv[2]);
    return 1;
}
int main(int argc, char *argv[])
{
    char argv_1;
    sscanf(argv[1],"%c",&argv_1);
    if(argv_1=='c')
    {
        int return_num=contest_(argc,argv);
        if(return_num==1)return 1;
        else return 0;
    }
    else if(argv_1=='p')
    {
        int return_num=problem_(argc,argv);
        if(return_num==1)return 1;
        else return 0;
    }
    else
    {
        printf("参数:\"%s\" 未找到\n exit code 1\n",argv[1]);
        return 1;
    }
    return 0;
}