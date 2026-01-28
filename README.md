<h1 style="text-align: center;">Cipher Tools（原名瑞士军刀） x Rana Toolkit</h1>
<div align="center">
<img src="git_img/CipherTools_NameIco.png" alt="Logo" width="300" height="360">
</div>

<p align="center">
<a href="https://cipher.ne0w0r1d.top">官方文档</a>
</p>

## Cipher Tools 简介

这是一个在 [Yumeyo 开发的 NetInfoChecker 网络综合查询器（e语言版）](https://github.com/Yumeyo23/NetInfoChecker)为灵感的<br>
在 Qt6 进行实现的集网络信息、WOL唤醒、NAT 检测、游戏 IP 和全球网测延迟检测、路由跟踪为一身的超级工具<br>
与此同时，原作者正在使用 .NET 4 WinForm 重构开发 [NetInfoCheckerX](https://github.com/Yumeyo23/NetInfoCheckerX)，其目的是为了兼容旧 Windows 设备，不跨平台，也不现代，只觉得使用 .NET 4 WinForm 十分“轻量”。<br>
本软件设计之初就是为了现代 X86_64 和跨平台而生（但 QtWidget 真现代吗？未来可能研究一下 QML！）<br>

## 中文翻译明明是密码？为什么用其作为名字呢？

名字取自于《崩坏：星穹铁道》的[赛飞儿](https://mzh.moegirl.org.cn/%E8%B5%9B%E9%A3%9E%E5%84%BF)，啊没错就是那只猫娘，~~你也可以理解为是无畏契约的阴暗保安零~~<br>

## 预览截图

![Home](git_img/sc.png)<br>

## Road To Stable (Alice/Burnice) TO-DO LIST

- [X] UI基础布局(Anno)<br>
- [X] 日志实现(Rana-Re)<br>
- [X] 多网卡信息输出实现(Rana-Re)<br>
- [X] USTC 和 NJU 测速站加入(Rana-Re)<br>
- [ ] API 选择和日志功能开关(Rana-Re)
- [ ] Linux 环境下，实现尊重 XDG 目录标准(Alice-Beta)<br>
- [ ] 加入代理 IP 的 ISP + ASN 检测(Alice-Beta)<br>
- [ ] 基于 QML/QtWebEngine 的可独立运行的工具箱 1.0<br>
	- [X] 多出口 - 在线版(Rana-Re，基于 QtWebEngine，在 NXT 阶段用 QML 版的 Clairvoyance 替代)<br>
    - [ ] NAT 检测 （GateEye，计划在 Alice 分支整合进 CipherTools）<br>
    - [ ] Ping （Echo，计划在 Alice 分支整合进 CipherTools）<br>
    - [ ] Wake On Lan（Awaken，计划在 Alice 分支整合进 CipherTools）<br>
    - [ ] 自由查询（OriginSearch，计划在 Burnice 分支整合进 CipherTools）<br>

## NXTStable - Tomori/Vivian 画饼环节

- [ ] 使软件技术栈更加现代化 ── 使用 QML 和现代 UI 库<br>
- [ ] i18n 国际化（至少需要有简中、繁中、英语）<br>
- [ ] 工具箱新功能<br>
	- [ ] 设备信息（DeviceEye，基于 Windows WMI 和 Linux 内置命令）
   	- [ ] DNS 污染检测 （Beacon）<br>
  	- [ ] Traceroute 路由检测（Trace）<br>
  	- [ ] 多出口 - QML (Clairvoyance)

## CipherTools 主要分支

> 开发代号将使用《BanG Dream! It's MyGO!!!!! & Ave Mujica》以及《绝区零》的角色作为开发代号<br>

> 加粗为当前阶段

| 开发代号 | 版本号 | 分支状态 |
| ----- | ----- | ----- |
| Anno（千早爱音） | 0.3.anno.prototype | Prototype |
| Rana（要乐奈） | 0.4.rana.alpha.[builddate] | Alpha-Old |
| **Rana-Re（要乐奈）** | **CIPHER.rana.commitdate** | **Alpha-Re** |
| Taki（椎名立希） | CIPHER.1.0.0.taki.commitdate | RollingDev For Stable 稳定版前主线开发 |
| Burnice（柏妮思） | CIPHER.1.X.X.burnice | Stable |
| Saki（丰川祥子） | CIPHER.1.X.X.saki | Rolling Dev For Burnice 稳定版后主线开发 |

## AIGC 相关

本项目含有部分 AIGC 代码，但本人会经过测试实验并因此学习改进

## 许可协议
[![Built With Qt](git_img/qt.png)](https://qt.io)<br>
本软件使用 Qt 为技术栈<br>
- Qt 多数库使用 GNU Lesser General Public License 3.0 （LGPL3.0） 自由开源协议开源<br>
- 本软件为动态编译，因此不被 GNU 污染<br>
- 本软件暂无使用 GPLv3 协议的 Qt 库
	- 如有使用，将主动增加 GPLv3 双协议<br>
- Qt WebEngine 基于 Chromium，使用多重开源协议开源，请参考 Chromium 项目开源协议<br>

本软件使用 MIT 协议自由开源，在使用本软件时，请尊重 MIT 开源许可协议内容的同时
- 如要修改代码（无论开源闭源），分发本软件，需要将本仓库的 LICENSE 原样保留到程序目录<br>
- 因 Qt 使用 LGPL3 开源许可协议，请勿尝试静态编译以免被 GPL 传染<br>
- 本软件的 API 接口来自网上公开的 API，请勿滥用而导致 API 不再可用，所使用 API 可在文档和代码内查阅<br>

## 项目基建鸣谢！

- [腾讯 EdgeOne](https://cloud.tencent.com/product/teo)
- [Ne0W0r1d新界](https://ne0w0r1d.top)
- [RIN7TK](https://stat.rin.red/)
