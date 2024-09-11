# Linux高性能服务器项目blog
## 使用mysql开发c++程序 
- [即使显示有mysql软件，但是可只是能正常使用mysql,可能没有安装c++开发包](https://downloads.mysql.com/archives/community/)
- [需要额外安装c++驱动器](https://downloads.mysql.com/archives/c-cpp/)
- 根据依赖关系安装好所有rpm文件(使用rpm安装文件的时候会显示你需要提前安装的文件)
- 在你的模拟器下，可能有一个叫做mariadb的包会和mysql冲突需要删除
- 源代码中给的错误比较笼统，可以自己增加一下（连接错误还是注册错误）,方便定位错误
- [部分参考](https://www.bilibili.com/video/BV1qS4y1h77S/?spm_id_from=333.880.my_history.page.click&vd_source=9a99292d82e4fa20562a3b59c0bea60a)
  
## 配置相关
- 防火墙记得打开你开放的端口，以9006为例就是`sudo firewall-cmd --zone=public --add-port=9006/tcp --permanent`
  
