# MyJson
## 关于JSON
JSON (JavaScript Object Notation,JS对象简谱) 是一种轻量级的数据交换格式。它基于ECMAScript (European Computer Manufacturers Association,欧洲计算机协会指定的js规范) 的一个子集，采用完全独立于编程语言的文本格式来存储和表示数据。简洁和清晰的层次结构使得JSON成为理想的数据交换语言。易于人阅读和编写，同时也易于机器解析和生成，并有效地提升网络传输效率。
## JSON语法
### JSON语法规则
JSON是一个标记符的序列。这套标记符包含六个构造字符、字符串、数字和三个字面名。

JSON是一个序列化的对象或数组。

1.六个构造字符：

begin-array = ws %x5B ws ; [ 左方括号

begin-object = ws %x7B ws ; { 左大括号

end-array = ws %x5D ws ; ] 右方括号

end-object = ws %x7D ws ; } 右大括号

name-separator = ws %3A ws ; : 冒号

value-separator = ws %x2C ws ; , 逗号

2.在这六个构造字符的前或后允许存在无意义的空白符(ws)

3.JSON的值：

3.1 JSON的构成：

ws 值 ws

3.2 值可以是对象、数组、数字、字符串或者三个字面值(false/null/true)中的一个。值中的字面值中的英文必须使用小写。

3.2.1 对象由花括号括起来的逗号分割的成员构成，成员是字符串键和上文所述的值由逗号分割的键值对组成，如：{"name": "John Doe", "age": 18, "address": {"country": "china", "zip-code": "10000"}}

JSON中的对象可以包含多个键值对，并且有数组结构，该语言正是一次实现过程内容的描述。

3.2.2 数组是由方括号括起来的一组值构成，如：[3, 1, 4, 1, 5, 9, 2, 6]

3.2.3 字符串与C或者Java的字符串非常相似。字符串是由双引号包围的任意数量Unicode字符的集合，使用反斜线(\)转义。一个字符(character）即一个单独的字符串(character string)。

3.2.4 数字也与C或者Java的数值非常相似。除去未曾使用的八进制与十六进制格式。除去一些编码细节。一些合法的JSON的实例：

{"a": 1, "b": [1, 2, 3]}

[1, 2, "3", {"a": 4}]

3.14

"plain_text"

### JSON与JS对象的关系

可以这么理解：JSON是JS对象的字符串表示法，它使用文本表示一个JS对象的信息，本质是一个字符串。
如：

var obj = {a: 'Hello', b: 'World'}; //这是一个对象，注意键名也是可以使用引号包裹的

var json = '{"a": "Hello", "b": "World"}'; //这是一个JSON字符串，本质上是一个字符串

### JSON和JS对象互转

要实现从JSON字符串转换为JS对象，使用JSON.parse()方法：

var obj = JSON.parse('{"a": "Hello", "b": "World"}');

要实现从JS对象转换为JSON字符串，使用JSON.stringify()方法：

var json = JSON.stringify({a: 'Hello', b: 'World'});

## 项目说明

本项目是跟随Milo Yip大佬的教程学习项目，学习了解实现JSON解析器和生成器同时也是熟悉git、vim等操作使用的过程，目前仅是跟随教程敲写了一边代码，仍有很多疑惑，之后会进一步学习理解并尝试实现XML的解析生成。以上内容源自百度百科，之后会加入个人理解，如有错误，多多指正。

大佬项目地址：https://github.com/miloyip/json-tutorial
