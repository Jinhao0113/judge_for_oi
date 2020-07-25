# Judge for oi

### 杂谈

作为一个~~已经退役~~的Oier,被浸泡在文化课的快乐中

可是觉得oi或许需要一个测评工具

现在已经有了`lemon`,`ccr`这一类的工具

基本上都支持了`windows`和一些`linux`。

但是，无法在没有图形操作界面的`linux`和`mac`上用

于是想写一个命令行的测评工具

### 计划

由于我还是一个初中生，只有暑寒假在有可能有点时间。

更新，编写速度可能会很慢，而且可能有锅...

不过我会尽可能完善它

如果有可能，就为它在写一个云测评功能。

### 使用

#### 题目

单道题测试及数据存储，还有提交者代码。

##### 新建

```bash
$ judge_for_oi p new "保存题目目录" 
```

##### 结构

```
\- 保存题目目录
    \- config.jfop
    (\- judge.cpp)
    \- data
        \- test1.in
        \- test1.out
        \- test2.in
        \- test2.out
        ...
    \- src
        \- somebody1
            \- src.cpp
        \- somebody2
            \- src.cpp
        ...
```

##### 解释

`config.jfop`存放的是题目配置，详细语法见[这里](https://github.com/lz2019hjh/judge_for_oi/blob/master/doc/grammar_for_jfop.md)

`data`放数据

`src`放的是代码

目录下的`somebody1`,`somebody2`是提交者

`src.cpp`是源代码

##### 提交

```bash
$ judge_for_oi p sbm "选手1目录" "选手2目录"
```

如出现选手名称已存在，将会提醒，如下

```
选手已存在，替换c并回车,退出提交回车
```

##### 测试

测试所有选手

```bash
$ judge_for_oi p jdg "保存题目目录" all 
```

测试指定选手

```bash
$ judge_for_oi p jud "保存题目目录" "somebody1" "somebody2" ...
```

#### 比赛

比赛测试及数据存储，还有提交者代码。

##### 新建

```bash
$ judge_for_oi c new "保存比赛目录" 
```

##### 结构

```
\- 保存比赛目录
    \- config.jfoc
    \- prob
        \- prob_A
            \- config.jfop
            (\- judge.cpp)
            \- data
                \- test1.in
                \- test1.out
                \- test2.in
                \- test2.out
                ... 
        \- prob_B
            \- config.jfop
            (\- judge.cpp)
            \- data
                \- test1.in
                \- test1.out
                \- test2.in
                \- test2.out
                ... 
    \- src
        \- somebody1
            \- prob_A
                \- src_A.cpp
            \- prob_B
                \- src_B.cpp
            ...
        \- somebody2
            \- prob_A
                \- src_A.cpp
            \- prob_B
                \- src_B.cpp
            ...
        ...
```

##### 解释

`config.jfoc`存放的是题目配置，详细语法见[这里](https://github.com/lz2019hjh/judge_for_oi/doc/grammar_for_jfoc.md)

`data`放数据

`src`放的是代码

目录下的`somebody1`,`somebody2`是提交者

`prob_A/src_A.cpp`,`prob_B/src_B.cpp`是源代码

##### 提交

```bash
$ judge_for_oi c sbm "选手1目录" "选手2目录"
```

如出现选手名称已存在，将会提醒，如下

```
选手已存在，替换c并回车,退出提交回车
```

##### 测试

测试所有选手

```bash
$ judge_for_oi c jdg "保存题目目录" all 
```

测试指定选手

```bash
$ judge_for_oi c jud "保存题目目录" "somebody1" "somebody2" ...
```

### 构建/下载

bash输入
```bash
$ git clone https://lz2019hjh/judge_for_oi --depth=1 ~/.judge_for_oi
$./install.sh
```

