# GetFreeInCsuft

## :star: 前言

GetFreeInCsuft 项目致力于使广大 Csufter 能够较为舒服的使用校园网，当然既然起了这个名字，应该不限于校园网，任何能够方便大家的事情应该都可以，欢迎共建。

笔者家贫，无从致网以用，每假借于有网之人，手脚并用，计分以还...... 咳咳，总之后来发现了 mentohust 这个项目，于是使用了 Openwrt + mentohust 在宿舍内用了两年路由器，后来想要在 windows 上使用，于是有了该项目，也算是对自己大学期间折腾网络的总结吧。

锐捷客户端很恶心的一个地方就是，对于计算机专业同学来说，开启虚拟机会造成多 IP 导致掉线，十分恶心，并且不能电脑开热点。

## :bookmark_tabs:项目说明

由于该 Mentohust 项目十分久远，源码已经找不到了，找到了一个魔改版本：[zzurj](https://github.com/2512500960/zzurj)，总之基于 802.1x 的认证包结构大致都差不多，所以基本上就是针对这个项目进行了部分魔改，更改了部分字段的偏移量，总之目前暂时能用了，隐藏 Bug 应该不会少，有问题请提 Issues 或 [QQ群：389616405](https://qm.qq.com/cgi-bin/qm/qr?k=Fn2dZQUkubDl_rA8E-Yv8kcut5fzGML2&jump_from=webapi&authKey=1Om2MmWG3CbOakrQf257j1eCX+WpRbQAYABGYfE3SB19bzlzc0S5hRpZCKcnJVrR)

## :pencil2: 项目使用

For Windows:

- 请直接在 Release 中下载最新版本，32 位操作系统选则 x86，64 位操作系统选择 x64

For Linux:

- Linux 可以使用 [minieap](https://github.com/updateing/minieap)，使用 Linux 作为主系统，相信你的能力是可以的，加油！

For Mac：

- I can't do it，似乎是有相关的项目的

### Windows

> **注意：本程序是用来代替锐捷官方程序认证的，解除了一些限制。** 
>
> 若有线网接口异常，俺也无能为力。使用本程序认证成功后 **可以正常开启电脑热点**
>
> 对计算机专业同学来说，开启虚拟机锐捷官方程序会提示**多 IP 在线** 导致认证失败，本程序并不会有这样的问题

1. 安装 `WinPcap`：

   ① 双击 `WinPcap.4.1.3.exe` 默认安装即可，② 若提示 "A newer version of WinPcap (···) is already installed on this machine."，则代表您的设备上已经有该程序了

2. 设置以管理员方式运行：

   ① 右键 **锐捷认证助手.exe**，② 点击 **兼容性**，③ 选择 **以管理员身份运行此程序**，④ 点击 **应用**

3. 双击打开认证助手，并设置账号密码

   ![image-20230221164548408](assets/image-20230221164548408.png)

4. 选择网卡

   **默认选择的网卡一定不是有线网卡！！！网卡列表中包含以下字符的一定不是有线网卡：**

   - `Microsoft`
   - `Wireless`
   - `AX`
   - `AC`
   - `Adapter`
   - `Hyper-V`
   - `Virtual`
   - `Wan`

5. 点击认证上网

   有时会卡在无法找到认证服务器，请尝试断开再次认证，认证成功后就不会掉线

6. 设置开启自动启动以及自动认证

   ![image-20230221164750301](assets/image-20230221164750301.png)

7. 开启电脑热点：

   若提示无法开启，请尝试重启电脑。

## 其他

> 其实教程满天飞，我们生在信息爆炸的时代，虽然获取信息的途径多种多样，但信息差却一直是人与人之间很大的差距。

为了提高项目可读性，本部分内容已迁移至我的个人博客：[www.Xbai-hang.com](https://www.Xbai-hang.com/) 及项目子文件夹下：

1. <a href="./article/路由器共享有线网.md">路由器共享有线网</a>
2. <a href="./article/交叉编译 mentohust 及 Openwrt.md">交叉编译 mentohust 及 Openwrt</a>

## 版本说明

### V1.1

- 第一次编译，<del>仅针对电信认证进行抓包更改字段偏移量，未对移动、联通账号进行测试，不过按照推算应该是都一样的。</del>，已测试电信、移动、联通账号均可正常认证，目前西园 17栋、东园27栋出现获取到 IP 无法连接认证服务器的情况
- 已将 dll 文件打包，故小助手程序本体不止 `1Mb`，x86 对应 32 位操作系统，x64 对应 64 位操作系统
