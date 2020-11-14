#ifndef _LEPTJSON_H_
#define _LEPTJSON_H_

typedef enum {
    LEPT_NULL,
    LEPT_FALSE,
    LEPT_TRUE,
    LEPT_NUMBER,
    LEPT_STRING,
    LEPT_ARRAY,
    LEPT_OBJECT
} lept_type;

typedef struct {
    lept_type type;
} lept_value;

enum {
    LEPT_PARSE_OK = 0,
    LEPT_PASE_EXPECT_VALUE,
    LEPT_PARSE_INVALID_VALUE,
    LEPT_PARSE_ROOT_NOT_SINGULAR
};

int lept_parse(lept_value *v, const char *json);

lept_type lept_get_type(const lept_value *v);

#endif /* _LEPTJSON_H_ */
