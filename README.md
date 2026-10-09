# Qt 学习项目集

这是一个基于 Qt 6 和 CMake 的练习项目集合。每个示例项目都可以单独使用 Qt Creator 打开并构建。

## 项目目录

| 目录 | 简介 |
| --- | --- |
| `BaseConversion` | 二进制、八进制、十进制和十六进制转换 |
| `Calculator` | 表达式计算器 |
| `CatchMeIfYouCan` | 按钮交互小程序 |
| `CommandRunner` | 使用 `QProcess` 启动命令 |
| `CommonLayouts` | Qt 常见布局管理示例 |
| `Dashboard` | 仪表盘控件示例 |
| `DateTimeEx` | 日期、时间与日历示例 |
| `MetaObject` | Qt 元对象与动态属性示例 |
| `MySQLDemo` | Qt SQL / ODBC 数据库连接示例 |
| `NotepadDemo` | 简易文本编辑器 |
| `QLabel` | `QLabel` 控件示例 |
| `QProgressBar` | `QProgressBar` 控件示例 |
| `QPushButton` | 按钮状态与图标示例 |
| `QRadioButton` | `QRadioButton` 控件示例 |
| `QSlider` | `QSlider` 控件示例 |
| `QTimerDemo` | 使用 `QTimer` 定时执行任务 |
| `QTreeWidget` | 树形控件与图片浏览示例 |
| `QWidgetDemo` | 窗口、字体与颜色设置示例 |
| `SignalAndSlot` | Qt 信号与槽示例 |
| `TCPClient` | TCP 客户端示例 |
| `TCPServer` | TCP 服务端示例 |
| `TimerDemo` | 定时器事件与图片切换示例 |

## 共享资源

- `images/`：定时器示例使用的图片。
- `Notepad_app/`：记事本运行环境使用的 Qt 多语言翻译文件。

构建目录和 Qt Creator 用户配置由 `.gitignore` 排除；每个项目的 `CMakeLists.txt` 定义了各自的构建目标。
