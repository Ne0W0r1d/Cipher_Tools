<h1 style="text-align: center;">Cipher Tools（原名瑞士军刀） x Rana Toolkit</h1>
<div align="center">
<img src="git_img/CipherTools_NameIco.png" alt="Logo" width="300" height="360">
</div>

<p align="center">
<a href="https://ct.ne0w0r1d.top">官方文档</a>
</p>

## Cipher Tools 简介

这是一个在 [Yumeyo 开发的 NetInfoChecker 网络综合查询器（e语言版）](https://github.com/Yumeyo23/NetInfoChecker)为灵感的<br>
在 Qt6 进行实现的集网络信息、WOL唤醒、NAT 检测、游戏 IP 和全球网测延迟检测、路由跟踪为一身的超级工具<br>
与此同时，原作者正在使用 .NET 4 重构开发 WinForm 版本的 [NetInfoCheckerX](https://github.com/Yumeyo23/NetInfoCheckerX)，其目的是为了兼容旧设备<br>
本软件设计之初就是为了现代 X86_64 和跨平台而生（但 QtWidget 真现代吗？未来可能研究一下 QML！）<br>

## 中文翻译明明是密码？为什么用其作为名字呢？而为什么子项目 Rana Toolkit 要叫 Rana 呢？

名字取自于《崩坏：星穹铁道》的[赛飞儿](https://mzh.moegirl.org.cn/%E8%B5%9B%E9%A3%9E%E5%84%BF)，啊没错就是那只猫娘，~~你也可以理解为是无畏契约的阴暗保安零~~<br>

## 预览截图

![Home](git_img/sc.png)<br>

## Road To Stable (Burnice) TO-DO LIST

- [X] UI基础布局(Anno)<br>
- [X] 日志实现(Rana-Re)<br>
- [X] 多网卡信息输出实现(Rana-Re)<br>
- [X] USTC 和 NJU 测速站加入(Rana-Re)<br>
- [X] 多出口(Rana-Re)<br>
- [ ] API 选择和日志功能开关(Rana-Re)
- [ ] Linux 环境下，实现尊重 XDG 目录标准(Alice-Beta)<br>
- [ ] 加入代理 IP 的 ISP + ASN 检测(Alice-Beta)<br>
- [ ] 可独立运行的工具箱 1.0<br>
    - [ ] NAT 检测 （GateEye 门关之眼，计划在 Alice 分支整合进 CipherTools）<br>
    - [ ] Ping （Echo 回音之钥，计划在 Alice 分支整合进 CipherTools）<br>
    - [ ] Wake On Lan（Awaken 苏醒之音，计划在 Alice 分支整合进 CipherTools）<br>
    - [ ] 自由查询（Origin 原初之印，计划在 Burnice 分支整合进 CipherTools）<br>

## NXTStable - Vivian 画饼环节

- [ ] 使软件技术栈更加现代化 ── 使用 QML 和现代的 UI 库进行美化<br>
- [ ] i18n 国际化（至少需要有简中、繁中、英语）<br>
- [ ] 工具箱新功能<br>
    - [ ] iPerf3 测速 （Bolt 雷霆之矛）<br>
    - [ ] DNS 污染检测 （Beacon 指路之炬）<br>
    - [ ] Traceroute 路由检测（Trace 寻径之镜）<br>

## CipherTools 主要分支

> 开发代号将使用《BanG Dream! It's MyGO!!!!! & Ave Mujica》以及《绝区零》的角色作为开发代号<br>

> 加粗为当前阶段

| 开发代号 | 版本号 | 分支状态 |
| ----- | ----- | ----- |
| Anno（千早爱音） | 0.3.anno.prototype | Prototype，已停止维护 |
| Rana（要乐奈） | 0.4.rana.alpha.[builddate] | Alpha-Old |
| **Rana-Re（要乐奈）** | **CIPHER.rana.alpha.[builddate]** | **Alpha-Re** |
| Alice（爱丽丝） | CIPHER.alice.beta.[builddate] | Beta |
| Burnice（柏妮思） | CIPHER.alice.beta.[builddate] | Beta |

## AIGC 相关

本项目含有部分 AIGC 代码，但本人会经过测试实验并因此学习改进

## 许可协议

本软件使用 Qt 技术栈，Qt 使用 GNU General Public License x GNU Lesser General Public License 3.0 双自由开源协议开源，Qt WebEngine 基于 Chromium，使用多重开源协议开源，引用请参考 Chromium 项目开源协议<br>
[![Built With Qt](git_img/qt.png)](https://qt.io)<br>

本软件使用 MIT 自由开源协议开源<br>
USTC 和 NJU 测速站由 USTC 与 NJU 所有，解释权由 USTC 和 NJU 所有，本软件只提供跳板<br>

## 项目基建鸣谢！

- [腾讯 EdgeOne](https://cloud.tencent.com/product/teo)
- [Ne0W0r1d新界](https://ne0w0r1d.top)
- [RIN7TK](https://stat.rin.red/)
