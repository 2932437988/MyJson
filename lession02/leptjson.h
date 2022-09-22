/*
 *避免重复声明
 */
#ifndef LEPTJSON_H__
#define LEPTJSON_H__

/*
 * JSON中有六种数据类型，如果把true和flase、当做两个类型就是七种，因而为此声明一个枚举类型(enumeration type)
 */
typedef enum { LEPT_NULL, LEPT_FALSE, LEPT_TRUE, LEPT_NUMBER, LEPT_STRING, LEPT_ARRAY, LEPT_OBJECT } lept_type;

/*
 * 声明JSON的数据结构
 * JSON是一个树形结构，每个节点用 lept_value 结构体表示，称其为一个 JSON 值(JSON value)
 * C语言的结构体是以 struct X {} 形式声明的，定义变量时也要写成 struct X x; ，为了方便使用，代码加入了 typedef 
 */
typedef struct {
	double n;
	lept_type type;
}lept_value;

enum {
	LEPT_PARSE_OK = 0,
	LEPT_PARSE_EXPECT_VALUE,
	LEPT_PARSE_INVALID_VALUE,
	LEPT_PARSE_ROOT_NOT_SINGULAR,
	LEPT_PARSE_NUMBER_TOO_BIG
};

/*
 * API 函数 ：解析JSON
 * 	参数 ：
 * 	-lept_value* v ：数据类型
 * 	-const char* json ：字符串
 */
int lept_parse(lept_value* v, const char* json);

/*
 * API函数 ：访问结果，获取类型
 * 	参数 ：
 * 	-const lept_value* v ：
 */
lept_type lept_get_type(const lept_value* v);

/*
 * API函数 ：获取 JSON 数字的数值
 */
double lept_get_number(const lept_value* v);

#endif /* LEPTJSON_H__ */
