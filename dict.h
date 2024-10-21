#define MAX_DATA 1000

// OBJECT
// type=0,1,2–int/float/string
typedef struct {int type; char data[MAX_DATA];} object;

void int_to_obj(int src, object *dst);


//DICT
typedef struct st_dict_node {
    object key;
    object value;
    struct st_dict_node *next;
} dict_node;

typedef struct {
    dict_node *first;
    int len;
} dict;

dict *dict_new(); 